/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : GlobalVectorDriver_SendFSM_sm.sm
 */

#include "urn_jaus_jss_mobility_GlobalVectorDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_GlobalVectorDriver_1_0/GlobalVectorDriver_SendFSM.h"
#include "include/urn_jaus_jss_mobility_GlobalVectorDriver_1_0/GlobalVectorDriver_SendFSM_sm.h"

using namespace statemap;

namespace urn_jaus_jss_mobility_GlobalVectorDriver_1_0
{
    // Static class declarations.
    GlobalVectorDriver_SendFSM_SM_Sending GlobalVectorDriver_SendFSM_SM::Sending("GlobalVectorDriver_SendFSM_SM::Sending", 0);
    GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE("GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void GlobalVectorDriver_SendFSMState::BroadcastGlobalTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::BroadcastLocalTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::CancelEventTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::ClearEmergencyTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::CreateEventTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::EventErrorTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::EventOccurredTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::FailureTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::InitializedTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::QueryAuthorityTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::QueryControlTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::QueryEventsTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::QueryGlobalVectorTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::QueryStatusTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::QueryTimeoutTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::ReceiveTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::ReleaseControlTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::RequestControlTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::ResetTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::ResumeTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::SendTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::SetAuthorityTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::SetEmergencyTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::SetGlobalVectorTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::ShutdownTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::StandbyTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::TimeoutTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::UpdateEventTransition(GlobalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void GlobalVectorDriver_SendFSMState::Default(GlobalVectorDriver_SendFSMContext& context)
    {
        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "TRANSITION   : Default"
                << std::endl;
        }

        throw (
            TransitionUndefinedException(
                context.getState().getName(),
                context.getTransition()));

        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::CancelEventTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ClearEmergencyTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ClearEmergencyTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ClearEmergencyTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::CreateEventTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::EventErrorTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::EventOccurredTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::FailureTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::FailureTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::FailureTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::InitializedTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::InitializedTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::InitializedTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryControlTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryControlTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryEventsTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryGlobalVectorTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryGlobalVectorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryGlobalVectorTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryStatusTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryStatusTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryStatusTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReceiveTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::RequestControlTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::RequestControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::RequestControlTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ResetTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ResetTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ResetTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ResumeTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ResumeTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ResumeTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SendTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetEmergencyTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetEmergencyTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetEmergencyTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetGlobalVectorTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetGlobalVectorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetGlobalVectorTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ShutdownTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ShutdownTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ShutdownTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::StandbyTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::StandbyTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::StandbyTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::TimeoutTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void GlobalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::UpdateEventTransition(GlobalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : GlobalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }


        return;
    }
}

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
