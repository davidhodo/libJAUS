#ifndef URN_JAUS_JSS_MOBILITY_GLOBALPOSESENSOR_1_0_QUERYGLOBALPOSE_H
#define URN_JAUS_JSS_MOBILITY_GLOBALPOSESENSOR_1_0_QUERYGLOBALPOSE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_GlobalPoseSensor_1_0
{

class DllExport QueryGlobalPose: public JTS::Message
{
public:
	static const int ID = 0x2402;
	
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
		class DllExport QueryGlobalPoseRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getPresenceVector();
			int setPresenceVector(jUnsignedShortInteger value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryGlobalPoseRec &operator=(const QueryGlobalPoseRec &value);
			bool operator==(const QueryGlobalPoseRec &value) const;
			bool operator!=(const QueryGlobalPoseRec &value) const;
			QueryGlobalPoseRec();
			QueryGlobalPoseRec(const QueryGlobalPoseRec &value);
			virtual ~QueryGlobalPoseRec();
		
		protected:
			Body* m_parent;
			jUnsignedShortInteger m_PresenceVector;
		};
	
		QueryGlobalPoseRec* const getQueryGlobalPoseRec();
		int setQueryGlobalPoseRec(const QueryGlobalPoseRec &value);
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
		QueryGlobalPoseRec m_QueryGlobalPoseRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryGlobalPose &operator=(const QueryGlobalPose &value);
	bool operator==(const QueryGlobalPose &value) const;
	bool operator!=(const QueryGlobalPose &value) const;
	QueryGlobalPose();
	QueryGlobalPose(const QueryGlobalPose &value);
	virtual ~QueryGlobalPose();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_GLOBALPOSESENSOR_1_0_QUERYGLOBALPOSE_H
