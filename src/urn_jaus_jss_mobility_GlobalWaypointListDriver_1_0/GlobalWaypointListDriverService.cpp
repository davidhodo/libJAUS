

#include "urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0/GlobalWaypointListDriverService.h"

using namespace JTS;

namespace urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0
{
	
GlobalWaypointListDriverService::GlobalWaypointListDriverService(JTS::JausRouter* jausRouter , urn_jaus_jss_core_Transport_1_0::TransportService* pTransportService, urn_jaus_jss_core_Events_1_0::EventsService* pEventsService, urn_jaus_jss_core_AccessControl_1_0::AccessControlService* pAccessControlService, urn_jaus_jss_core_Management_1_0::ManagementService* pManagementService, urn_jaus_jss_mobility_ListManager_1_0::ListManagerService* pListManagerService) : Service()
{
	jausRouter->setTransportType(JausRouter::Version_1_0);
	
	pGlobalWaypointListDriver_ReceiveFSM = new GlobalWaypointListDriver_ReceiveFSM(pTransportService->pTransport_ReceiveFSM, pEventsService->pEvents_ReceiveFSM, pAccessControlService->pAccessControl_ReceiveFSM, pManagementService->pManagement_ReceiveFSM, pListManagerService->pListManager_ReceiveFSM);
	pGlobalWaypointListDriver_ReceiveFSM->setHandlers(ieHandler, jausRouter);
	pGlobalWaypointListDriver_ReceiveFSM->setupNotifications();
	pGlobalWaypointListDriver_SendFSM = new GlobalWaypointListDriver_SendFSM(pTransportService->pTransport_SendFSM, pEventsService->pEvents_SendFSM, pAccessControlService->pAccessControl_SendFSM, pManagementService->pManagement_SendFSM, pListManagerService->pListManager_SendFSM);
	pGlobalWaypointListDriver_SendFSM->setHandlers(ieHandler, jausRouter);
	pGlobalWaypointListDriver_SendFSM->setupNotifications();

}


GlobalWaypointListDriverService::~GlobalWaypointListDriverService()
{
	delete pGlobalWaypointListDriver_ReceiveFSM;
	delete pGlobalWaypointListDriver_SendFSM;

}

/**
 *	This is the function that will actually be run by the thread at start-up.
 *  We override it from EventReceiver in order to handle any entry
 *  actions defined by the initial state. 
 */
void GlobalWaypointListDriverService::run()
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
bool GlobalWaypointListDriverService::processTransitions(InternalEvent* ie)
{
        bool done = false;

   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   mutex.lock();

			// Invoke the FSM transition for this event.
			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryGlobalWaypoint::ID)
					{
						QueryGlobalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryGlobalWaypoint::ID)
					{
						QueryGlobalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryGlobalWaypoint::ID)
					{
						QueryGlobalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryGlobalWaypoint::ID)
					{
						QueryGlobalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryGlobalWaypoint::ID)
					{
						QueryGlobalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryGlobalWaypoint::ID)
					{
						QueryGlobalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ExecuteList::ID)
					{
						ExecuteList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ExecuteList::ID)
					{
						ExecuteList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryGlobalWaypoint::ID)
					{
						QueryGlobalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Init") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_InitTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_FailureTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Shutdown") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_ShutdownTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_Emergency") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA_EmergencyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateA") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled_StateATransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_NotControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Standby") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_StandbyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateB") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled_StateBTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_Controlled") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready_ControlledTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_Ready") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving_ReadyTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_Receiving") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
						pGlobalWaypointListDriver_ReceiveFSM->context->InternalStateChange_To_GlobalWaypointListDriver_ReceiveFSM_ReceivingTransition(ie);
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryGlobalWaypoint::ID)
					{
						QueryGlobalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						Receive::Body::ReceiveRec transportData = *(casted_ie->getBody()->getReceiveRec());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReceiveTransition(msg, transportData);
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
bool GlobalWaypointListDriverService::defaultTransitions(InternalEvent* ie)
{
   bool done = false;

   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   mutex.lock();

			// Invoke the FSM transition for this event.
			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ExecuteList::ID)
					{
						ExecuteList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->ExecuteListTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryTravelSpeedTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryGlobalWaypoint::ID)
					{
						QueryGlobalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryGlobalWaypointTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryActiveElementTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->SetElementTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == DeleteElement::ID)
					{
						DeleteElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->DeleteElementTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryElement::ID)
					{
						QueryElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryElementTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryElementList::ID)
					{
						QueryElementList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryElementListTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryElementCount::ID)
					{
						QueryElementCount msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryElementCountTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Shutdown::ID)
					{
						Shutdown msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->ShutdownTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Standby::ID)
					{
						Standby msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->StandbyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Resume::ID)
					{
						Resume msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->ResumeTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Reset::ID)
					{
						Reset msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->ResetTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetEmergency::ID)
					{
						SetEmergency msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->SetEmergencyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ClearEmergency::ID)
					{
						ClearEmergency msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->ClearEmergencyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryStatus::ID)
					{
						QueryStatus msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryStatusTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == RequestControl::ID)
					{
						RequestControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->RequestControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ReleaseControl::ID)
					{
						ReleaseControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->ReleaseControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryControl::ID)
					{
						QueryControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryAuthority::ID)
					{
						QueryAuthority msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryAuthorityTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetAuthority::ID)
					{
						SetAuthority msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->SetAuthorityTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTimeout::ID)
					{
						QueryTimeout msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryTimeoutTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == CreateEvent::ID)
					{
						CreateEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->CreateEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == UpdateEvent::ID)
					{
						UpdateEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->UpdateEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == CancelEvent::ID)
					{
						CancelEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->CancelEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryEvents::ID)
					{
						QueryEvents msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_ReceiveFSM->context->QueryEventsTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Initialized") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Initialized* casted_ie = (Initialized*) ie;
						pGlobalWaypointListDriver_ReceiveFSM->context->InitializedTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Failure* casted_ie = (Failure*) ie;
						pGlobalWaypointListDriver_ReceiveFSM->context->FailureTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Timeout") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Timeout* casted_ie = (Timeout*) ie;
						pGlobalWaypointListDriver_ReceiveFSM->context->TimeoutTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("EventOccurred") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					EventOccurred* casted_ie = (EventOccurred*) ie;
						pGlobalWaypointListDriver_ReceiveFSM->context->EventOccurredTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("EventError") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					EventError* casted_ie = (EventError*) ie;
						pGlobalWaypointListDriver_ReceiveFSM->context->EventErrorTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Send") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					Send* casted_ie = (Send*) ie;
						pGlobalWaypointListDriver_ReceiveFSM->context->SendTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("BroadcastLocal") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					BroadcastLocal* casted_ie = (BroadcastLocal*) ie;
						pGlobalWaypointListDriver_ReceiveFSM->context->BroadcastLocalTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("BroadcastGlobal") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_ReceiveFSM") != 0))
				{
					BroadcastGlobal* casted_ie = (BroadcastGlobal*) ie;
						pGlobalWaypointListDriver_ReceiveFSM->context->BroadcastGlobalTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ExecuteList::ID)
					{
						ExecuteList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->ExecuteListTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryTravelSpeedTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryGlobalWaypoint::ID)
					{
						QueryGlobalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryGlobalWaypointTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryActiveElementTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->SetElementTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == DeleteElement::ID)
					{
						DeleteElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->DeleteElementTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryElement::ID)
					{
						QueryElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryElementTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryElementList::ID)
					{
						QueryElementList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryElementListTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryElementCount::ID)
					{
						QueryElementCount msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryElementCountTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Shutdown::ID)
					{
						Shutdown msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->ShutdownTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Standby::ID)
					{
						Standby msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->StandbyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Resume::ID)
					{
						Resume msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->ResumeTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == Reset::ID)
					{
						Reset msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->ResetTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetEmergency::ID)
					{
						SetEmergency msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->SetEmergencyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ClearEmergency::ID)
					{
						ClearEmergency msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->ClearEmergencyTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryStatus::ID)
					{
						QueryStatus msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryStatusTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == RequestControl::ID)
					{
						RequestControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->RequestControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == ReleaseControl::ID)
					{
						ReleaseControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->ReleaseControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryControl::ID)
					{
						QueryControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryControlTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryAuthority::ID)
					{
						QueryAuthority msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryAuthorityTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == SetAuthority::ID)
					{
						SetAuthority msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->SetAuthorityTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryTimeout::ID)
					{
						QueryTimeout msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryTimeoutTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == CreateEvent::ID)
					{
						CreateEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->CreateEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == UpdateEvent::ID)
					{
						UpdateEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->UpdateEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == CancelEvent::ID)
					{
						CancelEvent msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->CancelEventTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					if ( id == QueryEvents::ID)
					{
						QueryEvents msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pGlobalWaypointListDriver_SendFSM->context->QueryEventsTransition();
						done = true;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Initialized") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Initialized* casted_ie = (Initialized*) ie;
						pGlobalWaypointListDriver_SendFSM->context->InitializedTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Failure") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Failure* casted_ie = (Failure*) ie;
						pGlobalWaypointListDriver_SendFSM->context->FailureTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Timeout") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Timeout* casted_ie = (Timeout*) ie;
						pGlobalWaypointListDriver_SendFSM->context->TimeoutTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("EventOccurred") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					EventOccurred* casted_ie = (EventOccurred*) ie;
						pGlobalWaypointListDriver_SendFSM->context->EventOccurredTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("EventError") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					EventError* casted_ie = (EventError*) ie;
						pGlobalWaypointListDriver_SendFSM->context->EventErrorTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Send") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					Send* casted_ie = (Send*) ie;
						pGlobalWaypointListDriver_SendFSM->context->SendTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("BroadcastLocal") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					BroadcastLocal* casted_ie = (BroadcastLocal*) ie;
						pGlobalWaypointListDriver_SendFSM->context->BroadcastLocalTransition();
						done = true;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("BroadcastGlobal") == 0 && (ie->getSource().compare("GlobalWaypointListDriver_SendFSM") != 0))
				{
					BroadcastGlobal* casted_ie = (BroadcastGlobal*) ie;
						pGlobalWaypointListDriver_SendFSM->context->BroadcastGlobalTransition();
						done = true;
				}
			} catch (...) {}

	

   mutex.unlock();
   return done;
}


};
