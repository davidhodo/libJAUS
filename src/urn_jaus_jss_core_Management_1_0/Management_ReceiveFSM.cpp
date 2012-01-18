

#include "urn_jaus_jss_core_Management_1_0/Management_ReceiveFSM.h"




using namespace JTS;

namespace urn_jaus_jss_core_Management_1_0
{



Management_ReceiveFSM::Management_ReceiveFSM(urn_jaus_jss_core_Transport_1_0::Transport_ReceiveFSM* pTransport_ReceiveFSM, urn_jaus_jss_core_Events_1_0::Events_ReceiveFSM* pEvents_ReceiveFSM, urn_jaus_jss_core_AccessControl_1_0::AccessControl_ReceiveFSM* pAccessControl_ReceiveFSM)
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new Management_ReceiveFSMContext(*this);

	this->pTransport_ReceiveFSM = pTransport_ReceiveFSM;
	this->pEvents_ReceiveFSM = pEvents_ReceiveFSM;
	this->pAccessControl_ReceiveFSM = pAccessControl_ReceiveFSM;
}



Management_ReceiveFSM::~Management_ReceiveFSM() 
{
	delete context;
}

void Management_ReceiveFSM::setupNotifications()
{
	pAccessControl_ReceiveFSM->registerNotification("Receiving_Ready_NotControlled", ieHandler, "InternalStateChange_To_Management_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init", "AccessControl_ReceiveFSM");
	pAccessControl_ReceiveFSM->registerNotification("Receiving_Ready_Controlled", ieHandler, "InternalStateChange_To_Management_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby", "AccessControl_ReceiveFSM");
	pAccessControl_ReceiveFSM->registerNotification("Receiving_Ready", ieHandler, "InternalStateChange_To_Management_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init", "AccessControl_ReceiveFSM");
	pAccessControl_ReceiveFSM->registerNotification("Receiving", ieHandler, "InternalStateChange_To_Management_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init", "AccessControl_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA_Standby", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA_Init", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA_Failure", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA_Shutdown", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA_Emergency", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled_StateA", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled_StateB_Standby", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_Controlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled_StateB_Ready", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_Controlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled_StateB_Emergency", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_Controlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled_StateB", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_Controlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_Controlled", "Management_ReceiveFSM");
	registerNotification("Receiving_Ready", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready", "Management_ReceiveFSM");
	registerNotification("Receiving", pAccessControl_ReceiveFSM->getHandler(), "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving", "Management_ReceiveFSM");

}

void Management_ReceiveFSM::DeleteIDAction(Receive::Body::ReceiveRec transportData)
{
	/// Insert User Code HERE
}

void Management_ReceiveFSM::SendAction(std::string arg0, Receive::Body::ReceiveRec transportData)
{
	/// Insert User Code HERE
}

void Management_ReceiveFSM::SendAction(std::string arg0, std::string arg1)
{
	/// Insert User Code HERE
}

void Management_ReceiveFSM::SendAction(std::string arg0, std::string arg1, Receive::Body::ReceiveRec transportData)
{
	/// Insert User Code HERE
}

void Management_ReceiveFSM::StoreIDAction(Receive::Body::ReceiveRec transportData)
{
	/// Insert User Code HERE
}

void Management_ReceiveFSM::initializeAction()
{
	/// Insert User Code HERE
}

void Management_ReceiveFSM::popWrapper_0f9fae233502305d99c64a59f0f80a4e(ClearEmergency msg, Receive::Body::ReceiveRec transportData)
{
	std::string tempstr("Receiving_Ready_NotControlled_StateA_Emergency");
	std::string tempstr2(context->peakTopStateStack());
	char *leafStateTOK = strtok(const_cast<char*>(tempstr.c_str()),"_");
	char *stackStateTOK = strtok(const_cast<char*>(tempstr2.c_str()),"_");

	if(strcmp(const_cast<char*>(tempstr2.c_str()),"Receiving_Ready_NotControlled_StateA_Emergency") == 0)
	{
		DeleteIDAction(transportData);
		return;
	}

	if(strcmp(leafStateTOK,stackStateTOK) != 0)
	{
		DeleteIDAction(transportData);
		return;
	}
	leafStateTOK = strtok(leafStateTOK+1,"_");
	stackStateTOK = strtok(stackStateTOK+1,"_");

	if(strcmp(leafStateTOK,stackStateTOK) != 0)
	{
		DeleteIDAction(transportData);
		return;
	}
	leafStateTOK = strtok(leafStateTOK+1,"_");
	stackStateTOK = strtok(stackStateTOK+1,"_");

	if(strcmp(leafStateTOK,stackStateTOK) != 0)
	{
		DeleteIDAction(transportData);
		return;
	}
	leafStateTOK = strtok(leafStateTOK+1,"_");
	stackStateTOK = strtok(stackStateTOK+1,"_");

	if(strcmp(leafStateTOK,stackStateTOK) != 0)
	{
		DeleteIDAction(transportData);
		return;
	}
	leafStateTOK = strtok(leafStateTOK+1,"_");
	stackStateTOK = strtok(stackStateTOK+1,"_");

	if(strcmp(leafStateTOK,stackStateTOK) != 0)
	{
		DeleteIDAction(transportData);
		return;
	}
	leafStateTOK = strtok(leafStateTOK+1,"_");
	stackStateTOK = strtok(stackStateTOK+1,"_");

}

void Management_ReceiveFSM::popWrapper_baf5fee6be943f3c815a84f544a0981e(ClearEmergency msg, Receive::Body::ReceiveRec transportData)
{
	std::string tempstr("Receiving_Ready_Controlled_StateB_Emergency");
	std::string tempstr2(context->peakTopStateStack());
	char *leafStateTOK = strtok(const_cast<char*>(tempstr.c_str()),"_");
	char *stackStateTOK = strtok(const_cast<char*>(tempstr2.c_str()),"_");

	if(strcmp(const_cast<char*>(tempstr2.c_str()),"Receiving_Ready_Controlled_StateB_Emergency") == 0)
	{
		DeleteIDAction(transportData);
		return;
	}

	if(strcmp(leafStateTOK,stackStateTOK) != 0)
	{
		DeleteIDAction(transportData);
		return;
	}
	leafStateTOK = strtok(leafStateTOK+1,"_");
	stackStateTOK = strtok(stackStateTOK+1,"_");

	if(strcmp(leafStateTOK,stackStateTOK) != 0)
	{
		DeleteIDAction(transportData);
		return;
	}
	leafStateTOK = strtok(leafStateTOK+1,"_");
	stackStateTOK = strtok(stackStateTOK+1,"_");

	if(strcmp(leafStateTOK,stackStateTOK) != 0)
	{
		DeleteIDAction(transportData);
		return;
	}
	leafStateTOK = strtok(leafStateTOK+1,"_");
	stackStateTOK = strtok(stackStateTOK+1,"_");

	if(strcmp(leafStateTOK,stackStateTOK) != 0)
	{
		DeleteIDAction(transportData);
		return;
	}
	leafStateTOK = strtok(leafStateTOK+1,"_");
	stackStateTOK = strtok(stackStateTOK+1,"_");

	if(strcmp(leafStateTOK,stackStateTOK) != 0)
	{
		DeleteIDAction(transportData);
		return;
	}
	leafStateTOK = strtok(leafStateTOK+1,"_");
	stackStateTOK = strtok(stackStateTOK+1,"_");

}



bool Management_ReceiveFSM::isControllingClient(Receive::Body::ReceiveRec transportData)
{
	//// By default, inherited guards call the parent function.
	//// This can be replaced or modified as needed.
	return pAccessControl_ReceiveFSM->isControllingClient(transportData );
}

bool Management_ReceiveFSM::isIDStored(Receive::Body::ReceiveRec transportData)
{
	/// Insert User Code HERE
	return false;
}



};
