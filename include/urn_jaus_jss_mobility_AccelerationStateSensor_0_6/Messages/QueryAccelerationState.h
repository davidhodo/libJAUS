#ifndef URN_JAUS_JSS_MOBILITY_ACCELERATIONSTATESENSOR_0_6_QUERYACCELERATIONSTATE_H
#define URN_JAUS_JSS_MOBILITY_ACCELERATIONSTATESENSOR_0_6_QUERYACCELERATIONSTATE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_AccelerationStateSensor_0_6
{

class DllExport QueryAccelerationState: public JTS::Message
{
public:
	static const int ID = 0x2417;
	
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
		class DllExport QueryAccelerationStateRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getPresenceVector();
			int setPresenceVector(jUnsignedShortInteger value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryAccelerationStateRec &operator=(const QueryAccelerationStateRec &value);
			bool operator==(const QueryAccelerationStateRec &value) const;
			bool operator!=(const QueryAccelerationStateRec &value) const;
			QueryAccelerationStateRec();
			QueryAccelerationStateRec(const QueryAccelerationStateRec &value);
			virtual ~QueryAccelerationStateRec();
		
		protected:
			Body* m_parent;
			jUnsignedShortInteger m_PresenceVector;
		};
	
		QueryAccelerationStateRec* const getQueryAccelerationStateRec();
		int setQueryAccelerationStateRec(const QueryAccelerationStateRec &value);
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
		QueryAccelerationStateRec m_QueryAccelerationStateRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryAccelerationState &operator=(const QueryAccelerationState &value);
	bool operator==(const QueryAccelerationState &value) const;
	bool operator!=(const QueryAccelerationState &value) const;
	QueryAccelerationState();
	QueryAccelerationState(const QueryAccelerationState &value);
	virtual ~QueryAccelerationState();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_ACCELERATIONSTATESENSOR_0_6_QUERYACCELERATIONSTATE_H
