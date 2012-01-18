#ifndef URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_REPORTVELOCITYSTATE_H
#define URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_REPORTVELOCITYSTATE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{

class DllExport ReportVelocityState: public JTS::Message
{
public:
	static const int ID = 0x4404;
	
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
		class DllExport ReportVelocityStateRec
		{
		public:
			class DllExport TimeStamp
			{
			public:
				void setParent(ReportVelocityStateRec* parent);
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
				ReportVelocityStateRec* m_parent;
				jUnsignedInteger m_SubFields;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			bool isVelocity_XValid() const;
			double getVelocity_X();
			int setVelocity_X(double value);
			bool isVelocity_YValid() const;
			double getVelocity_Y();
			int setVelocity_Y(double value);
			bool isVelocity_ZValid() const;
			double getVelocity_Z();
			int setVelocity_Z(double value);
			bool isVelocity_RMSValid() const;
			double getVelocity_RMS();
			int setVelocity_RMS(double value);
			bool isRollRateValid() const;
			double getRollRate();
			int setRollRate(double value);
			bool isPitchRateValid() const;
			double getPitchRate();
			int setPitchRate(double value);
			bool isYawRateValid() const;
			double getYawRate();
			int setYawRate(double value);
			bool isRate_RMSValid() const;
			double getRate_RMS();
			int setRate_RMS(double value);
			bool isTimeStampValid() const;
			TimeStamp* const getTimeStamp();
			int setTimeStamp(const TimeStamp &value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			ReportVelocityStateRec &operator=(const ReportVelocityStateRec &value);
			bool operator==(const ReportVelocityStateRec &value) const;
			bool operator!=(const ReportVelocityStateRec &value) const;
			ReportVelocityStateRec();
			ReportVelocityStateRec(const ReportVelocityStateRec &value);
			virtual ~ReportVelocityStateRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedShortInteger m_PresenceVector;
			jUnsignedInteger m_Velocity_X;
			jUnsignedInteger m_Velocity_Y;
			jUnsignedInteger m_Velocity_Z;
			jUnsignedInteger m_Velocity_RMS;
			jUnsignedShortInteger m_RollRate;
			jUnsignedShortInteger m_PitchRate;
			jUnsignedShortInteger m_YawRate;
			jUnsignedShortInteger m_Rate_RMS;
			TimeStamp m_TimeStamp;
		};
	
		ReportVelocityStateRec* const getReportVelocityStateRec();
		int setReportVelocityStateRec(const ReportVelocityStateRec &value);
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
		ReportVelocityStateRec m_ReportVelocityStateRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportVelocityState &operator=(const ReportVelocityState &value);
	bool operator==(const ReportVelocityState &value) const;
	bool operator!=(const ReportVelocityState &value) const;
	ReportVelocityState();
	ReportVelocityState(const ReportVelocityState &value);
	virtual ~ReportVelocityState();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_REPORTVELOCITYSTATE_H
