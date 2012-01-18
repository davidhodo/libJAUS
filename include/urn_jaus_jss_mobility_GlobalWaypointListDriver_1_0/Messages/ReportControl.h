#ifndef URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_REPORTCONTROL_H
#define URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_REPORTCONTROL_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0
{

class DllExport ReportControl: public JTS::Message
{
public:
	static const int ID = 0x400d;
	
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
		class DllExport ReportControlRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getSubsystemID();
			int setSubsystemID(jUnsignedShortInteger value);
			jUnsignedByte getNodeID();
			int setNodeID(jUnsignedByte value);
			jUnsignedByte getComponentID();
			int setComponentID(jUnsignedByte value);
			jUnsignedByte getAuthorityCode();
			int setAuthorityCode(jUnsignedByte value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			ReportControlRec &operator=(const ReportControlRec &value);
			bool operator==(const ReportControlRec &value) const;
			bool operator!=(const ReportControlRec &value) const;
			ReportControlRec();
			ReportControlRec(const ReportControlRec &value);
			virtual ~ReportControlRec();
		
		protected:
			Body* m_parent;
			jUnsignedShortInteger m_SubsystemID;
			jUnsignedByte m_NodeID;
			jUnsignedByte m_ComponentID;
			jUnsignedByte m_AuthorityCode;
		};
	
		ReportControlRec* const getReportControlRec();
		int setReportControlRec(const ReportControlRec &value);
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
		ReportControlRec m_ReportControlRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportControl &operator=(const ReportControl &value);
	bool operator==(const ReportControl &value) const;
	bool operator!=(const ReportControl &value) const;
	ReportControl();
	ReportControl(const ReportControl &value);
	virtual ~ReportControl();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_REPORTCONTROL_H