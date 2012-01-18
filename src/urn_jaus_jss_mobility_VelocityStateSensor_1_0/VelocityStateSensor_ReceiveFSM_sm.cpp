/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : VelocityStateSensor_ReceiveFSM_sm.sm
 */

#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/VelocityStateSensor_ReceiveFSM.h"
#include "include/urn_jaus_jss_mobility_VelocityStateSensor_1_0/VelocityStateSensor_ReceiveFSM_sm.h"

using namespace statemap;

namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{
    // Static class declarations.
    VelocityStateSensor_ReceiveFSM_SM_Receiving_Ready VelocityStateSensor_ReceiveFSM_SM::Receiving_Ready("VelocityStateSensor_ReceiveFSM_SM::Receiving_Ready", 0);
    VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE("VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void VelocityStateSensor_ReceiveFSMState::BroadcastGlobalTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::BroadcastLocalTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::CancelEventTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::CreateEventTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::EventErrorTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::EventOccurredTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::QueryEventsTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::QueryVelocityStateTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::ReceiveTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::ReceiveTransition(VelocityStateSensor_ReceiveFSMContext& context, QueryVelocityState msg, Receive::Body::ReceiveRec transportData)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::SendTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::UpdateEventTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void VelocityStateSensor_ReceiveFSMState::Default(VelocityStateSensor_ReceiveFSMContext& context)
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

    void VelocityStateSensor_ReceiveFSM_SM_Receiving_Ready::ReceiveTransition(VelocityStateSensor_ReceiveFSMContext& context, QueryVelocityState msg, Receive::Body::ReceiveRec transportData)
    {
        VelocityStateSensor_ReceiveFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Receiving_Ready"
            << std::endl;
        }

        VelocityStateSensor_ReceiveFSMState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(QueryVelocityState msg, Receive::Body::ReceiveRec transportData)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.SendAction("ReportVelocityState", transportData);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(QueryVelocityState msg, Receive::Body::ReceiveRec transportData)"
                    << std::endl;
            }

            context.setState(endState);
        }
        catch (...)
        {
            context.setState(endState);
            throw;
        }

        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }


        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }


        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CancelEventTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }


        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CreateEventTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }


        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::EventErrorTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }


        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::EventOccurredTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }


        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryEventsTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }


        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryVelocityStateTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryVelocityStateTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryVelocityStateTransition()"
                << std::endl;
        }


        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::ReceiveTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }


        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::SendTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }


        return;
    }

    void VelocityStateSensor_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::UpdateEventTransition(VelocityStateSensor_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : VelocityStateSensor_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
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
