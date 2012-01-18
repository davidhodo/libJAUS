

#ifndef ACCELERATIONSTATESENSORSERVICE_H
#define ACCELERATIONSTATESENSORSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_mobility_AccelerationStateSensor_0_6/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_AccelerationStateSensor_0_6/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "urn_jaus_jss_core_Transport_1_0/TransportService.h"
#include "urn_jaus_jss_core_Events_1_0/EventsService.h"
#include "AccelerationStateSensor_ReceiveFSM.h"
#include "AccelerationStateSensor_SendFSM.h"


namespace urn_jaus_jss_mobility_AccelerationStateSensor_0_6
{
	
class DllExport AccelerationStateSensorService : public JTS::Service
{
public:
	AccelerationStateSensorService( JTS::JausRouter* jausRouter , urn_jaus_jss_core_Transport_1_0::TransportService* pTransportService, urn_jaus_jss_core_Events_1_0::EventsService* pEventsService);
	virtual ~AccelerationStateSensorService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	AccelerationStateSensor_ReceiveFSM* pAccelerationStateSensor_ReceiveFSM;
	AccelerationStateSensor_SendFSM* pAccelerationStateSensor_SendFSM;
	


	
protected:
	virtual void run();

};

};

#endif // ACCELERATIONSTATESENSORSERVICE_H
