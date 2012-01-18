

#ifndef VELOCITYSTATESENSORSERVICE_H
#define VELOCITYSTATESENSORSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "urn_jaus_jss_core_Transport_1_0/TransportService.h"
#include "urn_jaus_jss_core_Events_1_0/EventsService.h"
#include "VelocityStateSensor_ReceiveFSM.h"
#include "VelocityStateSensor_SendFSM.h"


namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{
	
class DllExport VelocityStateSensorService : public JTS::Service
{
public:
	VelocityStateSensorService( JTS::JausRouter* jausRouter , urn_jaus_jss_core_Transport_1_0::TransportService* pTransportService, urn_jaus_jss_core_Events_1_0::EventsService* pEventsService);
	virtual ~VelocityStateSensorService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	VelocityStateSensor_ReceiveFSM* pVelocityStateSensor_ReceiveFSM;
	VelocityStateSensor_SendFSM* pVelocityStateSensor_SendFSM;
	


	
protected:
	virtual void run();

};

};

#endif // VELOCITYSTATESENSORSERVICE_H
