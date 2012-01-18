

#ifndef VELOCITYSTATESENSOR_RECEIVEFSM_H
#define VELOCITYSTATESENSOR_RECEIVEFSM_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;

#include "urn_jaus_jss_core_Transport_1_0/Transport_ReceiveFSM.h"
#include "urn_jaus_jss_core_Events_1_0/Events_ReceiveFSM.h"


#include "VelocityStateSensor_ReceiveFSM_sm.h"

namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{
	
class DllExport VelocityStateSensor_ReceiveFSM : public JTS::StateMachine
{
public:
	VelocityStateSensor_ReceiveFSM(urn_jaus_jss_core_Transport_1_0::Transport_ReceiveFSM* pTransport_ReceiveFSM, urn_jaus_jss_core_Events_1_0::Events_ReceiveFSM* pEvents_ReceiveFSM);
	virtual ~VelocityStateSensor_ReceiveFSM();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods
	virtual void SendAction(std::string arg0, Receive::Body::ReceiveRec transportData);


	/// Guard Methods

	
	
	VelocityStateSensor_ReceiveFSMContext *context;
	
protected:

    /// References to parent FSMs
	urn_jaus_jss_core_Transport_1_0::Transport_ReceiveFSM* pTransport_ReceiveFSM;
	urn_jaus_jss_core_Events_1_0::Events_ReceiveFSM* pEvents_ReceiveFSM;

    
};

};

#endif // VELOCITYSTATESENSOR_RECEIVEFSM_H
