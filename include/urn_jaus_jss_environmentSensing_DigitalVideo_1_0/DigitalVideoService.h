

#ifndef DIGITALVIDEOSERVICE_H
#define DIGITALVIDEOSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_environmentSensing_DigitalVideo_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_environmentSensing_DigitalVideo_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "urn_jaus_jss_core_Transport_1_0/TransportService.h"
#include "urn_jaus_jss_core_Events_1_0/EventsService.h"
#include "urn_jaus_jss_core_AccessControl_1_0/AccessControlService.h"
#include "urn_jaus_jss_environmentSensing_VisualSensor_1_0/VisualSensorService.h"
#include "DigitalVideo_ReceiveFSM.h"
#include "DigitalVideo_SendFSM.h"


namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{
	
class DllExport DigitalVideoService : public JTS::Service
{
public:
	DigitalVideoService( JTS::JausRouter* jausRouter , urn_jaus_jss_core_Transport_1_0::TransportService* pTransportService, urn_jaus_jss_core_Events_1_0::EventsService* pEventsService, urn_jaus_jss_core_AccessControl_1_0::AccessControlService* pAccessControlService, urn_jaus_jss_environmentSensing_VisualSensor_1_0::VisualSensorService* pVisualSensorService);
	virtual ~DigitalVideoService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	DigitalVideo_ReceiveFSM* pDigitalVideo_ReceiveFSM;
	DigitalVideo_SendFSM* pDigitalVideo_SendFSM;
	


	
protected:
	virtual void run();

};

};

#endif // DIGITALVIDEOSERVICE_H
