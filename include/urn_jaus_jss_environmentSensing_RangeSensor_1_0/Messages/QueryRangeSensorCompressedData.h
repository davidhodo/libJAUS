#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORCOMPRESSEDDATA_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORCOMPRESSEDDATA_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

class DllExport QueryRangeSensorCompressedData: public JTS::Message
{
public:
	static const int ID = 0x2804;
	
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
		class DllExport QueryRangeSensorCompressedDataList
		{
		public:
			class DllExport QueryRangeSensorCompressedDataRec
			{
			public:
				void setParent(QueryRangeSensorCompressedDataList* parent);
				void setParentPresenceVector();
				jUnsignedShortInteger getSensorID();
				int setSensorID(jUnsignedShortInteger value);
				jUnsignedByte getReportCoordinateSystem();
				int setReportCoordinateSystem(jUnsignedByte value);
				jUnsignedByte getDataCompression();
				int setDataCompression(jUnsignedByte value);
				jUnsignedShortInteger getQueryPresenceVector();
				int setQueryPresenceVector(jUnsignedShortInteger value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				QueryRangeSensorCompressedDataRec &operator=(const QueryRangeSensorCompressedDataRec &value);
				bool operator==(const QueryRangeSensorCompressedDataRec &value) const;
				bool operator!=(const QueryRangeSensorCompressedDataRec &value) const;
				QueryRangeSensorCompressedDataRec();
				QueryRangeSensorCompressedDataRec(const QueryRangeSensorCompressedDataRec &value);
				virtual ~QueryRangeSensorCompressedDataRec();
			
			protected:
				QueryRangeSensorCompressedDataList* m_parent;
				jUnsignedShortInteger m_SensorID;
				jUnsignedByte m_ReportCoordinateSystem;
				jUnsignedByte m_DataCompression;
				jUnsignedShortInteger m_QueryPresenceVector;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			QueryRangeSensorCompressedDataRec* const getElement(unsigned int index);
			int setElement(unsigned int index, const QueryRangeSensorCompressedDataRec &value);
			int addElement(const QueryRangeSensorCompressedDataRec &value);
			int deleteElement(unsigned int index);
			int deleteLastElement();
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryRangeSensorCompressedDataList &operator=(const QueryRangeSensorCompressedDataList &value);
			bool operator==(const QueryRangeSensorCompressedDataList &value) const;
			bool operator!=(const QueryRangeSensorCompressedDataList &value) const;
			QueryRangeSensorCompressedDataList();
			QueryRangeSensorCompressedDataList(const QueryRangeSensorCompressedDataList &value);
			virtual ~QueryRangeSensorCompressedDataList();
		
		protected:
			Body* m_parent;
			std::vector<QueryRangeSensorCompressedDataRec> m_QueryRangeSensorCompressedDataRec;
		};
	
		QueryRangeSensorCompressedDataList* const getQueryRangeSensorCompressedDataList();
		int setQueryRangeSensorCompressedDataList(const QueryRangeSensorCompressedDataList &value);
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
		QueryRangeSensorCompressedDataList m_QueryRangeSensorCompressedDataList;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryRangeSensorCompressedData &operator=(const QueryRangeSensorCompressedData &value);
	bool operator==(const QueryRangeSensorCompressedData &value) const;
	bool operator!=(const QueryRangeSensorCompressedData &value) const;
	QueryRangeSensorCompressedData();
	QueryRangeSensorCompressedData(const QueryRangeSensorCompressedData &value);
	virtual ~QueryRangeSensorCompressedData();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORCOMPRESSEDDATA_H
