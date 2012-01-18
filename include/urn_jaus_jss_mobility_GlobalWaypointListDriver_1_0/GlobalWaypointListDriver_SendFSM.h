

#ifndef GLOBALWAYPOINTLISTDRIVER_SENDFSM_H
#define GLOBALWAYPOINTLISTDRIVER_SENDFSM_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;

#include "urn_jaus_jss_core_Transport_1_0/Transport_SendFSM.h"
#include "urn_jaus_jss_core_Events_1_0/Events_SendFSM.h"
#include "urn_jaus_jss_core_AccessControl_1_0/AccessControl_SendFSM.h"
#include "urn_jaus_jss_core_Management_1_0/Management_SendFSM.h"
#include "urn_jaus_jss_mobility_ListManager_1_0/ListManager_SendFSM.h"


#include "GlobalWaypointListDriver_SendFSM_sm.h"

namespace urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0
{
	
class DllExport GlobalWaypointListDriver_SendFSM : public JTS::StateMachine
{
public:
	GlobalWaypointListDriver_SendFSM(urn_jaus_jss_core_Transport_1_0::Transport_SendFSM* pTransport_SendFSM, urn_jaus_jss_core_Events_1_0::Events_SendFSM* pEvents_SendFSM, urn_jaus_jss_core_AccessControl_1_0::AccessControl_SendFSM* pAccessControl_SendFSM, urn_jaus_jss_core_Management_1_0::Management_SendFSM* pManagement_SendFSM, urn_jaus_jss_mobility_ListManager_1_0::ListManager_SendFSM* pListManager_SendFSM);
	virtual ~GlobalWaypointListDriver_SendFSM();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods


	/// Guard Methods

	
	
	GlobalWaypointListDriver_SendFSMContext *context;
	
protected:

    /// References to parent FSMs
	urn_jaus_jss_core_Transport_1_0::Transport_SendFSM* pTransport_SendFSM;
	urn_jaus_jss_core_Events_1_0::Events_SendFSM* pEvents_SendFSM;
	urn_jaus_jss_core_AccessControl_1_0::AccessControl_SendFSM* pAccessControl_SendFSM;
	urn_jaus_jss_core_Management_1_0::Management_SendFSM* pManagement_SendFSM;
	urn_jaus_jss_mobility_ListManager_1_0::ListManager_SendFSM* pListManager_SendFSM;

    
};

};

#endif // GLOBALWAYPOINTLISTDRIVER_SENDFSM_H
