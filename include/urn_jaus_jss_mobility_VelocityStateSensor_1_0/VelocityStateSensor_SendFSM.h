

#ifndef VELOCITYSTATESENSOR_SENDFSM_H
#define VELOCITYSTATESENSOR_SENDFSM_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;

#include "urn_jaus_jss_core_Transport_1_0/Transport_SendFSM.h"
#include "urn_jaus_jss_core_Events_1_0/Events_SendFSM.h"


#include "VelocityStateSensor_SendFSM_sm.h"

namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{
	
class DllExport VelocityStateSensor_SendFSM : public JTS::StateMachine
{
public:
	VelocityStateSensor_SendFSM(urn_jaus_jss_core_Transport_1_0::Transport_SendFSM* pTransport_SendFSM, urn_jaus_jss_core_Events_1_0::Events_SendFSM* pEvents_SendFSM);
	virtual ~VelocityStateSensor_SendFSM();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods


	/// Guard Methods

	
	
	VelocityStateSensor_SendFSMContext *context;
	
protected:

    /// References to parent FSMs
	urn_jaus_jss_core_Transport_1_0::Transport_SendFSM* pTransport_SendFSM;
	urn_jaus_jss_core_Events_1_0::Events_SendFSM* pEvents_SendFSM;

    
};

};

#endif // VELOCITYSTATESENSOR_SENDFSM_H
