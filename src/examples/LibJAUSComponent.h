

#ifndef LIBJAUSCOMPONENT_H
#define LIBJAUSCOMPONENT_H

#include <vector>
#include "EventReceiver.h"
#include "Transport/JausTransport.h"
#include "InternalEvents/InternalEvent.h"
#include "urn_jaus_jss_core_Transport_1_0/TransportService.h"
#include "urn_jaus_jss_core_Events_1_0/EventsService.h"
#include "urn_jaus_jss_core_AccessControl_1_0/AccessControlService.h"
#include "urn_jaus_jss_environmentSensing_VisualSensor_1_0/VisualSensorService.h"
#include "urn_jaus_jss_environmentSensing_DigitalVideo_1_0/DigitalVideoService.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/VelocityStateSensorService.h"
#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/RangeSensorService.h"
#include "urn_jaus_jss_core_Management_1_0/ManagementService.h"
#include "urn_jaus_jss_mobility_PrimitiveDriver_1_0/PrimitiveDriverService.h"
#include "urn_jaus_jss_mobility_ListManager_1_0/ListManagerService.h"
#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/LocalWaypointListDriverService.h"
#include "urn_jaus_jss_mobility_LocalVectorDriver_1_0/LocalVectorDriverService.h"
#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensorService.h"
#include "urn_jaus_jss_core_Liveness_1_0/LivenessService.h"
#include "urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0/GlobalWaypointListDriverService.h"
#include "urn_jaus_jss_mobility_GlobalVectorDriver_1_0/GlobalVectorDriverService.h"
#include "urn_jaus_jss_mobility_GlobalPoseSensor_1_0/GlobalPoseSensorService.h"
#include "urn_jaus_jss_core_Discovery_1_0/DiscoveryService.h"
#include "urn_jaus_jss_mobility_AccelerationStateSensor_0_6/AccelerationStateSensorService.h"


class LibJAUSComponent : public JTS::EventReceiver
{
public:
	LibJAUSComponent(unsigned int subsystem, unsigned short node, unsigned short component);
	virtual ~LibJAUSComponent();
	
	void startComponent();
	void shutdownComponent();
	
protected:
	virtual void processInternalEvent(JTS::InternalEvent* ie);
	
	std::vector<JTS::Service*> serviceList;
	JTS::JausRouter* jausRouter;
	
};

#endif // LIBJAUSCOMPONENT_H
