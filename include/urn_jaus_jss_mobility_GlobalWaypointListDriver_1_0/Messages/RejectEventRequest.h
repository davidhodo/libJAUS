#ifndef URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_REJECTEVENTREQUEST_H
#define URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_REJECTEVENTREQUEST_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0
{

class DllExport RejectEventRequest: public JTS::Message
{
public:
	static const int ID = 0x01f4;
	
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
		class DllExport RejectEventRequestRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			jUnsignedByte getRequestID();
			int setRequestID(jUnsignedByte value);
			bool isResponseCodeValid() const;
			jUnsignedByte getResponseCode();
			int setResponseCode(jUnsignedByte value);
			bool isErrorMessageValid() const;
			jFixedLengthString getErrorMessage();
			int setErrorMessage(std::string value);
			int setErrorMessage(jFixedLengthString value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			RejectEventRequestRec &operator=(const RejectEventRequestRec &value);
			bool operator==(const RejectEventRequestRec &value) const;
			bool operator!=(const RejectEventRequestRec &value) const;
			RejectEventRequestRec();
			RejectEventRequestRec(const RejectEventRequestRec &value);
			virtual ~RejectEventRequestRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedByte m_PresenceVector;
			jUnsignedByte m_RequestID;
			jUnsignedByte m_ResponseCode;
			jFixedLengthString m_ErrorMessage;
		};
	
		RejectEventRequestRec* const getRejectEventRequestRec();
		int setRejectEventRequestRec(const RejectEventRequestRec &value);
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
		RejectEventRequestRec m_RejectEventRequestRec;
	};

	unsigned int getID() { return ID; };
	MsgHeader* const getMsgHeader();
	int setMsgHeader(const MsgHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	RejectEventRequest &operator=(const RejectEventRequest &value);
	bool operator==(const RejectEventRequest &value) const;
	bool operator!=(const RejectEventRequest &value) const;
	RejectEventRequest();
	RejectEventRequest(const RejectEventRequest &value);
	virtual ~RejectEventRequest();

protected:
	MsgHeader m_MsgHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_REJECTEVENTREQUEST_H
