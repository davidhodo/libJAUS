#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORCOMPRESSEDDATA_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORCOMPRESSEDDATA_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

class DllExport ReportRangeSensorCompressedData: public JTS::Message
{
public:
	static const int ID = 0x4804;
	
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
		class DllExport RangeSensorCompressedDataList
		{
		public:
			class DllExport RangeSensorCompressedDataVariant
			{
			public:
				class DllExport RangeSensorDataErrorRec
				{
				public:
					void setParent(RangeSensorCompressedDataVariant* parent);
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
					RangeSensorCompressedDataVariant* m_parent;
					jUnsignedShortInteger m_SensorID;
					jUnsignedByte m_DataErrorCode;
					jVariableLengthString m_ErrorMessage;
				};
				class DllExport RangeSensorCompressedDataRec
				{
				public:
					class DllExport TimeStamp
					{
					public:
						void setParent(RangeSensorCompressedDataRec* parent);
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
						RangeSensorCompressedDataRec* m_parent;
						jUnsignedInteger m_SubFields;
					};
					class DllExport CompressedData
					{
					public:
						void setParent(RangeSensorCompressedDataRec* parent);
						void setParentPresenceVector();
						const jUnsignedInteger getLength() const;
						const unsigned char *getData() const;
						int set(const jUnsignedInteger &length, const unsigned char *data);
						const unsigned int getSize();
						virtual void encode(unsigned char *bytes);
						virtual void decode(const unsigned char *bytes);
						CompressedData &operator=(const CompressedData &value);
						bool operator==(const CompressedData &value) const;
						bool operator!=(const CompressedData &value) const;
						CompressedData();
						CompressedData(const CompressedData &value);
						virtual ~CompressedData();
					
					protected:
						RangeSensorCompressedDataRec* m_parent;
						jUnsignedInteger m_Length;
						unsigned char *m_Data;
					};
				
					void setParent(RangeSensorCompressedDataVariant* parent);
					void setParentPresenceVector();
					jUnsignedShortInteger getSensorID();
					int setSensorID(jUnsignedShortInteger value);
					jUnsignedByte getReportCoordinateSystem();
					int setReportCoordinateSystem(jUnsignedByte value);
					TimeStamp* const getTimeStamp();
					int setTimeStamp(const TimeStamp &value);
					jUnsignedByte getDataCompression();
					int setDataCompression(jUnsignedByte value);
					CompressedData* const getCompressedData();
					int setCompressedData(const CompressedData &value);
					const unsigned int getSize();
					virtual void encode(unsigned char *bytes);
					virtual void decode(const unsigned char *bytes);
					RangeSensorCompressedDataRec &operator=(const RangeSensorCompressedDataRec &value);
					bool operator==(const RangeSensorCompressedDataRec &value) const;
					bool operator!=(const RangeSensorCompressedDataRec &value) const;
					RangeSensorCompressedDataRec();
					RangeSensorCompressedDataRec(const RangeSensorCompressedDataRec &value);
					virtual ~RangeSensorCompressedDataRec();
				
				protected:
					RangeSensorCompressedDataVariant* m_parent;
					jUnsignedShortInteger m_SensorID;
					jUnsignedByte m_ReportCoordinateSystem;
					TimeStamp m_TimeStamp;
					jUnsignedByte m_DataCompression;
					CompressedData m_CompressedData;
				};
			
				void setParent(RangeSensorCompressedDataList* parent);
				void setParentPresenceVector();
				RangeSensorDataErrorRec* const getRangeSensorDataErrorRec();
				int setRangeSensorDataErrorRec(const RangeSensorDataErrorRec &value);
				RangeSensorCompressedDataRec* const getRangeSensorCompressedDataRec();
				int setRangeSensorCompressedDataRec(const RangeSensorCompressedDataRec &value);
				jUnsignedByte getFieldValue() const;
				int setFieldValue(jUnsignedByte fieldValue);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				RangeSensorCompressedDataVariant &operator=(const RangeSensorCompressedDataVariant &value);
				bool operator==(const RangeSensorCompressedDataVariant &value) const;
				bool operator!=(const RangeSensorCompressedDataVariant &value) const;
				RangeSensorCompressedDataVariant();
				RangeSensorCompressedDataVariant(const RangeSensorCompressedDataVariant &value);
				virtual ~RangeSensorCompressedDataVariant();
			
			protected:
				RangeSensorCompressedDataList* m_parent;
				jUnsignedByte m_FieldValue;
				RangeSensorDataErrorRec m_RangeSensorDataErrorRec;
				RangeSensorCompressedDataRec m_RangeSensorCompressedDataRec;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			RangeSensorCompressedDataVariant* const getElement(unsigned int index);
			int setElement(unsigned int index, const RangeSensorCompressedDataVariant &value);
			int addElement(const RangeSensorCompressedDataVariant &value);
			int deleteElement(unsigned int index);
			int deleteLastElement();
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			RangeSensorCompressedDataList &operator=(const RangeSensorCompressedDataList &value);
			bool operator==(const RangeSensorCompressedDataList &value) const;
			bool operator!=(const RangeSensorCompressedDataList &value) const;
			RangeSensorCompressedDataList();
			RangeSensorCompressedDataList(const RangeSensorCompressedDataList &value);
			virtual ~RangeSensorCompressedDataList();
		
		protected:
			Body* m_parent;
			std::vector<RangeSensorCompressedDataVariant> m_RangeSensorCompressedDataVariant;
		};
	
		RangeSensorCompressedDataList* const getRangeSensorCompressedDataList();
		int setRangeSensorCompressedDataList(const RangeSensorCompressedDataList &value);
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
		RangeSensorCompressedDataList m_RangeSensorCompressedDataList;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportRangeSensorCompressedData &operator=(const ReportRangeSensorCompressedData &value);
	bool operator==(const ReportRangeSensorCompressedData &value) const;
	bool operator!=(const ReportRangeSensorCompressedData &value) const;
	ReportRangeSensorCompressedData();
	ReportRangeSensorCompressedData(const ReportRangeSensorCompressedData &value);
	virtual ~ReportRangeSensorCompressedData();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORCOMPRESSEDDATA_H
