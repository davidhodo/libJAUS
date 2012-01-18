#ifndef URN_JAUS_JSS_MOBILITY_LOCALVECTORDRIVER_1_0_QUERYLOCALVECTOR_H
#define URN_JAUS_JSS_MOBILITY_LOCALVECTORDRIVER_1_0_QUERYLOCALVECTOR_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_LocalVectorDriver_1_0
{

class DllExport QueryLocalVector: public JTS::Message
{
public:
	static const int ID = 0x2408;
	
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
		class DllExport QueryLocalVectorRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getPresenceVector();
			int setPresenceVector(jUnsignedByte value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryLocalVectorRec &operator=(const QueryLocalVectorRec &value);
			bool operator==(const QueryLocalVectorRec &value) const;
			bool operator!=(const QueryLocalVectorRec &value) const;
			QueryLocalVectorRec();
			QueryLocalVectorRec(const QueryLocalVectorRec &value);
			virtual ~QueryLocalVectorRec();
		
		protected:
			Body* m_parent;
			jUnsignedByte m_PresenceVector;
		};
	
		QueryLocalVectorRec* const getQueryLocalVectorRec();
		int setQueryLocalVectorRec(const QueryLocalVectorRec &value);
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
		QueryLocalVectorRec m_QueryLocalVectorRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryLocalVector &operator=(const QueryLocalVector &value);
	bool operator==(const QueryLocalVector &value) const;
	bool operator!=(const QueryLocalVector &value) const;
	QueryLocalVector();
	QueryLocalVector(const QueryLocalVector &value);
	virtual ~QueryLocalVector();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_LOCALVECTORDRIVER_1_0_QUERYLOCALVECTOR_H
