#ifndef URN_JAUS_JSS_MOBILITY_GLOBALVECTORDRIVER_1_0_REPORTEVENTS_H
#define URN_JAUS_JSS_MOBILITY_GLOBALVECTORDRIVER_1_0_REPORTEVENTS_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_GlobalVectorDriver_1_0
{

class DllExport ReportEvents: public JTS::Message
{
public:
	static const int ID = 0x41f0;
	
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
		class DllExport EventList
		{
		public:
			class DllExport ReportEventRec
			{
			public:
				class DllExport QueryMessage
				{
				public:
					void setParent(ReportEventRec* parent);
					void setParentPresenceVector();
					const jUnsignedInteger getLength() const;
					const unsigned char *getData() const;
					int set(const jUnsignedInteger &length, const unsigned char *data);
					const unsigned int getSize();
					virtual void encode(unsigned char *bytes);
					virtual void decode(const unsigned char *bytes);
					QueryMessage &operator=(const QueryMessage &value);
					bool operator==(const QueryMessage &value) const;
					bool operator!=(const QueryMessage &value) const;
					QueryMessage();
					QueryMessage(const QueryMessage &value);
					virtual ~QueryMessage();
				
				protected:
					ReportEventRec* m_parent;
					jUnsignedInteger m_Length;
					unsigned char *m_Data;
				};
			
				void setParent(EventList* parent);
				void setParentPresenceVector();
				jUnsignedByte getEventType();
				int setEventType(jUnsignedByte value);
				jUnsignedByte getEventID();
				int setEventID(jUnsignedByte value);
				QueryMessage* const getQueryMessage();
				int setQueryMessage(const QueryMessage &value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				ReportEventRec &operator=(const ReportEventRec &value);
				bool operator==(const ReportEventRec &value) const;
				bool operator!=(const ReportEventRec &value) const;
				ReportEventRec();
				ReportEventRec(const ReportEventRec &value);
				virtual ~ReportEventRec();
			
			protected:
				EventList* m_parent;
				jUnsignedByte m_EventType;
				jUnsignedByte m_EventID;
				QueryMessage m_QueryMessage;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			ReportEventRec* const getElement(unsigned int index);
			int setElement(unsigned int index, const ReportEventRec &value);
			int addElement(const ReportEventRec &value);
			int deleteElement(unsigned int index);
			int deleteLastElement();
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			EventList &operator=(const EventList &value);
			bool operator==(const EventList &value) const;
			bool operator!=(const EventList &value) const;
			EventList();
			EventList(const EventList &value);
			virtual ~EventList();
		
		protected:
			Body* m_parent;
			std::vector<ReportEventRec> m_ReportEventRec;
		};
	
		EventList* const getEventList();
		int setEventList(const EventList &value);
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
		EventList m_EventList;
	};

	unsigned int getID() { return ID; };
	MsgHeader* const getMsgHeader();
	int setMsgHeader(const MsgHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportEvents &operator=(const ReportEvents &value);
	bool operator==(const ReportEvents &value) const;
	bool operator!=(const ReportEvents &value) const;
	ReportEvents();
	ReportEvents(const ReportEvents &value);
	virtual ~ReportEvents();

protected:
	MsgHeader m_MsgHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_GLOBALVECTORDRIVER_1_0_REPORTEVENTS_H
