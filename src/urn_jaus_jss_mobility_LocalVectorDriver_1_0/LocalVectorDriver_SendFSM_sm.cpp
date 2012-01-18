/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : LocalVectorDriver_SendFSM_sm.sm
 */

#include "urn_jaus_jss_mobility_LocalVectorDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_LocalVectorDriver_1_0/LocalVectorDriver_SendFSM.h"
#include "include/urn_jaus_jss_mobility_LocalVectorDriver_1_0/LocalVectorDriver_SendFSM_sm.h"

using namespace statemap;

namespace urn_jaus_jss_mobility_LocalVectorDriver_1_0
{
    // Static class declarations.
    LocalVectorDriver_SendFSM_SM_Sending LocalVectorDriver_SendFSM_SM::Sending("LocalVectorDriver_SendFSM_SM::Sending", 0);
    LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE("LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void LocalVectorDriver_SendFSMState::BroadcastGlobalTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::BroadcastLocalTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::CancelEventTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::ClearEmergencyTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::CreateEventTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::EventErrorTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::EventOccurredTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::FailureTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::InitializedTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::QueryAuthorityTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::QueryControlTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::QueryEventsTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::QueryLocalVectorTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::QueryStatusTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::QueryTimeoutTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::ReceiveTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::ReleaseControlTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::RequestControlTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::ResetTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::ResumeTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::SendTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::SetAuthorityTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::SetEmergencyTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::SetLocalVectorTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::ShutdownTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::StandbyTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::TimeoutTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::UpdateEventTransition(LocalVectorDriver_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void LocalVectorDriver_SendFSMState::Default(LocalVectorDriver_SendFSMContext& context)
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

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::CancelEventTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ClearEmergencyTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ClearEmergencyTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ClearEmergencyTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::CreateEventTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::EventErrorTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::EventOccurredTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::FailureTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::FailureTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::FailureTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::InitializedTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::InitializedTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::InitializedTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryControlTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryControlTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryEventsTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryLocalVectorTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryLocalVectorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryLocalVectorTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryStatusTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryStatusTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryStatusTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReceiveTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::RequestControlTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::RequestControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::RequestControlTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ResetTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ResetTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ResetTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ResumeTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ResumeTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ResumeTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SendTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetEmergencyTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetEmergencyTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetEmergencyTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetLocalVectorTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetLocalVectorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetLocalVectorTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ShutdownTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ShutdownTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ShutdownTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::StandbyTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::StandbyTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::StandbyTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::TimeoutTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void LocalVectorDriver_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::UpdateEventTransition(LocalVectorDriver_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalVectorDriver_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
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