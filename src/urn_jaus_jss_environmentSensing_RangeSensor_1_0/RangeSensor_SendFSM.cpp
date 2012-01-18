

#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/RangeSensor_SendFSM.h"




using namespace JTS;

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{



RangeSensor_SendFSM::RangeSensor_SendFSM(urn_jaus_jss_core_Transport_1_0::Transport_SendFSM* pTransport_SendFSM, urn_jaus_jss_core_Events_1_0::Events_SendFSM* pEvents_SendFSM, urn_jaus_jss_core_AccessControl_1_0::AccessControl_SendFSM* pAccessControl_SendFSM)
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new RangeSensor_SendFSMContext(*this);

	this->pTransport_SendFSM = pTransport_SendFSM;
	this->pEvents_SendFSM = pEvents_SendFSM;
	this->pAccessControl_SendFSM = pAccessControl_SendFSM;
}



RangeSensor_SendFSM::~RangeSensor_SendFSM() 
{
	delete context;
}

void RangeSensor_SendFSM::setupNotifications()
{
	pAccessControl_SendFSM->registerNotification("Sending", ieHandler, "InternalStateChange_To_RangeSensor_SendFSM_Sending", "AccessControl_SendFSM");
	registerNotification("Sending", pAccessControl_SendFSM->getHandler(), "InternalStateChange_To_AccessControl_SendFSM_Sending", "RangeSensor_SendFSM");

}





};
