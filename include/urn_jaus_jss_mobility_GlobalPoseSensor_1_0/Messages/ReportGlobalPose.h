#ifndef URN_JAUS_JSS_MOBILITY_GLOBALPOSESENSOR_1_0_REPORTGLOBALPOSE_H
#define URN_JAUS_JSS_MOBILITY_GLOBALPOSESENSOR_1_0_REPORTGLOBALPOSE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_GlobalPoseSensor_1_0
{

class DllExport ReportGlobalPose: public JTS::Message
{
public:
	static const int ID = 0x4402;
	
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
		class DllExport GlobalPoseRec
		{
		public:
			class DllExport TimeStamp
			{
			public:
				void setParent(GlobalPoseRec* parent);
				void setParentPresenceVector();
				jUnsignedInteger getSeconds();
				int setSeconds(jUnsignedInteger value);
				jUnsignedInteger getMinutes();
				int setMinutes(jUnsignedInteger value);
				jUnsignedInteger getHour();
				int setHour(jUnsignedInteger value);
				jUnsignedInteger getDay();
				int setDay(jUnsignedInteger value);
				jUnsignedInteger getMilliseconds();
				int setMilliseconds(jUnsignedInteger value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				TimeStamp &operator=(const TimeStamp &value);
				bool operator==(const TimeStamp &value) const;
				bool operator!=(const TimeStamp &value) const;
				TimeStamp();
				TimeStamp(const TimeStamp &value);
				virtual ~TimeStamp();
			
			protected:
				GlobalPoseRec* m_parent;
				jUnsignedInteger m_SubFields;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			bool isLatitudeValid() const;
			double getLatitude();
			int setLatitude(double value);
			bool isLongitudeValid() const;
			double getLongitude();
			int setLongitude(double value);
			bool isAltitudeValid() const;
			double getAltitude();
			int setAltitude(double value);
			bool isPosition_RMSValid() const;
			double getPosition_RMS();
			int setPosition_RMS(double value);
			bool isRollValid() const;
			double getRoll();
			int setRoll(double value);
			bool isPitchValid() const;
			double getPitch();
			int setPitch(double value);
			bool isYawValid() const;
			double getYaw();
			int setYaw(double value);
			bool isAttitude_RMSValid() const;
			double getAttitude_RMS();
			int setAttitude_RMS(double value);
			bool isTimeStampValid() const;
			TimeStamp* const getTimeStamp();
			int setTimeStamp(const TimeStamp &value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			GlobalPoseRec &operator=(const GlobalPoseRec &value);
			bool operator==(const GlobalPoseRec &value) const;
			bool operator!=(const GlobalPoseRec &value) const;
			GlobalPoseRec();
			GlobalPoseRec(const GlobalPoseRec &value);
			virtual ~GlobalPoseRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedShortInteger m_PresenceVector;
			jUnsignedInteger m_Latitude;
			jUnsignedInteger m_Longitude;
			jUnsignedInteger m_Altitude;
			jUnsignedInteger m_Position_RMS;
			jUnsignedShortInteger m_Roll;
			jUnsignedShortInteger m_Pitch;
			jUnsignedShortInteger m_Yaw;
			jUnsignedShortInteger m_Attitude_RMS;
			TimeStamp m_TimeStamp;
		};
	
		GlobalPoseRec* const getGlobalPoseRec();
		int setGlobalPoseRec(const GlobalPoseRec &value);
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
		GlobalPoseRec m_GlobalPoseRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportGlobalPose &operator=(const ReportGlobalPose &value);
	bool operator==(const ReportGlobalPose &value) const;
	bool operator!=(const ReportGlobalPose &value) const;
	ReportGlobalPose();
	ReportGlobalPose(const ReportGlobalPose &value);
	virtual ~ReportGlobalPose();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_GLOBALPOSESENSOR_1_0_REPORTGLOBALPOSE_H
