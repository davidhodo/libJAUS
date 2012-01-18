

#ifndef GLOBALPOSESENSORSERVICE_H
#define GLOBALPOSESENSORSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_mobility_GlobalPoseSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_GlobalPoseSensor_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "urn_jaus_jss_core_Transport_1_0/TransportService.h"
#include "urn_jaus_jss_core_Events_1_0/EventsService.h"
#include "urn_jaus_jss_core_AccessControl_1_0/AccessControlService.h"
#include "GlobalPoseSensor_ReceiveFSM.h"
#include "GlobalPoseSensor_SendFSM.h"


namespace urn_jaus_jss_mobility_GlobalPoseSensor_1_0
{
	
class DllExport GlobalPoseSensorService : public JTS::Service
{
public:
	GlobalPoseSensorService( JTS::JausRouter* jausRouter , urn_jaus_jss_core_Transport_1_0::TransportService* pTransportService, urn_jaus_jss_core_Events_1_0::EventsService* pEventsService, urn_jaus_jss_core_AccessControl_1_0::AccessControlService* pAccessControlService);
	virtual ~GlobalPoseSensorService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	GlobalPoseSensor_ReceiveFSM* pGlobalPoseSensor_ReceiveFSM;
	GlobalPoseSensor_SendFSM* pGlobalPoseSensor_SendFSM;
	


	
protected:
	virtual void run();

};

};

#endif // GLOBALPOSESENSORSERVICE_H
