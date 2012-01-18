

#ifndef LOCALWAYPOINTLISTDRIVER_SENDFSM_H
#define LOCALWAYPOINTLISTDRIVER_SENDFSM_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;

#include "urn_jaus_jss_core_Transport_1_0/Transport_SendFSM.h"
#include "urn_jaus_jss_core_Events_1_0/Events_SendFSM.h"
#include "urn_jaus_jss_core_AccessControl_1_0/AccessControl_SendFSM.h"
#include "urn_jaus_jss_core_Management_1_0/Management_SendFSM.h"
#include "urn_jaus_jss_mobility_ListManager_1_0/ListManager_SendFSM.h"


#include "LocalWaypointListDriver_SendFSM_sm.h"

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{
	
class DllExport LocalWaypointListDriver_SendFSM : public JTS::StateMachine
{
public:
	LocalWaypointListDriver_SendFSM(urn_jaus_jss_core_Transport_1_0::Transport_SendFSM* pTransport_SendFSM, urn_jaus_jss_core_Events_1_0::Events_SendFSM* pEvents_SendFSM, urn_jaus_jss_core_AccessControl_1_0::AccessControl_SendFSM* pAccessControl_SendFSM, urn_jaus_jss_core_Management_1_0::Management_SendFSM* pManagement_SendFSM, urn_jaus_jss_mobility_ListManager_1_0::ListManager_SendFSM* pListManager_SendFSM);
	virtual ~LocalWaypointListDriver_SendFSM();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods


	/// Guard Methods

	
	
	LocalWaypointListDriver_SendFSMContext *context;
	
protected:

    /// References to parent FSMs
	urn_jaus_jss_core_Transport_1_0::Transport_SendFSM* pTransport_SendFSM;
	urn_jaus_jss_core_Events_1_0::Events_SendFSM* pEvents_SendFSM;
	urn_jaus_jss_core_AccessControl_1_0::AccessControl_SendFSM* pAccessControl_SendFSM;
	urn_jaus_jss_core_Management_1_0::Management_SendFSM* pManagement_SendFSM;
	urn_jaus_jss_mobility_ListManager_1_0::ListManager_SendFSM* pListManager_SendFSM;

    
};

};

#endif // LOCALWAYPOINTLISTDRIVER_SENDFSM_H
