#ifndef URN_JAUS_JSS_MOBILITY_PRIMITIVEDRIVER_1_0_REJECTCONTROL_H
#define URN_JAUS_JSS_MOBILITY_PRIMITIVEDRIVER_1_0_REJECTCONTROL_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_PrimitiveDriver_1_0
{

class DllExport RejectControl: public JTS::Message
{
public:
	static const int ID = 0x0010;
	
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
		class DllExport RejectControlRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getResponseCode();
			int setResponseCode(jUnsignedByte value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			RejectControlRec &operator=(const RejectControlRec &value);
			bool operator==(const RejectControlRec &value) const;
			bool operator!=(const RejectControlRec &value) const;
			RejectControlRec();
			RejectControlRec(const RejectControlRec &value);
			virtual ~RejectControlRec();
		
		protected:
			Body* m_parent;
			jUnsignedByte m_ResponseCode;
		};
	
		RejectControlRec* const getRejectControlRec();
		int setRejectControlRec(const RejectControlRec &value);
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
		RejectControlRec m_RejectControlRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	RejectControl &operator=(const RejectControl &value);
	bool operator==(const RejectControl &value) const;
	bool operator!=(const RejectControl &value) const;
	RejectControl();
	RejectControl(const RejectControl &value);
	virtual ~RejectControl();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_PRIMITIVEDRIVER_1_0_REJECTCONTROL_H
