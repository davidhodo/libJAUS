

#include "urn_jaus_jss_mobility_AccelerationStateSensor_0_6/AccelerationStateSensor_SendFSM.h"




using namespace JTS;

namespace urn_jaus_jss_mobility_AccelerationStateSensor_0_6
{



AccelerationStateSensor_SendFSM::AccelerationStateSensor_SendFSM(urn_jaus_jss_core_Transport_1_0::Transport_SendFSM* pTransport_SendFSM, urn_jaus_jss_core_Events_1_0::Events_SendFSM* pEvents_SendFSM)
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new AccelerationStateSensor_SendFSMContext(*this);

	this->pTransport_SendFSM = pTransport_SendFSM;
	this->pEvents_SendFSM = pEvents_SendFSM;
}



AccelerationStateSensor_SendFSM::~AccelerationStateSensor_SendFSM() 
{
	delete context;
}

void AccelerationStateSensor_SendFSM::setupNotifications()
{
	pEvents_SendFSM->registerNotification("Sending", ieHandler, "InternalStateChange_To_AccelerationStateSensor_SendFSM_Sending", "Events_SendFSM");
	registerNotification("Sending", pEvents_SendFSM->getHandler(), "InternalStateChange_To_Events_SendFSM_Sending", "AccelerationStateSensor_SendFSM");

}





};
