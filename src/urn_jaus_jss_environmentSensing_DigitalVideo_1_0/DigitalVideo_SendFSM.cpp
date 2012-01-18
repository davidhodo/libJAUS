

#include "urn_jaus_jss_environmentSensing_DigitalVideo_1_0/DigitalVideo_SendFSM.h"




using namespace JTS;

namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{



DigitalVideo_SendFSM::DigitalVideo_SendFSM(urn_jaus_jss_core_Transport_1_0::Transport_SendFSM* pTransport_SendFSM, urn_jaus_jss_core_Events_1_0::Events_SendFSM* pEvents_SendFSM, urn_jaus_jss_core_AccessControl_1_0::AccessControl_SendFSM* pAccessControl_SendFSM, urn_jaus_jss_environmentSensing_VisualSensor_1_0::VisualSensor_SendFSM* pVisualSensor_SendFSM)
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new DigitalVideo_SendFSMContext(*this);

	this->pTransport_SendFSM = pTransport_SendFSM;
	this->pEvents_SendFSM = pEvents_SendFSM;
	this->pAccessControl_SendFSM = pAccessControl_SendFSM;
	this->pVisualSensor_SendFSM = pVisualSensor_SendFSM;
}



DigitalVideo_SendFSM::~DigitalVideo_SendFSM() 
{
	delete context;
}

void DigitalVideo_SendFSM::setupNotifications()
{
	pVisualSensor_SendFSM->registerNotification("Sending", ieHandler, "InternalStateChange_To_DigitalVideo_SendFSM_Sending", "VisualSensor_SendFSM");
	registerNotification("Sending", pVisualSensor_SendFSM->getHandler(), "InternalStateChange_To_VisualSensor_SendFSM_Sending", "DigitalVideo_SendFSM");

}





};
