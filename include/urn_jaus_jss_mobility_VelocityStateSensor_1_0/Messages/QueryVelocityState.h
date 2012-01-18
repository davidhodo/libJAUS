#ifndef URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_QUERYVELOCITYSTATE_H
#define URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_QUERYVELOCITYSTATE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{

class DllExport QueryVelocityState: public JTS::Message
{
public:
	static const int ID = 0x2404;
	
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
		class DllExport QueryVelocityStateRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getPresenceVector();
			int setPresenceVector(jUnsignedShortInteger value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryVelocityStateRec &operator=(const QueryVelocityStateRec &value);
			bool operator==(const QueryVelocityStateRec &value) const;
			bool operator!=(const QueryVelocityStateRec &value) const;
			QueryVelocityStateRec();
			QueryVelocityStateRec(const QueryVelocityStateRec &value);
			virtual ~QueryVelocityStateRec();
		
		protected:
			Body* m_parent;
			jUnsignedShortInteger m_PresenceVector;
		};
	
		QueryVelocityStateRec* const getQueryVelocityStateRec();
		int setQueryVelocityStateRec(const QueryVelocityStateRec &value);
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
		QueryVelocityStateRec m_QueryVelocityStateRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryVelocityState &operator=(const QueryVelocityState &value);
	bool operator==(const QueryVelocityState &value) const;
	bool operator!=(const QueryVelocityState &value) const;
	QueryVelocityState();
	QueryVelocityState(const QueryVelocityState &value);
	virtual ~QueryVelocityState();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_QUERYVELOCITYSTATE_H
