/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : Transport_SendFSM_sm.sm
 */

#include "urn_jaus_jss_core_Transport_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_core_Transport_1_0/Transport_SendFSM.h"
#include "include/urn_jaus_jss_core_Transport_1_0/Transport_SendFSM_sm.h"

using namespace statemap;

namespace urn_jaus_jss_core_Transport_1_0
{
    // Static class declarations.
    Transport_SendFSM_SM_Sending Transport_SendFSM_SM::Sending("Transport_SendFSM_SM::Sending", 0);
    Transport_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE("Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void Transport_SendFSMState::BroadcastGlobalTransition(Transport_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Transport_SendFSMState::BroadcastGlobalTransition(Transport_SendFSMContext& context, BroadcastGlobal msg)
    {
        Default(context);
        return;
    }

    void Transport_SendFSMState::BroadcastLocalTransition(Transport_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Transport_SendFSMState::BroadcastLocalTransition(Transport_SendFSMContext& context, BroadcastLocal msg)
    {
        Default(context);
        return;
    }

    void Transport_SendFSMState::ReceiveTransition(Transport_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Transport_SendFSMState::SendTransition(Transport_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void Transport_SendFSMState::SendTransition(Transport_SendFSMContext& context, Send msg)
    {
        Default(context);
        return;
    }

    void Transport_SendFSMState::Default(Transport_SendFSMContext& context)
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

    void Transport_SendFSM_SM_Sending::BroadcastGlobalTransition(Transport_SendFSMContext& context, BroadcastGlobal msg)
    {
        Transport_SendFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Transport_SendFSM_SM::Sending"
            << std::endl;
        }

        Transport_SendFSMState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Transport_SendFSM_SM::Sending::BroadcastGlobalTransition(BroadcastGlobal msg)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.BroadcastGlobalEnqueueAction(msg);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : Transport_SendFSM_SM::Sending::BroadcastGlobalTransition(BroadcastGlobal msg)"
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

    void Transport_SendFSM_SM_Sending::BroadcastLocalTransition(Transport_SendFSMContext& context, BroadcastLocal msg)
    {
        Transport_SendFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Transport_SendFSM_SM::Sending"
            << std::endl;
        }

        Transport_SendFSMState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Transport_SendFSM_SM::Sending::BroadcastLocalTransition(BroadcastLocal msg)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.BroadcastLocalEnqueueAction(msg);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : Transport_SendFSM_SM::Sending::BroadcastLocalTransition(BroadcastLocal msg)"
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

    void Transport_SendFSM_SM_Sending::SendTransition(Transport_SendFSMContext& context, Send msg)
    {
        Transport_SendFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Transport_SendFSM_SM::Sending"
            << std::endl;
        }

        Transport_SendFSMState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Transport_SendFSM_SM::Sending::SendTransition(Send msg)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.EnqueueAction(msg);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : Transport_SendFSM_SM::Sending::SendTransition(Send msg)"
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

    void Transport_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition(Transport_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }


        return;
    }

    void Transport_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition(Transport_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }


        return;
    }

    void Transport_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReceiveTransition(Transport_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }


        return;
    }

    void Transport_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SendTransition(Transport_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Transport_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
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
