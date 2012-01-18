#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORCONFIGURATION_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORCONFIGURATION_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

class DllExport QueryRangeSensorConfiguration: public JTS::Message
{
public:
	static const int ID = 0x2802;
	
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
		class DllExport RangeSensorConfigurationList
		{
		public:
			class DllExport QueryRangeSensorConfigurationRec
			{
			public:
				void setParent(RangeSensorConfigurationList* parent);
				void setParentPresenceVector();
				jUnsignedShortInteger getSensorID();
				int setSensorID(jUnsignedShortInteger value);
				jUnsignedShortInteger getQueryPresenceVector();
				int setQueryPresenceVector(jUnsignedShortInteger value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				QueryRangeSensorConfigurationRec &operator=(const QueryRangeSensorConfigurationRec &value);
				bool operator==(const QueryRangeSensorConfigurationRec &value) const;
				bool operator!=(const QueryRangeSensorConfigurationRec &value) const;
				QueryRangeSensorConfigurationRec();
				QueryRangeSensorConfigurationRec(const QueryRangeSensorConfigurationRec &value);
				virtual ~QueryRangeSensorConfigurationRec();
			
			protected:
				RangeSensorConfigurationList* m_parent;
				jUnsignedShortInteger m_SensorID;
				jUnsignedShortInteger m_QueryPresenceVector;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			QueryRangeSensorConfigurationRec* const getElement(unsigned int index);
			int setElement(unsigned int index, const QueryRangeSensorConfigurationRec &value);
			int addElement(const QueryRangeSensorConfigurationRec &value);
			int deleteElement(unsigned int index);
			int deleteLastElement();
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			RangeSensorConfigurationList &operator=(const RangeSensorConfigurationList &value);
			bool operator==(const RangeSensorConfigurationList &value) const;
			bool operator!=(const RangeSensorConfigurationList &value) const;
			RangeSensorConfigurationList();
			RangeSensorConfigurationList(const RangeSensorConfigurationList &value);
			virtual ~RangeSensorConfigurationList();
		
		protected:
			Body* m_parent;
			std::vector<QueryRangeSensorConfigurationRec> m_QueryRangeSensorConfigurationRec;
		};
	
		RangeSensorConfigurationList* const getRangeSensorConfigurationList();
		int setRangeSensorConfigurationList(const RangeSensorConfigurationList &value);
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
		RangeSensorConfigurationList m_RangeSensorConfigurationList;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryRangeSensorConfiguration &operator=(const QueryRangeSensorConfiguration &value);
	bool operator==(const QueryRangeSensorConfiguration &value) const;
	bool operator!=(const QueryRangeSensorConfiguration &value) const;
	QueryRangeSensorConfiguration();
	QueryRangeSensorConfiguration(const QueryRangeSensorConfiguration &value);
	virtual ~QueryRangeSensorConfiguration();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORCONFIGURATION_H
