#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORDATA_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORDATA_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

class DllExport ReportRangeSensorData: public JTS::Message
{
public:
	static const int ID = 0x4803;
	
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
		class DllExport RangeSensorDataList
		{
		public:
			class DllExport RangeSensorDataVariant
			{
			public:
				class DllExport RangeSensorDataErrorRec
				{
				public:
					void setParent(RangeSensorDataVariant* parent);
					void setParentPresenceVector();
					jUnsignedShortInteger getSensorID();
					int setSensorID(jUnsignedShortInteger value);
					jUnsignedByte getDataErrorCode();
					int setDataErrorCode(jUnsignedByte value);
					jVariableLengthString getErrorMessage();
					int setErrorMessage(jVariableLengthString value);
					const unsigned int getSize();
					virtual void encode(unsigned char *bytes);
					virtual void decode(const unsigned char *bytes);
					RangeSensorDataErrorRec &operator=(const RangeSensorDataErrorRec &value);
					bool operator==(const RangeSensorDataErrorRec &value) const;
					bool operator!=(const RangeSensorDataErrorRec &value) const;
					RangeSensorDataErrorRec();
					RangeSensorDataErrorRec(const RangeSensorDataErrorRec &value);
					virtual ~RangeSensorDataErrorRec();
				
				protected:
					RangeSensorDataVariant* m_parent;
					jUnsignedShortInteger m_SensorID;
					jUnsignedByte m_DataErrorCode;
					jVariableLengthString m_ErrorMessage;
				};
				class DllExport RangeSensorDataSeq
				{
				public:
					class DllExport RangeSensorDataRec
					{
					public:
						class DllExport TimeStamp
						{
						public:
							void setParent(RangeSensorDataRec* parent);
							void setParentPresenceVector();
							jUnsignedInteger getMilliseconds();
							int setMilliseconds(jUnsignedInteger value);
							jUnsignedInteger getSeconds();
							int setSeconds(jUnsignedInteger value);
							jUnsignedInteger getMinutes();
							int setMinutes(jUnsignedInteger value);
							jUnsignedInteger getHour();
							int setHour(jUnsignedInteger value);
							jUnsignedInteger getDay();
							int setDay(jUnsignedInteger value);
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
							RangeSensorDataRec* m_parent;
							jUnsignedInteger m_SubFields;
						};
					
						void setParent(RangeSensorDataSeq* parent);
						void setParentPresenceVector();
						jUnsignedShortInteger getSensorID();
						int setSensorID(jUnsignedShortInteger value);
						jUnsignedByte getReportCoordinateSystem();
						int setReportCoordinateSystem(jUnsignedByte value);
						TimeStamp* const getTimeStamp();
						int setTimeStamp(const TimeStamp &value);
						const unsigned int getSize();
						virtual void encode(unsigned char *bytes);
						virtual void decode(const unsigned char *bytes);
						RangeSensorDataRec &operator=(const RangeSensorDataRec &value);
						bool operator==(const RangeSensorDataRec &value) const;
						bool operator!=(const RangeSensorDataRec &value) const;
						RangeSensorDataRec();
						RangeSensorDataRec(const RangeSensorDataRec &value);
						virtual ~RangeSensorDataRec();
					
					protected:
						RangeSensorDataSeq* m_parent;
						jUnsignedShortInteger m_SensorID;
						jUnsignedByte m_ReportCoordinateSystem;
						TimeStamp m_TimeStamp;
					};
					class DllExport RangeSensorDataPointList
					{
					public:
						class DllExport RangeSensorDataPointRec
						{
						public:
							void setParent(RangeSensorDataPointList* parent);
							void setParentPresenceVector();
							jUnsignedByte getPresenceVector();
							bool checkPresenceVector(unsigned int index) const;
							bool isPointIDValid() const;
							jUnsignedInteger getPointID();
							int setPointID(jUnsignedInteger value);
							double getRange();
							int setRange(double value);
							bool isRangeValidityValid() const;
							jUnsignedByte getRangeValidity();
							int setRangeValidity(jUnsignedByte value);
							bool isRangeErrorRMSValid() const;
							double getRangeErrorRMS();
							int setRangeErrorRMS(double value);
							double getBearing();
							int setBearing(double value);
							bool isBearingValidityValid() const;
							jUnsignedByte getBearingValidity();
							int setBearingValidity(jUnsignedByte value);
							bool isBearingErrorRMSValid() const;
							double getBearingErrorRMS();
							int setBearingErrorRMS(double value);
							double getInclination();
							int setInclination(double value);
							bool isInclinationValidityValid() const;
							jUnsignedByte getInclinationValidity();
							int setInclinationValidity(jUnsignedByte value);
							bool isInclinationErrorRMSValid() const;
							double getInclinationErrorRMS();
							int setInclinationErrorRMS(double value);
							const unsigned int getSize();
							virtual void encode(unsigned char *bytes);
							virtual void decode(const unsigned char *bytes);
							RangeSensorDataPointRec &operator=(const RangeSensorDataPointRec &value);
							bool operator==(const RangeSensorDataPointRec &value) const;
							bool operator!=(const RangeSensorDataPointRec &value) const;
							RangeSensorDataPointRec();
							RangeSensorDataPointRec(const RangeSensorDataPointRec &value);
							virtual ~RangeSensorDataPointRec();
						
						protected:
							int setPresenceVector(unsigned int index);
						
							RangeSensorDataPointList* m_parent;
							jUnsignedByte m_PresenceVector;
							jUnsignedInteger m_PointID;
							jUnsignedInteger m_Range;
							jUnsignedByte m_RangeValidity;
							jUnsignedInteger m_RangeErrorRMS;
							jUnsignedInteger m_Bearing;
							jUnsignedByte m_BearingValidity;
							jUnsignedInteger m_BearingErrorRMS;
							jUnsignedInteger m_Inclination;
							jUnsignedByte m_InclinationValidity;
							jUnsignedInteger m_InclinationErrorRMS;
						};
					
						void setParent(RangeSensorDataSeq* parent);
						void setParentPresenceVector();
						unsigned int getNumberOfElements() const;
						RangeSensorDataPointRec* const getElement(unsigned int index);
						int setElement(unsigned int index, const RangeSensorDataPointRec &value);
						int addElement(const RangeSensorDataPointRec &value);
						int deleteElement(unsigned int index);
						int deleteLastElement();
						const unsigned int getSize();
						virtual void encode(unsigned char *bytes);
						virtual void decode(const unsigned char *bytes);
						RangeSensorDataPointList &operator=(const RangeSensorDataPointList &value);
						bool operator==(const RangeSensorDataPointList &value) const;
						bool operator!=(const RangeSensorDataPointList &value) const;
						RangeSensorDataPointList();
						RangeSensorDataPointList(const RangeSensorDataPointList &value);
						virtual ~RangeSensorDataPointList();
					
					protected:
						RangeSensorDataSeq* m_parent;
						std::vector<RangeSensorDataPointRec> m_RangeSensorDataPointRec;
					};
				
					void setParent(RangeSensorDataVariant* parent);
					void setParentPresenceVector();
					RangeSensorDataRec* const getRangeSensorDataRec();
					int setRangeSensorDataRec(const RangeSensorDataRec &value);
					RangeSensorDataPointList* const getRangeSensorDataPointList();
					int setRangeSensorDataPointList(const RangeSensorDataPointList &value);
					const unsigned int getSize();
					virtual void encode(unsigned char *bytes);
					virtual void decode(const unsigned char *bytes);
					RangeSensorDataSeq &operator=(const RangeSensorDataSeq &value);
					bool operator==(const RangeSensorDataSeq &value) const;
					bool operator!=(const RangeSensorDataSeq &value) const;
					RangeSensorDataSeq();
					RangeSensorDataSeq(const RangeSensorDataSeq &value);
					virtual ~RangeSensorDataSeq();
				
				protected:
					RangeSensorDataVariant* m_parent;
					RangeSensorDataRec m_RangeSensorDataRec;
					RangeSensorDataPointList m_RangeSensorDataPointList;
				};
			
				void setParent(RangeSensorDataList* parent);
				void setParentPresenceVector();
				RangeSensorDataErrorRec* const getRangeSensorDataErrorRec();
				int setRangeSensorDataErrorRec(const RangeSensorDataErrorRec &value);
				RangeSensorDataSeq* const getRangeSensorDataSeq();
				int setRangeSensorDataSeq(const RangeSensorDataSeq &value);
				jUnsignedByte getFieldValue() const;
				int setFieldValue(jUnsignedByte fieldValue);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				RangeSensorDataVariant &operator=(const RangeSensorDataVariant &value);
				bool operator==(const RangeSensorDataVariant &value) const;
				bool operator!=(const RangeSensorDataVariant &value) const;
				RangeSensorDataVariant();
				RangeSensorDataVariant(const RangeSensorDataVariant &value);
				virtual ~RangeSensorDataVariant();
			
			protected:
				RangeSensorDataList* m_parent;
				jUnsignedByte m_FieldValue;
				RangeSensorDataErrorRec m_RangeSensorDataErrorRec;
				RangeSensorDataSeq m_RangeSensorDataSeq;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			RangeSensorDataVariant* const getElement(unsigned int index);
			int setElement(unsigned int index, const RangeSensorDataVariant &value);
			int addElement(const RangeSensorDataVariant &value);
			int deleteElement(unsigned int index);
			int deleteLastElement();
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			RangeSensorDataList &operator=(const RangeSensorDataList &value);
			bool operator==(const RangeSensorDataList &value) const;
			bool operator!=(const RangeSensorDataList &value) const;
			RangeSensorDataList();
			RangeSensorDataList(const RangeSensorDataList &value);
			virtual ~RangeSensorDataList();
		
		protected:
			Body* m_parent;
			std::vector<RangeSensorDataVariant> m_RangeSensorDataVariant;
		};
	
		RangeSensorDataList* const getRangeSensorDataList();
		int setRangeSensorDataList(const RangeSensorDataList &value);
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
		RangeSensorDataList m_RangeSensorDataList;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportRangeSensorData &operator=(const ReportRangeSensorData &value);
	bool operator==(const ReportRangeSensorData &value) const;
	bool operator!=(const ReportRangeSensorData &value) const;
	ReportRangeSensorData();
	ReportRangeSensorData(const ReportRangeSensorData &value);
	virtual ~ReportRangeSensorData();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORDATA_H
