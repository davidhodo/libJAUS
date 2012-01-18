#ifndef URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_REPORTGLOBALWAYPOINT_H
#define URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_REPORTGLOBALWAYPOINT_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0
{

class DllExport ReportGlobalWaypoint: public JTS::Message
{
public:
	static const int ID = 0x440c;
	
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
		class DllExport GlobalWaypointRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			double getLatitude();
			int setLatitude(double value);
			double getLongitude();
			int setLongitude(double value);
			bool isAltitudeValid() const;
			double getAltitude();
			int setAltitude(double value);
			bool isRollValid() const;
			double getRoll();
			int setRoll(double value);
			bool isPitchValid() const;
			double getPitch();
			int setPitch(double value);
			bool isYawValid() const;
			double getYaw();
			int setYaw(double value);
			bool isWaypointToleranceValid() const;
			double getWaypointTolerance();
			int setWaypointTolerance(double value);
			bool isPathToleranceValid() const;
			double getPathTolerance();
			int setPathTolerance(double value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			GlobalWaypointRec &operator=(const GlobalWaypointRec &value);
			bool operator==(const GlobalWaypointRec &value) const;
			bool operator!=(const GlobalWaypointRec &value) const;
			GlobalWaypointRec();
			GlobalWaypointRec(const GlobalWaypointRec &value);
			virtual ~GlobalWaypointRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedByte m_PresenceVector;
			jUnsignedInteger m_Latitude;
			jUnsignedInteger m_Longitude;
			jUnsignedInteger m_Altitude;
			jUnsignedShortInteger m_Roll;
			jUnsignedShortInteger m_Pitch;
			jUnsignedShortInteger m_Yaw;
			jUnsignedShortInteger m_WaypointTolerance;
			jUnsignedInteger m_PathTolerance;
		};
	
		GlobalWaypointRec* const getGlobalWaypointRec();
		int setGlobalWaypointRec(const GlobalWaypointRec &value);
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
		GlobalWaypointRec m_GlobalWaypointRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportGlobalWaypoint &operator=(const ReportGlobalWaypoint &value);
	bool operator==(const ReportGlobalWaypoint &value) const;
	bool operator!=(const ReportGlobalWaypoint &value) const;
	ReportGlobalWaypoint();
	ReportGlobalWaypoint(const ReportGlobalWaypoint &value);
	virtual ~ReportGlobalWaypoint();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_GLOBALWAYPOINTLISTDRIVER_1_0_REPORTGLOBALWAYPOINT_H
