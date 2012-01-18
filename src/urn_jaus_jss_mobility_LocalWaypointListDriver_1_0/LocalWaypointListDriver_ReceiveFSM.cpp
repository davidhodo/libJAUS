

#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/LocalWaypointListDriver_ReceiveFSM.h"




using namespace JTS;

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{



LocalWaypointListDriver_ReceiveFSM::LocalWaypointListDriver_ReceiveFSM(urn_jaus_jss_core_Transport_1_0::Transport_ReceiveFSM* pTransport_ReceiveFSM, urn_jaus_jss_core_Events_1_0::Events_ReceiveFSM* pEvents_ReceiveFSM, urn_jaus_jss_core_AccessControl_1_0::AccessControl_ReceiveFSM* pAccessControl_ReceiveFSM, urn_jaus_jss_core_Management_1_0::Management_ReceiveFSM* pManagement_ReceiveFSM, urn_jaus_jss_mobility_ListManager_1_0::ListManager_ReceiveFSM* pListManager_ReceiveFSM)
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new LocalWaypointListDriver_ReceiveFSMContext(*this);

	this->pTransport_ReceiveFSM = pTransport_ReceiveFSM;
	this->pEvents_ReceiveFSM = pEvents_ReceiveFSM;
	this->pAccessControl_ReceiveFSM = pAccessControl_ReceiveFSM;
	this->pManagement_ReceiveFSM = pManagement_ReceiveFSM;
	this->pListManager_ReceiveFSM = pListManager_ReceiveFSM;
}



LocalWaypointListDriver_ReceiveFSM::~LocalWaypointListDriver_ReceiveFSM() 
{
	delete context;
}

void LocalWaypointListDriver_ReceiveFSM::setupNotifications()
{
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_NotControlled_StateA_Standby", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_NotControlled_StateA_Init", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_NotControlled_StateA_Failure", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_NotControlled_StateA_Shutdown", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_NotControlled_StateA_Emergency", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_NotControlled_StateA", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_NotControlled", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_Controlled_StateB_Standby", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_Controlled_StateB_Ready", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_Controlled_StateB_Emergency", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_Controlled_StateB", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready_Controlled", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving_Ready", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init", "ListManager_ReceiveFSM");
	pListManager_ReceiveFSM->registerNotification("Receiving", ieHandler, "InternalStateChange_To_LocalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init", "ListManager_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA_Standby", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA_Init", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA_Failure", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA_Shutdown", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA_Emergency", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_NotControlled_StateA", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_NotControlled", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled_StateB_Standby", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled_StateB_Ready", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled_StateB_Emergency", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled_StateB", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_Controlled_StateB", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready_Controlled", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving_Ready", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving_Ready", "LocalWaypointListDriver_ReceiveFSM");
	registerNotification("Receiving", pListManager_ReceiveFSM->getHandler(), "InternalStateChange_To_ListManager_ReceiveFSM_Receiving", "LocalWaypointListDriver_ReceiveFSM");

}

void LocalWaypointListDriver_ReceiveFSM::SendAction(std::string arg0, Receive::Body::ReceiveRec transportData)
{
	/// Insert User Code HERE
}

void LocalWaypointListDriver_ReceiveFSM::executeWaypointListAction(ExecuteList msg)
{
	/// Insert User Code HERE
}

void LocalWaypointListDriver_ReceiveFSM::modifyTravelSpeedAction(ExecuteList msg)
{
	/// Insert User Code HERE
}

void LocalWaypointListDriver_ReceiveFSM::resetTravelSpeedAction()
{
	/// Insert User Code HERE
}

void LocalWaypointListDriver_ReceiveFSM::setElementAction(SetElement msg)
{
	/// Insert User Code HERE
}



bool LocalWaypointListDriver_ReceiveFSM::elementExists(ExecuteList msg)
{
	/// Insert User Code HERE
	return false;
}

bool LocalWaypointListDriver_ReceiveFSM::elementSpecified(ExecuteList msg)
{
	/// Insert User Code HERE
	return false;
}

bool LocalWaypointListDriver_ReceiveFSM::isControllingClient(Receive::Body::ReceiveRec transportData)
{
	//// By default, inherited guards call the parent function.
	//// This can be replaced or modified as needed.
	return pAccessControl_ReceiveFSM->isControllingClient(transportData );
}

bool LocalWaypointListDriver_ReceiveFSM::isElementSupported(SetElement msg)
{
	//// By default, inherited guards call the parent function.
	//// This can be replaced or modified as needed.
	return pListManager_ReceiveFSM->isElementSupported(*((urn_jaus_jss_mobility_ListManager_1_0::SetElement*) &msg) );
}

bool LocalWaypointListDriver_ReceiveFSM::isValidElementRequest(SetElement msg)
{
	//// By default, inherited guards call the parent function.
	//// This can be replaced or modified as needed.
	return pListManager_ReceiveFSM->isValidElementRequest(*((urn_jaus_jss_mobility_ListManager_1_0::SetElement*) &msg) );
}

bool LocalWaypointListDriver_ReceiveFSM::waypointExists(QueryLocalWaypoint msg)
{
	/// Insert User Code HERE
	return false;
}



};
