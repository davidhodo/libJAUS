/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : RangeSensor_SendFSM_sm.sm
 */

#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/RangeSensor_SendFSM.h"
#include "include/urn_jaus_jss_environmentSensing_RangeSensor_1_0/RangeSensor_SendFSM_sm.h"

using namespace statemap;

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{
    // Static class declarations.
    RangeSensor_SendFSM_SM_Sending RangeSensor_SendFSM_SM::Sending("RangeSensor_SendFSM_SM::Sending", 0);
    RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE("RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void RangeSensor_SendFSMState::BroadcastGlobalTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::BroadcastLocalTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::CancelEventTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::CreateEventTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::EventErrorTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::EventOccurredTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::QueryAuthorityTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::QueryControlTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::QueryEventsTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::QueryRangeSensorCapabilitiesTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::QueryRangeSensorCompressedDataTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::QueryRangeSensorConfigurationTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::QueryRangeSensorDataTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::QuerySensorGeometricPropertiesTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::QueryTimeoutTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::ReceiveTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::ReleaseControlTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::RequestControlTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::SendTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::SetAuthorityTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::SetRangeSensorConfigurationTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::TimeoutTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::UpdateEventTransition(RangeSensor_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void RangeSensor_SendFSMState::Default(RangeSensor_SendFSMContext& context)
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

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::CancelEventTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::CreateEventTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::EventErrorTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::EventOccurredTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryAuthorityTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryControlTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryControlTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryEventsTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryRangeSensorCapabilitiesTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryRangeSensorCapabilitiesTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryRangeSensorCapabilitiesTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryRangeSensorCompressedDataTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryRangeSensorCompressedDataTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryRangeSensorCompressedDataTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryRangeSensorConfigurationTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryRangeSensorConfigurationTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryRangeSensorConfigurationTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryRangeSensorDataTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryRangeSensorDataTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryRangeSensorDataTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QuerySensorGeometricPropertiesTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QuerySensorGeometricPropertiesTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QuerySensorGeometricPropertiesTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryTimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReceiveTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReleaseControlTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::RequestControlTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::RequestControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::RequestControlTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SendTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetAuthorityTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SetRangeSensorConfigurationTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetRangeSensorConfigurationTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SetRangeSensorConfigurationTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::TimeoutTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void RangeSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::UpdateEventTransition(RangeSensor_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : RangeSensor_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
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
