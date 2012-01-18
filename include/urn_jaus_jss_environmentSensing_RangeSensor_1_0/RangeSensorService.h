

#ifndef RANGESENSORSERVICE_H
#define RANGESENSORSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "urn_jaus_jss_core_Transport_1_0/TransportService.h"
#include "urn_jaus_jss_core_Events_1_0/EventsService.h"
#include "urn_jaus_jss_core_AccessControl_1_0/AccessControlService.h"
#include "RangeSensor_ReceiveFSM.h"
#include "RangeSensor_SendFSM.h"


namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{
	
class DllExport RangeSensorService : public JTS::Service
{
public:
	RangeSensorService( JTS::JausRouter* jausRouter , urn_jaus_jss_core_Transport_1_0::TransportService* pTransportService, urn_jaus_jss_core_Events_1_0::EventsService* pEventsService, urn_jaus_jss_core_AccessControl_1_0::AccessControlService* pAccessControlService);
	virtual ~RangeSensorService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	RangeSensor_ReceiveFSM* pRangeSensor_ReceiveFSM;
	RangeSensor_SendFSM* pRangeSensor_SendFSM;
	


	
protected:
	virtual void run();

};

};

#endif // RANGESENSORSERVICE_H
