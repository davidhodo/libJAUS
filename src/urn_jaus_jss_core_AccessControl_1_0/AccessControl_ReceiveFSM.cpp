

#include "urn_jaus_jss_core_AccessControl_1_0/AccessControl_ReceiveFSM.h"




using namespace JTS;

namespace urn_jaus_jss_core_AccessControl_1_0
{



AccessControl_ReceiveFSM::AccessControl_ReceiveFSM(urn_jaus_jss_core_Transport_1_0::Transport_ReceiveFSM* pTransport_ReceiveFSM, urn_jaus_jss_core_Events_1_0::Events_ReceiveFSM* pEvents_ReceiveFSM)
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new AccessControl_ReceiveFSMContext(*this);

	this->pTransport_ReceiveFSM = pTransport_ReceiveFSM;
	this->pEvents_ReceiveFSM = pEvents_ReceiveFSM;
}



AccessControl_ReceiveFSM::~AccessControl_ReceiveFSM() 
{
	delete context;
}

void AccessControl_ReceiveFSM::setupNotifications()
{
	pEvents_ReceiveFSM->registerNotification("Receiving_Ready", ieHandler, "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Events_ReceiveFSM");
	pEvents_ReceiveFSM->registerNotification("Receiving", ieHandler, "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Events_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled", pEvents_ReceiveFSM->getHandler(), "InternalStateChange_To_Events_ReceiveFSM_Receiving_Ready", "AccessControl_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled", pEvents_ReceiveFSM->getHandler(), "InternalStateChange_To_Events_ReceiveFSM_Receiving_Ready", "AccessControl_ReceiveFSM");
	registerNotification("Receiving_Ready", pEvents_ReceiveFSM->getHandler(), "InternalStateChange_To_Events_ReceiveFSM_Receiving_Ready", "AccessControl_ReceiveFSM");
	registerNotification("Receiving", pEvents_ReceiveFSM->getHandler(), "InternalStateChange_To_Events_ReceiveFSM_Receiving", "AccessControl_ReceiveFSM");

}

void AccessControl_ReceiveFSM::ResetTimerAction()
{
	/// Insert User Code HERE
}

void AccessControl_ReceiveFSM::SendAction(std::string arg0, Receive::Body::ReceiveRec transportData)
{
	/// Insert User Code HERE
}

void AccessControl_ReceiveFSM::SendAction(std::string arg0, std::string arg1)
{
	/// Insert User Code HERE
}

void AccessControl_ReceiveFSM::SendAction(std::string arg0, std::string arg1, Receive::Body::ReceiveRec transportData)
{
	/// Insert User Code HERE
}

void AccessControl_ReceiveFSM::SetAuthorityAction(RequestControl msg)
{
	/// Insert User Code HERE
}

void AccessControl_ReceiveFSM::SetAuthorityAction(SetAuthority msg)
{
	/// Insert User Code HERE
}

void AccessControl_ReceiveFSM::StoreAddressAction(Receive::Body::ReceiveRec transportData)
{
	/// Insert User Code HERE
}

void AccessControl_ReceiveFSM::initAction()
{
	/// Insert User Code HERE
}



bool AccessControl_ReceiveFSM::isAuthorityValid(SetAuthority msg)
{
	/// Insert User Code HERE
	return false;
}

bool AccessControl_ReceiveFSM::isControlAvailable()
{
	/// Insert User Code HERE
	return false;
}

bool AccessControl_ReceiveFSM::isControllingClient(Receive::Body::ReceiveRec transportData)
{
	/// Insert User Code HERE
	return false;
}

bool AccessControl_ReceiveFSM::isCurrentAuthorityLess(RequestControl msg)
{
	/// Insert User Code HERE
	return false;
}

bool AccessControl_ReceiveFSM::isDefaultAuthorityGreater(RequestControl msg)
{
	/// Insert User Code HERE
	return false;
}



};
