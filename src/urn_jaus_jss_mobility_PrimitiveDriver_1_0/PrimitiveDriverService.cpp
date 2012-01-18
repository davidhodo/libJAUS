

#include "urn_jaus_jss_mobility_PrimitiveDriver_1_0/PrimitiveDriverService.h"

using namespace JTS;

namespace urn_jaus_jss_mobility_PrimitiveDriver_1_0
{
	
PrimitiveDriverService::PrimitiveDriverService(JTS::JausRouter* jausRouter , urn_jaus_jss_core_Transport_1_0::TransportService* pTransportService, urn_jaus_jss_core_Events_1_0::EventsService* pEventsService, urn_jaus_jss_core_AccessControl_1_0::AccessControlService* pAccessControlService, urn_jaus_jss_core_Management_1_0::ManagementService* pManagementService) : Service()
{
	jausRouter->setTransportType(JausRouter::Version_1_0);
	
	pPrimitiveDriver_ReceiveFSM = new PrimitiveDriver_ReceiveFSM(pTransportService->pTransport_ReceiveFSM, pEventsService->pEvents_ReceiveFSM, pAccessControlService->pAccessControl_ReceiveFSM, pManagementService->pManagement_ReceiveFSM);
	pPrimitiveDriver_ReceiveFSM->setHandlers(ieHandler, jausRouter);
	pPrimitiveDriver_ReceiveFSM->setupNotifications();
	pPrimitiveDriver_SendFSM = new PrimitiveDriver_SendFSM(pTransportService->pTransport_SendFSM, pEventsService->pEvents_SendFSM, pAccessControlService->pAccessControl_SendFSM, pManagementService->pManagement_SendFSM);
	pPrimitiveDriver_SendFSM->setHandlers(ieHandler, jausRouter);
	pPrimitiveDriver_SendFSM->setupNotifications();

}


PrimitiveDriverService::~PrimitiveDriverService()
{
	delete pPrimitiveDriver_ReceiveFSM;
	delete pPrimitiveDriver_SendFSM;

}

/**
 *	This is the function that will actually be run by the thread at start-up.
 *  We override it from EventReceiver in order to handle any entry
 *  actions defined by the initial state. 
 */
void PrimitiveDriverService::run()
{
	
	/// Perform any entry actions specified by the start state.

	
	/// Kick-off the receive loop...
	EventReceiver::run();
}

/**
 *	This is the function that will process an event either generated
 *  by the service, sent to it by another service on the same component,
 *  or as a message sent by a different component. 
 */
bool PrimitiveDriverService::processTransitions(InternalEvent* ie)
{
        bool done = false;

   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   mutex.lock();

			// Invoke the FSM transition for this event.
			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryWrenchEffort::ID)
					{
						QueryWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pPrimitiveDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryWrenchEffort::ID)
					{
						QueryWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pPrimitiveDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryWrenchEffort::ID)
					{
						QueryWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pPrimitiveDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryWrenchEffort::ID)
					{
						QueryWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pPrimitiveDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryWrenchEffort::ID)
					{
						QueryWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pPrimitiveDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryWrenchEffort::ID)
					{
						QueryWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pPrimitiveDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetWrenchEffort::ID)
					{
						SetWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pPrimitiveDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryWrenchEffort::ID)
					{
						QueryWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pPrimitiveDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_PrimitiveDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
						pPrimitiveDriver_ReceiveFSM->context->InternalStateChange_To_PrimitiveDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryWrenchEffort::ID)
					{
						QueryWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pPrimitiveDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			 

   mutex.unlock();
   return done;
}


/**
 *	This is the function that will check for default transitions if
 *  no other transitions were satisfied. 
 */
bool PrimitiveDriverService::defaultTransitions(InternalEvent* ie)
{
   bool done = false;

   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   mutex.lock();

			// Invoke the FSM transition for this event.
			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetWrenchEffort::ID)
					{
						SetWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->SetWrenchEffortTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryWrenchEffort::ID)
					{
						QueryWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->QueryWrenchEffortTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Shutdown::ID)
					{
						Shutdown msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->ShutdownTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Standby::ID)
					{
						Standby msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->StandbyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Resume::ID)
					{
						Resume msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->ResumeTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Reset::ID)
					{
						Reset msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->ResetTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetEmergency::ID)
					{
						SetEmergency msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->SetEmergencyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ClearEmergency::ID)
					{
						ClearEmergency msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->ClearEmergencyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryStatus::ID)
					{
						QueryStatus msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->QueryStatusTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == RequestControl::ID)
					{
						RequestControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->RequestControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ReleaseControl::ID)
					{
						ReleaseControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->ReleaseControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryControl::ID)
					{
						QueryControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->QueryControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryAuthority::ID)
					{
						QueryAuthority msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->QueryAuthorityTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetAuthority::ID)
					{
						SetAuthority msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->SetAuthorityTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTimeout::ID)
					{
						QueryTimeout msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->QueryTimeoutTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == CreateEvent::ID)
					{
						CreateEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->CreateEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == UpdateEvent::ID)
					{
						UpdateEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->UpdateEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == CancelEvent::ID)
					{
						CancelEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->CancelEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryEvents::ID)
					{
						QueryEvents msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_ReceiveFSM->context->QueryEventsTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Initialized") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Initialized* casted_ie = (Initialized*) ie;
						pPrimitiveDriver_ReceiveFSM->context->InitializedTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Failure* casted_ie = (Failure*) ie;
						pPrimitiveDriver_ReceiveFSM->context->FailureTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Timeout") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Timeout* casted_ie = (Timeout*) ie;
						pPrimitiveDriver_ReceiveFSM->context->TimeoutTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("EventOccurred") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					EventOccurred* casted_ie = (EventOccurred*) ie;
						pPrimitiveDriver_ReceiveFSM->context->EventOccurredTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("EventError") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					EventError* casted_ie = (EventError*) ie;
						pPrimitiveDriver_ReceiveFSM->context->EventErrorTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Send") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					Send* casted_ie = (Send*) ie;
						pPrimitiveDriver_ReceiveFSM->context->SendTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("BroadcastLocal") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					BroadcastLocal* casted_ie = (BroadcastLocal*) ie;
						pPrimitiveDriver_ReceiveFSM->context->BroadcastLocalTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("BroadcastGlobal") == 0 && (ie->getSource().compare("PrimitiveDriver_ReceiveFSM") != 0))
				{
					BroadcastGlobal* casted_ie = (BroadcastGlobal*) ie;
						pPrimitiveDriver_ReceiveFSM->context->BroadcastGlobalTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetWrenchEffort::ID)
					{
						SetWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->SetWrenchEffortTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryWrenchEffort::ID)
					{
						QueryWrenchEffort msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->QueryWrenchEffortTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Shutdown::ID)
					{
						Shutdown msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->ShutdownTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Standby::ID)
					{
						Standby msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->StandbyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Resume::ID)
					{
						Resume msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->ResumeTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Reset::ID)
					{
						Reset msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->ResetTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetEmergency::ID)
					{
						SetEmergency msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->SetEmergencyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ClearEmergency::ID)
					{
						ClearEmergency msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->ClearEmergencyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryStatus::ID)
					{
						QueryStatus msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->QueryStatusTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == RequestControl::ID)
					{
						RequestControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->RequestControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ReleaseControl::ID)
					{
						ReleaseControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->ReleaseControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryControl::ID)
					{
						QueryControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->QueryControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryAuthority::ID)
					{
						QueryAuthority msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->QueryAuthorityTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetAuthority::ID)
					{
						SetAuthority msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->SetAuthorityTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTimeout::ID)
					{
						QueryTimeout msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->QueryTimeoutTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == CreateEvent::ID)
					{
						CreateEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->CreateEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == UpdateEvent::ID)
					{
						UpdateEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->UpdateEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == CancelEvent::ID)
					{
						CancelEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->CancelEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryEvents::ID)
					{
						QueryEvents msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPrimitiveDriver_SendFSM->context->QueryEventsTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Initialized") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Initialized* casted_ie = (Initialized*) ie;
						pPrimitiveDriver_SendFSM->context->InitializedTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Failure") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Failure* casted_ie = (Failure*) ie;
						pPrimitiveDriver_SendFSM->context->FailureTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Timeout") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Timeout* casted_ie = (Timeout*) ie;
						pPrimitiveDriver_SendFSM->context->TimeoutTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("EventOccurred") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					EventOccurred* casted_ie = (EventOccurred*) ie;
						pPrimitiveDriver_SendFSM->context->EventOccurredTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("EventError") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					EventError* casted_ie = (EventError*) ie;
						pPrimitiveDriver_SendFSM->context->EventErrorTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Send") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					Send* casted_ie = (Send*) ie;
						pPrimitiveDriver_SendFSM->context->SendTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("BroadcastLocal") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					BroadcastLocal* casted_ie = (BroadcastLocal*) ie;
						pPrimitiveDriver_SendFSM->context->BroadcastLocalTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("BroadcastGlobal") == 0 && (ie->getSource().compare("PrimitiveDriver_SendFSM") != 0))
				{
					BroadcastGlobal* casted_ie = (BroadcastGlobal*) ie;
						pPrimitiveDriver_SendFSM->context->BroadcastGlobalTransition();
						done = true;
				}
			} catch (...) {}

	

   mutex.unlock();
   return done;
}


};
