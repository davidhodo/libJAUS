#ifndef URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_QUERYGLOBALWAYPOINT_H
#define URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_QUERYGLOBALWAYPOINT_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0
{

class DllExport QueryGlobalWaypoint: public JTS::Message
{
public:
	static const int ID = 0x240c;
	
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
		class DllExport QueryGlobalWaypointRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getPresenceVector();
			int setPresenceVector(jUnsignedByte value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryGlobalWaypointRec &operator=(const QueryGlobalWaypointRec &value);
			bool operator==(const QueryGlobalWaypointRec &value) const;
			bool operator!=(const QueryGlobalWaypointRec &value) const;
			QueryGlobalWaypointRec();
			QueryGlobalWaypointRec(const QueryGlobalWaypointRec &value);
			virtual ~QueryGlobalWaypointRec();
		
		protected:
			Body* m_parent;
			jUnsignedByte m_PresenceVector;
		};
	
		QueryGlobalWaypointRec* const getQueryGlobalWaypointRec();
		int setQueryGlobalWaypointRec(const QueryGlobalWaypointRec &value);
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
		QueryGlobalWaypointRec m_QueryGlobalWaypointRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryGlobalWaypoint &operator=(const QueryGlobalWaypoint &value);
	bool operator==(const QueryGlobalWaypoint &value) const;
	bool operator!=(const QueryGlobalWaypoint &value) const;
	QueryGlobalWaypoint();
	QueryGlobalWaypoint(const QueryGlobalWaypoint &value);
	virtual ~QueryGlobalWaypoint();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_QUERYGLOBALWAYPOINT_H
