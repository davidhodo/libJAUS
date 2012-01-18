#ifndef URN_JAUS_JSS_MOBILITY_ACCELERATIONSTATESENSOR_0_6_REPORTACCELERATIONSTATE_H
#define URN_JAUS_JSS_MOBILITY_ACCELERATIONSTATESENSOR_0_6_REPORTACCELERATIONSTATE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_AccelerationStateSensor_0_6
{

class DllExport ReportAccelerationState: public JTS::Message
{
public:
	static const int ID = 0x4417;
	
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
		class DllExport ReportAccelerationStateRec
		{
		public:
			class DllExport TimeStamp
			{
			public:
				void setParent(ReportAccelerationStateRec* parent);
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
				ReportAccelerationStateRec* m_parent;
				jUnsignedInteger m_SubFields;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			double getAcceleration_X();
			int setAcceleration_X(double value);
			double getAcceleration_Y();
			int setAcceleration_Y(double value);
			double getAcceleration_Z();
			int setAcceleration_Z(double value);
			bool isAcceleration_RMSValid() const;
			double getAcceleration_RMS();
			int setAcceleration_RMS(double value);
			double getRollAcceleration();
			int setRollAcceleration(double value);
			double getPitchAcceleration();
			int setPitchAcceleration(double value);
			double getYawAcceleration();
			int setYawAcceleration(double value);
			bool isRotationalAcceleration_RMSValid() const;
			double getRotationalAcceleration_RMS();
			int setRotationalAcceleration_RMS(double value);
			bool isTimeStampValid() const;
			TimeStamp* const getTimeStamp();
			int setTimeStamp(const TimeStamp &value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			ReportAccelerationStateRec &operator=(const ReportAccelerationStateRec &value);
			bool operator==(const ReportAccelerationStateRec &value) const;
			bool operator!=(const ReportAccelerationStateRec &value) const;
			ReportAccelerationStateRec();
			ReportAccelerationStateRec(const ReportAccelerationStateRec &value);
			virtual ~ReportAccelerationStateRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedByte m_PresenceVector;
			jUnsignedInteger m_Acceleration_X;
			jUnsignedInteger m_Acceleration_Y;
			jUnsignedInteger m_Acceleration_Z;
			jUnsignedInteger m_Acceleration_RMS;
			jUnsignedInteger m_RollAcceleration;
			jUnsignedInteger m_PitchAcceleration;
			jUnsignedInteger m_YawAcceleration;
			jUnsignedShortInteger m_RotationalAcceleration_RMS;
			TimeStamp m_TimeStamp;
		};
	
		ReportAccelerationStateRec* const getReportAccelerationStateRec();
		int setReportAccelerationStateRec(const ReportAccelerationStateRec &value);
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
		ReportAccelerationStateRec m_ReportAccelerationStateRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportAccelerationState &operator=(const ReportAccelerationState &value);
	bool operator==(const ReportAccelerationState &value) const;
	bool operator!=(const ReportAccelerationState &value) const;
	ReportAccelerationState();
	ReportAccelerationState(const ReportAccelerationState &value);
	virtual ~ReportAccelerationState();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_ACCELERATIONSTATESENSOR_0_6_REPORTACCELERATIONSTATE_H
