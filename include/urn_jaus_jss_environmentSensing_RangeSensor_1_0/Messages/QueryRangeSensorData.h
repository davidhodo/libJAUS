#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORDATA_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORDATA_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

class DllExport QueryRangeSensorData: public JTS::Message
{
public:
	static const int ID = 0x2803;
	
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
		class DllExport QueryRangeSensorDataList
		{
		public:
			class DllExport QueryRangeSensorDataRec
			{
			public:
				void setParent(QueryRangeSensorDataList* parent);
				void setParentPresenceVector();
				jUnsignedShortInteger getSensorID();
				int setSensorID(jUnsignedShortInteger value);
				jUnsignedByte getReportCoordinateSystem();
				int setReportCoordinateSystem(jUnsignedByte value);
				jUnsignedShortInteger getQueryPresenceVector();
				int setQueryPresenceVector(jUnsignedShortInteger value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				QueryRangeSensorDataRec &operator=(const QueryRangeSensorDataRec &value);
				bool operator==(const QueryRangeSensorDataRec &value) const;
				bool operator!=(const QueryRangeSensorDataRec &value) const;
				QueryRangeSensorDataRec();
				QueryRangeSensorDataRec(const QueryRangeSensorDataRec &value);
				virtual ~QueryRangeSensorDataRec();
			
			protected:
				QueryRangeSensorDataList* m_parent;
				jUnsignedShortInteger m_SensorID;
				jUnsignedByte m_ReportCoordinateSystem;
				jUnsignedShortInteger m_QueryPresenceVector;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			QueryRangeSensorDataRec* const getElement(unsigned int index);
			int setElement(unsigned int index, const QueryRangeSensorDataRec &value);
			int addElement(const QueryRangeSensorDataRec &value);
			int deleteElement(unsigned int index);
			int deleteLastElement();
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryRangeSensorDataList &operator=(const QueryRangeSensorDataList &value);
			bool operator==(const QueryRangeSensorDataList &value) const;
			bool operator!=(const QueryRangeSensorDataList &value) const;
			QueryRangeSensorDataList();
			QueryRangeSensorDataList(const QueryRangeSensorDataList &value);
			virtual ~QueryRangeSensorDataList();
		
		protected:
			Body* m_parent;
			std::vector<QueryRangeSensorDataRec> m_QueryRangeSensorDataRec;
		};
	
		QueryRangeSensorDataList* const getQueryRangeSensorDataList();
		int setQueryRangeSensorDataList(const QueryRangeSensorDataList &value);
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
		QueryRangeSensorDataList m_QueryRangeSensorDataList;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryRangeSensorData &operator=(const QueryRangeSensorData &value);
	bool operator==(const QueryRangeSensorData &value) const;
	bool operator!=(const QueryRangeSensorData &value) const;
	QueryRangeSensorData();
	QueryRangeSensorData(const QueryRangeSensorData &value);
	virtual ~QueryRangeSensorData();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORDATA_H
