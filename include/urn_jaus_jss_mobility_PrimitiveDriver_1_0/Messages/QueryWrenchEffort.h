#ifndef URN_JAUS_JSS_MOBILITY_PRIMITIVEDRIVER_1_0_QUERYWRENCHEFFORT_H
#define URN_JAUS_JSS_MOBILITY_PRIMITIVEDRIVER_1_0_QUERYWRENCHEFFORT_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_PrimitiveDriver_1_0
{

class DllExport QueryWrenchEffort: public JTS::Message
{
public:
	static const int ID = 0x2405;
	
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
		class DllExport QueryWrenchEffortRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getPresenceVector();
			int setPresenceVector(jUnsignedShortInteger value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryWrenchEffortRec &operator=(const QueryWrenchEffortRec &value);
			bool operator==(const QueryWrenchEffortRec &value) const;
			bool operator!=(const QueryWrenchEffortRec &value) const;
			QueryWrenchEffortRec();
			QueryWrenchEffortRec(const QueryWrenchEffortRec &value);
			virtual ~QueryWrenchEffortRec();
		
		protected:
			Body* m_parent;
			jUnsignedShortInteger m_PresenceVector;
		};
	
		QueryWrenchEffortRec* const getQueryWrenchEffortRec();
		int setQueryWrenchEffortRec(const QueryWrenchEffortRec &value);
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
		QueryWrenchEffortRec m_QueryWrenchEffortRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryWrenchEffort &operator=(const QueryWrenchEffort &value);
	bool operator==(const QueryWrenchEffort &value) const;
	bool operator!=(const QueryWrenchEffort &value) const;
	QueryWrenchEffort();
	QueryWrenchEffort(const QueryWrenchEffort &value);
	virtual ~QueryWrenchEffort();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_PRIMITIVEDRIVER_1_0_QUERYWRENCHEFFORT_H
