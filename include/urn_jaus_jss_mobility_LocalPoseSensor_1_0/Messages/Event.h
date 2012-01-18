#ifndef URN_JAUS_JSS_MOBILITY_LOCALPOSESENSOR_1_0_EVENT_H
#define URN_JAUS_JSS_MOBILITY_LOCALPOSESENSOR_1_0_EVENT_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_LocalPoseSensor_1_0
{

class DllExport Event: public JTS::Message
{
public:
	static const int ID = 0x41f1;
	
	class DllExport MsgHeader
	{
	public:
		class DllExport HeaderRec
		{
		public:
			void setParent(MsgHeader* parent);
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
			MsgHeader* m_parent;
			jUnsignedShortInteger m_MessageID;
		};
	
		HeaderRec* const getHeaderRec();
		int setHeaderRec(const HeaderRec &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		MsgHeader &operator=(const MsgHeader &value);
		bool operator==(const MsgHeader &value) const;
		bool operator!=(const MsgHeader &value) const;
		MsgHeader();
		MsgHeader(const MsgHeader &value);
		virtual ~MsgHeader();
	
	protected:
		HeaderRec m_HeaderRec;
	};
	class DllExport Body
	{
	public:
		class DllExport EventRec
		{
		public:
			class DllExport ReportMessage
			{
			public:
				void setParent(EventRec* parent);
				void setParentPresenceVector();
				const jUnsignedInteger getLength() const;
				const unsigned char *getData() const;
				int set(const jUnsignedInteger &length, const unsigned char *data);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				ReportMessage &operator=(const ReportMessage &value);
				bool operator==(const ReportMessage &value) const;
				bool operator!=(const ReportMessage &value) const;
				ReportMessage();
				ReportMessage(const ReportMessage &value);
				virtual ~ReportMessage();
			
			protected:
				EventRec* m_parent;
				jUnsignedInteger m_Length;
				unsigned char *m_Data;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getEventID();
			int setEventID(jUnsignedByte value);
			jUnsignedByte getSequenceNumber();
			int setSequenceNumber(jUnsignedByte value);
			ReportMessage* const getReportMessage();
			int setReportMessage(const ReportMessage &value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			EventRec &operator=(const EventRec &value);
			bool operator==(const EventRec &value) const;
			bool operator!=(const EventRec &value) const;
			EventRec();
			EventRec(const EventRec &value);
			virtual ~EventRec();
		
		protected:
			Body* m_parent;
			jUnsignedByte m_EventID;
			jUnsignedByte m_SequenceNumber;
			ReportMessage m_ReportMessage;
		};
	
		EventRec* const getEventRec();
		int setEventRec(const EventRec &value);
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
		EventRec m_EventRec;
	};

	unsigned int getID() { return ID; };
	MsgHeader* const getMsgHeader();
	int setMsgHeader(const MsgHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	Event &operator=(const Event &value);
	bool operator==(const Event &value) const;
	bool operator!=(const Event &value) const;
	Event();
	Event(const Event &value);
	virtual ~Event();

protected:
	MsgHeader m_MsgHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_LOCALPOSESENSOR_1_0_EVENT_H
