#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_CONTROLDIGITALVIDEOSENSORSTREAM_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_CONTROLDIGITALVIDEOSENSORSTREAM_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

class DllExport ControlDigitalVideoSensorStream: public JTS::Message
{
public:
	static const int ID = 0x0805;
	
	class DllExport AppHeader
	{
	public:
		class DllExport HeaderRec
		{
		public:
			void setParent(AppHeader* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getMessageID();
			int setMessageID(jUnsignedShortInteger value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			HeaderRec &operator=(const HeaderRec &value);
			bool operator==(const HeaderRec &value) const;
			bool operator!=(const HeaderRec &value) const;
			HeaderRec();
			HeaderRec(const HeaderRec &value);
			virtual ~HeaderRec();
		
		protected:
			AppHeader* m_parent;
			jUnsignedShortInteger m_MessageID;
		};
	
		HeaderRec* const getHeaderRec();
		int setHeaderRec(const HeaderRec &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		AppHeader &operator=(const AppHeader &value);
		bool operator==(const AppHeader &value) const;
		bool operator!=(const AppHeader &value) const;
		AppHeader();
		AppHeader(const AppHeader &value);
		virtual ~AppHeader();
	
	protected:
		HeaderRec m_HeaderRec;
	};
	class DllExport Body
	{
	public:
		class DllExport ControlDigitalVideoSensorStreamRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getSensorID();
			int setSensorID(jUnsignedShortInteger value);
			jUnsignedByte getStreamState();
			int setStreamState(jUnsignedByte value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			ControlDigitalVideoSensorStreamRec &operator=(const ControlDigitalVideoSensorStreamRec &value);
			bool operator==(const ControlDigitalVideoSensorStreamRec &value) const;
			bool operator!=(const ControlDigitalVideoSensorStreamRec &value) const;
			ControlDigitalVideoSensorStreamRec();
			ControlDigitalVideoSensorStreamRec(const ControlDigitalVideoSensorStreamRec &value);
			virtual ~ControlDigitalVideoSensorStreamRec();
		
		protected:
			Body* m_parent;
			jUnsignedShortInteger m_SensorID;
			jUnsignedByte m_StreamState;
		};
	
		ControlDigitalVideoSensorStreamRec* const getControlDigitalVideoSensorStreamRec();
		int setControlDigitalVideoSensorStreamRec(const ControlDigitalVideoSensorStreamRec &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		Body &operator=(const Body &value);
		bool operator==(const Body &value) const;
		bool operator!=(const Body &value) const;
		Body();
		Body(const Body &value);
		virtual ~Body();
	
	protected:
		ControlDigitalVideoSensorStreamRec m_ControlDigitalVideoSensorStreamRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ControlDigitalVideoSensorStream &operator=(const ControlDigitalVideoSensorStream &value);
	bool operator==(const ControlDigitalVideoSensorStream &value) const;
	bool operator!=(const ControlDigitalVideoSensorStream &value) const;
	ControlDigitalVideoSensorStream();
	ControlDigitalVideoSensorStream(const ControlDigitalVideoSensorStream &value);
	virtual ~ControlDigitalVideoSensorStream();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_CONTROLDIGITALVIDEOSENSORSTREAM_H
