#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORCAPABILITIES_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORCAPABILITIES_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

class DllExport QueryRangeSensorCapabilities: public JTS::Message
{
public:
	static const int ID = 0x2801;
	
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
		class DllExport RangeSensorCapabilitiesList
		{
		public:
			class DllExport QueryRangeSensorCapabilitiesRec
			{
			public:
				void setParent(RangeSensorCapabilitiesList* parent);
				void setParentPresenceVector();
				jUnsignedShortInteger getSensorID();
				int setSensorID(jUnsignedShortInteger value);
				jUnsignedShortInteger getQueryPresenceVector();
				int setQueryPresenceVector(jUnsignedShortInteger value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				QueryRangeSensorCapabilitiesRec &operator=(const QueryRangeSensorCapabilitiesRec &value);
				bool operator==(const QueryRangeSensorCapabilitiesRec &value) const;
				bool operator!=(const QueryRangeSensorCapabilitiesRec &value) const;
				QueryRangeSensorCapabilitiesRec();
				QueryRangeSensorCapabilitiesRec(const QueryRangeSensorCapabilitiesRec &value);
				virtual ~QueryRangeSensorCapabilitiesRec();
			
			protected:
				RangeSensorCapabilitiesList* m_parent;
				jUnsignedShortInteger m_SensorID;
				jUnsignedShortInteger m_QueryPresenceVector;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			QueryRangeSensorCapabilitiesRec* const getElement(unsigned int index);
			int setElement(unsigned int index, const QueryRangeSensorCapabilitiesRec &value);
			int addElement(const QueryRangeSensorCapabilitiesRec &value);
			int deleteElement(unsigned int index);
			int deleteLastElement();
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			RangeSensorCapabilitiesList &operator=(const RangeSensorCapabilitiesList &value);
			bool operator==(const RangeSensorCapabilitiesList &value) const;
			bool operator!=(const RangeSensorCapabilitiesList &value) const;
			RangeSensorCapabilitiesList();
			RangeSensorCapabilitiesList(const RangeSensorCapabilitiesList &value);
			virtual ~RangeSensorCapabilitiesList();
		
		protected:
			Body* m_parent;
			std::vector<QueryRangeSensorCapabilitiesRec> m_QueryRangeSensorCapabilitiesRec;
		};
	
		RangeSensorCapabilitiesList* const getRangeSensorCapabilitiesList();
		int setRangeSensorCapabilitiesList(const RangeSensorCapabilitiesList &value);
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
		RangeSensorCapabilitiesList m_RangeSensorCapabilitiesList;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryRangeSensorCapabilities &operator=(const QueryRangeSensorCapabilities &value);
	bool operator==(const QueryRangeSensorCapabilities &value) const;
	bool operator!=(const QueryRangeSensorCapabilities &value) const;
	QueryRangeSensorCapabilities();
	QueryRangeSensorCapabilities(const QueryRangeSensorCapabilities &value);
	virtual ~QueryRangeSensorCapabilities();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_QUERYRANGESENSORCAPABILITIES_H
