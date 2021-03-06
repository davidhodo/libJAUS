#ifndef _H_DIGITALVIDEO_SENDFSM_SM
#define _H_DIGITALVIDEO_SENDFSM_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : DigitalVideo_SendFSM_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{
    // Forward declarations.
    class DigitalVideo_SendFSM_SM;
    class DigitalVideo_SendFSM_SM_Sending;
    class DigitalVideo_SendFSM_SM_Internally_Generated_State_DO_NOT_USE;
    class DigitalVideo_SendFSM_SM_Default;
    class DigitalVideo_SendFSMState;
    class DigitalVideo_SendFSMContext;
    class DigitalVideo_SendFSM;

    class DigitalVideo_SendFSMState :
        public statemap::State
    {
    public:

        DigitalVideo_SendFSMState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(DigitalVideo_SendFSMContext&) {};
        virtual void Exit(DigitalVideo_SendFSMContext&) {};

        virtual void BroadcastGlobalTransition(DigitalVideo_SendFSMContext& context);
        virtual void BroadcastLocalTransition(DigitalVideo_SendFSMContext& context);
        virtual void CancelEventTransition(DigitalVideo_SendFSMContext& context);
        virtual void ControlDigitalVideoSensorStreamTransition(DigitalVideo_SendFSMContext& context);
        virtual void CreateEventTransition(DigitalVideo_SendFSMContext& context);
        virtual void EventErrorTransition(DigitalVideo_SendFSMContext& context);
        virtual void EventOccurredTransition(DigitalVideo_SendFSMContext& context);
        virtual void QueryAuthorityTransition(DigitalVideo_SendFSMContext& context);
        virtual void QueryControlTransition(DigitalVideo_SendFSMContext& context);
        virtual void QueryDigitalVideoSensorCapabilitiesTransition(DigitalVideo_SendFSMContext& context);
        virtual void QueryDigitalVideoSensorConfigurationTransition(DigitalVideo_SendFSMContext& context);
        virtual void QueryEventsTransition(DigitalVideo_SendFSMContext& context);
        virtual void QuerySensorGeometricPropertiesTransition(DigitalVideo_SendFSMContext& context);
        virtual void QueryTimeoutTransition(DigitalVideo_SendFSMContext& context);
        virtual void QueryVisualSensorCapabilitiesTransition(DigitalVideo_SendFSMContext& context);
        virtual void QueryVisualSensorConfigurationTransition(DigitalVideo_SendFSMContext& context);
        virtual void ReceiveTransition(DigitalVideo_SendFSMContext& context);
        virtual void ReleaseControlTransition(DigitalVideo_SendFSMContext& context);
        virtual void RequestControlTransition(DigitalVideo_SendFSMContext& context);
        virtual void SendTransition(DigitalVideo_SendFSMContext& context);
        virtual void SetAuthorityTransition(DigitalVideo_SendFSMContext& context);
        virtual void SetDigitalVideoSensorConfigurationTransition(DigitalVideo_SendFSMContext& context);
        virtual void SetVisualSensorConfigurationTransition(DigitalVideo_SendFSMContext& context);
        virtual void TimeoutTransition(DigitalVideo_SendFSMContext& context);
        virtual void UpdateEventTransition(DigitalVideo_SendFSMContext& context);

    protected:

        virtual void Default(DigitalVideo_SendFSMContext& context);
    };

    class DigitalVideo_SendFSM_SM
    {
    public:

        static DigitalVideo_SendFSM_SM_Sending Sending;
        static DigitalVideo_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class DigitalVideo_SendFSM_SM_Default :
        public DigitalVideo_SendFSMState
    {
    public:

        DigitalVideo_SendFSM_SM_Default(const char *name, int stateId)
        : DigitalVideo_SendFSMState(name, stateId)
        {};

    };

    class DigitalVideo_SendFSM_SM_Sending :
        public DigitalVideo_SendFSM_SM_Default
    {
    public:
        DigitalVideo_SendFSM_SM_Sending(const char *name, int stateId)
        : DigitalVideo_SendFSM_SM_Default(name, stateId)
        {};

    };

    class DigitalVideo_SendFSM_SM_Internally_Generated_State_DO_NOT_USE :
        public DigitalVideo_SendFSM_SM_Default
    {
    public:
        DigitalVideo_SendFSM_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : DigitalVideo_SendFSM_SM_Default(name, stateId)
        {};

        void BroadcastGlobalTransition(DigitalVideo_SendFSMContext& context);
        void BroadcastLocalTransition(DigitalVideo_SendFSMContext& context);
        void CancelEventTransition(DigitalVideo_SendFSMContext& context);
        void ControlDigitalVideoSensorStreamTransition(DigitalVideo_SendFSMContext& context);
        void CreateEventTransition(DigitalVideo_SendFSMContext& context);
        void EventErrorTransition(DigitalVideo_SendFSMContext& context);
        void EventOccurredTransition(DigitalVideo_SendFSMContext& context);
        void QueryAuthorityTransition(DigitalVideo_SendFSMContext& context);
        void QueryControlTransition(DigitalVideo_SendFSMContext& context);
        void QueryDigitalVideoSensorCapabilitiesTransition(DigitalVideo_SendFSMContext& context);
        void QueryDigitalVideoSensorConfigurationTransition(DigitalVideo_SendFSMContext& context);
        void QueryEventsTransition(DigitalVideo_SendFSMContext& context);
        void QuerySensorGeometricPropertiesTransition(DigitalVideo_SendFSMContext& context);
        void QueryTimeoutTransition(DigitalVideo_SendFSMContext& context);
        void QueryVisualSensorCapabilitiesTransition(DigitalVideo_SendFSMContext& context);
        void QueryVisualSensorConfigurationTransition(DigitalVideo_SendFSMContext& context);
        void ReceiveTransition(DigitalVideo_SendFSMContext& context);
        void ReleaseControlTransition(DigitalVideo_SendFSMContext& context);
        void RequestControlTransition(DigitalVideo_SendFSMContext& context);
        void SendTransition(DigitalVideo_SendFSMContext& context);
        void SetAuthorityTransition(DigitalVideo_SendFSMContext& context);
        void SetDigitalVideoSensorConfigurationTransition(DigitalVideo_SendFSMContext& context);
        void SetVisualSensorConfigurationTransition(DigitalVideo_SendFSMContext& context);
        void TimeoutTransition(DigitalVideo_SendFSMContext& context);
        void UpdateEventTransition(DigitalVideo_SendFSMContext& context);
    };

    class DigitalVideo_SendFSMContext :
        public statemap::FSMContext
    {
    public:

        DigitalVideo_SendFSMContext(DigitalVideo_SendFSM& owner)
        : FSMContext(DigitalVideo_SendFSM_SM::Sending),
          _owner(owner)
        {};

        DigitalVideo_SendFSMContext(DigitalVideo_SendFSM& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        DigitalVideo_SendFSM& getOwner() const
        {
            return (_owner);
        };

        DigitalVideo_SendFSMState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<DigitalVideo_SendFSMState&>(*_state));
        };

        void BroadcastGlobalTransition()
        {
            setTransition("BroadcastGlobalTransition");
            (getState()).BroadcastGlobalTransition(*this);
            setTransition(NULL);
        };

        void BroadcastLocalTransition()
        {
            setTransition("BroadcastLocalTransition");
            (getState()).BroadcastLocalTransition(*this);
            setTransition(NULL);
        };

        void CancelEventTransition()
        {
            setTransition("CancelEventTransition");
            (getState()).CancelEventTransition(*this);
            setTransition(NULL);
        };

        void ControlDigitalVideoSensorStreamTransition()
        {
            setTransition("ControlDigitalVideoSensorStreamTransition");
            (getState()).ControlDigitalVideoSensorStreamTransition(*this);
            setTransition(NULL);
        };

        void CreateEventTransition()
        {
            setTransition("CreateEventTransition");
            (getState()).CreateEventTransition(*this);
            setTransition(NULL);
        };

        void EventErrorTransition()
        {
            setTransition("EventErrorTransition");
            (getState()).EventErrorTransition(*this);
            setTransition(NULL);
        };

        void EventOccurredTransition()
        {
            setTransition("EventOccurredTransition");
            (getState()).EventOccurredTransition(*this);
            setTransition(NULL);
        };

        void QueryAuthorityTransition()
        {
            setTransition("QueryAuthorityTransition");
            (getState()).QueryAuthorityTransition(*this);
            setTransition(NULL);
        };

        void QueryControlTransition()
        {
            setTransition("QueryControlTransition");
            (getState()).QueryControlTransition(*this);
            setTransition(NULL);
        };

        void QueryDigitalVideoSensorCapabilitiesTransition()
        {
            setTransition("QueryDigitalVideoSensorCapabilitiesTransition");
            (getState()).QueryDigitalVideoSensorCapabilitiesTransition(*this);
            setTransition(NULL);
        };

        void QueryDigitalVideoSensorConfigurationTransition()
        {
            setTransition("QueryDigitalVideoSensorConfigurationTransition");
            (getState()).QueryDigitalVideoSensorConfigurationTransition(*this);
            setTransition(NULL);
        };

        void QueryEventsTransition()
        {
            setTransition("QueryEventsTransition");
            (getState()).QueryEventsTransition(*this);
            setTransition(NULL);
        };

        void QuerySensorGeometricPropertiesTransition()
        {
            setTransition("QuerySensorGeometricPropertiesTransition");
            (getState()).QuerySensorGeometricPropertiesTransition(*this);
            setTransition(NULL);
        };

        void QueryTimeoutTransition()
        {
            setTransition("QueryTimeoutTransition");
            (getState()).QueryTimeoutTransition(*this);
            setTransition(NULL);
        };

        void QueryVisualSensorCapabilitiesTransition()
        {
            setTransition("QueryVisualSensorCapabilitiesTransition");
            (getState()).QueryVisualSensorCapabilitiesTransition(*this);
            setTransition(NULL);
        };

        void QueryVisualSensorConfigurationTransition()
        {
            setTransition("QueryVisualSensorConfigurationTransition");
            (getState()).QueryVisualSensorConfigurationTransition(*this);
            setTransition(NULL);
        };

        void ReceiveTransition()
        {
            setTransition("ReceiveTransition");
            (getState()).ReceiveTransition(*this);
            setTransition(NULL);
        };

        void ReleaseControlTransition()
        {
            setTransition("ReleaseControlTransition");
            (getState()).ReleaseControlTransition(*this);
            setTransition(NULL);
        };

        void RequestControlTransition()
        {
            setTransition("RequestControlTransition");
            (getState()).RequestControlTransition(*this);
            setTransition(NULL);
        };

        void SendTransition()
        {
            setTransition("SendTransition");
            (getState()).SendTransition(*this);
            setTransition(NULL);
        };

        void SetAuthorityTransition()
        {
            setTransition("SetAuthorityTransition");
            (getState()).SetAuthorityTransition(*this);
            setTransition(NULL);
        };

        void SetDigitalVideoSensorConfigurationTransition()
        {
            setTransition("SetDigitalVideoSensorConfigurationTransition");
            (getState()).SetDigitalVideoSensorConfigurationTransition(*this);
            setTransition(NULL);
        };

        void SetVisualSensorConfigurationTransition()
        {
            setTransition("SetVisualSensorConfigurationTransition");
            (getState()).SetVisualSensorConfigurationTransition(*this);
            setTransition(NULL);
        };

        void TimeoutTransition()
        {
            setTransition("TimeoutTransition");
            (getState()).TimeoutTransition(*this);
            setTransition(NULL);
        };

        void UpdateEventTransition()
        {
            setTransition("UpdateEventTransition");
            (getState()).UpdateEventTransition(*this);
            setTransition(NULL);
        };

    private:

        DigitalVideo_SendFSM& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_DIGITALVIDEO_SENDFSM_SM
