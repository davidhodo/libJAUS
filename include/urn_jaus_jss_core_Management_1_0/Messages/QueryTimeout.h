#ifndef URN_JAUS_JSS_CORE_MANAGEMENT_1_0_QUERYTIMEOUT_H
#define URN_JAUS_JSS_CORE_MANAGEMENT_1_0_QUERYTIMEOUT_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_core_Management_1_0
{

class DllExport QueryTimeout: public JTS::Message
{
public:
	static const int ID = 0x2003;
	
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

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryTimeout &operator=(const QueryTimeout &value);
	bool operator==(const QueryTimeout &value) const;
	bool operator!=(const QueryTimeout &value) const;
	QueryTimeout();
	QueryTimeout(const QueryTimeout &value);
	virtual ~QueryTimeout();

protected:
	AppHeader m_AppHeader;
};

}

#endif // URN_JAUS_JSS_CORE_MANAGEMENT_1_0_QUERYTIMEOUT_H
