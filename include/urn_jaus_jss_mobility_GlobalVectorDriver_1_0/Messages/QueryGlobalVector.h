#ifndef URN_JAUS_JSS_MOBILITY_GLOBALVECTORDRIVER_1_0_QUERYGLOBALVECTOR_H
#define URN_JAUS_JSS_MOBILITY_GLOBALVECTORDRIVER_1_0_QUERYGLOBALVECTOR_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_GlobalVectorDriver_1_0
{

class DllExport QueryGlobalVector: public JTS::Message
{
public:
	static const int ID = 0x2407;
	
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
		class DllExport QueryGlobalVectorRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getPresenceVector();
			int setPresenceVector(jUnsignedByte value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryGlobalVectorRec &operator=(const QueryGlobalVectorRec &value);
			bool operator==(const QueryGlobalVectorRec &value) const;
			bool operator!=(const QueryGlobalVectorRec &value) const;
			QueryGlobalVectorRec();
			QueryGlobalVectorRec(const QueryGlobalVectorRec &value);
			virtual ~QueryGlobalVectorRec();
		
		protected:
			Body* m_parent;
			jUnsignedByte m_PresenceVector;
		};
	
		QueryGlobalVectorRec* const getQueryGlobalVectorRec();
		int setQueryGlobalVectorRec(const QueryGlobalVectorRec &value);
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
		QueryGlobalVectorRec m_QueryGlobalVectorRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryGlobalVector &operator=(const QueryGlobalVector &value);
	bool operator==(const QueryGlobalVector &value) const;
	bool operator!=(const QueryGlobalVector &value) const;
	QueryGlobalVector();
	QueryGlobalVector(const QueryGlobalVector &value);
	virtual ~QueryGlobalVector();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_GLOBALVECTORDRIVER_1_0_QUERYGLOBALVECTOR_H
