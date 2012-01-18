

#include "LibJAUSComponent.h"
#include "JausUtils.h"

using namespace JTS;
using namespace urn_jaus_jss_core_Transport_1_0;
using namespace urn_jaus_jss_core_Events_1_0;
using namespace urn_jaus_jss_core_AccessControl_1_0;
using namespace urn_jaus_jss_environmentSensing_VisualSensor_1_0;
using namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0;
using namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0;
using namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0;
using namespace urn_jaus_jss_core_Management_1_0;
using namespace urn_jaus_jss_mobility_PrimitiveDriver_1_0;
using namespace urn_jaus_jss_mobility_ListManager_1_0;
using namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0;
using namespace urn_jaus_jss_mobility_LocalVectorDriver_1_0;
using namespace urn_jaus_jss_mobility_LocalPoseSensor_1_0;
using namespace urn_jaus_jss_core_Liveness_1_0;
using namespace urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0;
using namespace urn_jaus_jss_mobility_GlobalVectorDriver_1_0;
using namespace urn_jaus_jss_mobility_GlobalPoseSensor_1_0;
using namespace urn_jaus_jss_core_Discovery_1_0;
using namespace urn_jaus_jss_mobility_AccelerationStateSensor_0_6;


LibJAUSComponent::LibJAUSComponent(unsigned int subsystem, unsigned short node, unsigned short component)
{
	jausRouter = new JausRouter(JausAddress(subsystem, node, component), ieHandler);
	
	/// Instantiate services
	TransportService* pTransportService = new TransportService(jausRouter);
	EventsService* pEventsService = new EventsService(jausRouter, pTransportService);
	AccessControlService* pAccessControlService = new AccessControlService(jausRouter, pTransportService, pEventsService);
	VisualSensorService* pVisualSensorService = new VisualSensorService(jausRouter, pTransportService, pEventsService, pAccessControlService);
	DigitalVideoService* pDigitalVideoService = new DigitalVideoService(jausRouter, pTransportService, pEventsService, pAccessControlService, pVisualSensorService);
	VelocityStateSensorService* pVelocityStateSensorService = new VelocityStateSensorService(jausRouter, pTransportService, pEventsService);
	RangeSensorService* pRangeSensorService = new RangeSensorService(jausRouter, pTransportService, pEventsService, pAccessControlService);
	ManagementService* pManagementService = new ManagementService(jausRouter, pTransportService, pEventsService, pAccessControlService);
	PrimitiveDriverService* pPrimitiveDriverService = new PrimitiveDriverService(jausRouter, pTransportService, pEventsService, pAccessControlService, pManagementService);
	ListManagerService* pListManagerService = new ListManagerService(jausRouter, pTransportService, pEventsService, pAccessControlService, pManagementService);
	LocalWaypointListDriverService* pLocalWaypointListDriverService = new LocalWaypointListDriverService(jausRouter, pTransportService, pEventsService, pAccessControlService, pManagementService, pListManagerService);
	LocalVectorDriverService* pLocalVectorDriverService = new LocalVectorDriverService(jausRouter, pTransportService, pEventsService, pAccessControlService, pManagementService);
	LocalPoseSensorService* pLocalPoseSensorService = new LocalPoseSensorService(jausRouter, pTransportService, pEventsService, pAccessControlService);
	LivenessService* pLivenessService = new LivenessService(jausRouter, pTransportService, pEventsService);
	GlobalWaypointListDriverService* pGlobalWaypointListDriverService = new GlobalWaypointListDriverService(jausRouter, pTransportService, pEventsService, pAccessControlService, pManagementService, pListManagerService);
	GlobalVectorDriverService* pGlobalVectorDriverService = new GlobalVectorDriverService(jausRouter, pTransportService, pEventsService, pAccessControlService, pManagementService);
	GlobalPoseSensorService* pGlobalPoseSensorService = new GlobalPoseSensorService(jausRouter, pTransportService, pEventsService, pAccessControlService);
	DiscoveryService* pDiscoveryService = new DiscoveryService(jausRouter, pTransportService, pEventsService);
	AccelerationStateSensorService* pAccelerationStateSensorService = new AccelerationStateSensorService(jausRouter, pTransportService, pEventsService);
	
	
	/// Add all the Services for the Component
	serviceList.push_back(pTransportService);
	serviceList.push_back(pEventsService);
	serviceList.push_back(pAccessControlService);
	serviceList.push_back(pVisualSensorService);
	serviceList.push_back(pDigitalVideoService);
	serviceList.push_back(pVelocityStateSensorService);
	serviceList.push_back(pRangeSensorService);
	serviceList.push_back(pManagementService);
	serviceList.push_back(pPrimitiveDriverService);
	serviceList.push_back(pListManagerService);
	serviceList.push_back(pLocalWaypointListDriverService);
	serviceList.push_back(pLocalVectorDriverService);
	serviceList.push_back(pLocalPoseSensorService);
	serviceList.push_back(pLivenessService);
	serviceList.push_back(pGlobalWaypointListDriverService);
	serviceList.push_back(pGlobalVectorDriverService);
	serviceList.push_back(pGlobalPoseSensorService);
	serviceList.push_back(pDiscoveryService);
	serviceList.push_back(pAccelerationStateSensorService);
	
}

LibJAUSComponent::~LibJAUSComponent()
{
	Service* service;
	
	while (!serviceList.empty())
	{
		service = serviceList.back();
		serviceList.pop_back();
		
		delete service;
	}
	
	delete jausRouter;
}


void LibJAUSComponent::startComponent()
{
	Service* service;
	
	jausRouter->start();
	this->start();
	
	for (unsigned int i = 0; i < serviceList.size(); i++)
	{
		 service = serviceList.at(i);
		 service->start();
	}
}


void LibJAUSComponent::shutdownComponent()
{
	Service* service;
	
	for (unsigned int i = 0; i < serviceList.size(); i++)
	{
		 service = serviceList.at(i);
		 service->stop();
	}
	
	this->stop();
	jausRouter->stop();
}

void LibJAUSComponent::processInternalEvent(InternalEvent *ie)
{
    bool done = false;
	
	//
	// When a component receives an internal event, it passes it
	// to the services to handling, children services first.  If the
	// event is not processed by normal transitions, it's passed
	// again to the services (children first) for default transitions.
	// A given event may only be processed by at most one service.
	//
	for (unsigned int i = serviceList.size(); i>0; i--)
	{
		if (!done) done = serviceList.at(i-1)->processTransitions(ie);
	}
	for (unsigned int i = serviceList.size(); i>0; i--)
	{
		if (!done) done = serviceList.at(i-1)->defaultTransitions(ie);
	}
}



