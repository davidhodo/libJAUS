/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : Liveness_SendFSM_sm.sm
 */

#include "urn_jaus_jss_core_Liveness_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_core_Liveness_1_0/Liveness_SendFSM.h"
#include "include/urn_jaus_jss_core_Liveness_1_0/Liveness_SendFSM_sm.h"

using namespace statemap;

namespace urn_jaus_jss_core_Liveness_1_0
{
    // Static class declarations.
    Liveness_SendFSM_SM_Sending Liveness_SendFSM_SM::Sending("Liveness_SendFSM_SM::Sending", 0);
    Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE("Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void Liveness_SendFSMState::BroadcastGlobalTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::BroadcastLocalTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::CancelEventTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::CreateEventTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::EventErrorTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::EventOccurredTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::QueryEventsTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::QueryHeartbeatPulseTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::ReceiveTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::SendTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::UpdateEventTransition(Liveness_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_SendFSMState::Default(Liveness_SendFSMContext& context)
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

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::CancelEventTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::CreateEventTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::EventErrorTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::EventOccurredTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryEventsTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryHeartbeatPulseTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryHeartbeatPulseTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryHeartbeatPulseTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReceiveTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SendTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::UpdateEventTransition(Liveness_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
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