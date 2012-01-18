#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORCONFIGURATION_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORCONFIGURATION_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

class DllExport ReportRangeSensorConfiguration: public JTS::Message
{
public:
	static const int ID = 0x4802;
	
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
			class DllExport RangeSensorConfigurationRec
			{
			public:
				void setParent(RangeSensorConfigurationList* parent);
				void setParentPresenceVector();
				jUnsignedShortInteger getPresenceVector();
				bool checkPresenceVector(unsigned int index) const;
				jUnsignedShortInteger getSensorID();
				int setSensorID(jUnsignedShortInteger value);
				bool isHorizontalFieldOfViewStartAngleValid() const;
				double getHorizontalFieldOfViewStartAngle();
				int setHorizontalFieldOfViewStartAngle(double value);
				bool isHorizontalFieldOfViewStopAngleValid() const;
				double getHorizontalFieldOfViewStopAngle();
				int setHorizontalFieldOfViewStopAngle(double value);
				bool isVerticalFieldOfViewStartAngleValid() const;
				double getVerticalFieldOfViewStartAngle();
				int setVerticalFieldOfViewStartAngle(double value);
				bool isVerticalFieldOfViewStopAngleValid() const;
				double getVerticalFieldOfViewStopAngle();
				int setVerticalFieldOfViewStopAngle(double value);
				bool isUpdateRateValid() const;
				double getUpdateRate();
				int setUpdateRate(double value);
				bool isMinimumRangeValid() const;
				double getMinimumRange();
				int setMinimumRange(double value);
				bool isMaximumRangeValid() const;
				double getMaximumRange();
				int setMaximumRange(double value);
				bool isSensorStateValid() const;
				jUnsignedByte getSensorState();
				int setSensorState(jUnsignedByte value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				RangeSensorConfigurationRec &operator=(const RangeSensorConfigurationRec &value);
				bool operator==(const RangeSensorConfigurationRec &value) const;
				bool operator!=(const RangeSensorConfigurationRec &value) const;
				RangeSensorConfigurationRec();
				RangeSensorConfigurationRec(const RangeSensorConfigurationRec &value);
				virtual ~RangeSensorConfigurationRec();
			
			protected:
				int setPresenceVector(unsigned int index);
			
				RangeSensorConfigurationList* m_parent;
				jUnsignedShortInteger m_PresenceVector;
				jUnsignedShortInteger m_SensorID;
				jUnsignedInteger m_HorizontalFieldOfViewStartAngle;
				jUnsignedInteger m_HorizontalFieldOfViewStopAngle;
				jUnsignedInteger m_VerticalFieldOfViewStartAngle;
				jUnsignedInteger m_VerticalFieldOfViewStopAngle;
				jUnsignedShortInteger m_UpdateRate;
				jUnsignedInteger m_MinimumRange;
				jUnsignedInteger m_MaximumRange;
				jUnsignedByte m_SensorState;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			RangeSensorConfigurationRec* const getElement(unsigned int index);
			int setElement(unsigned int index, const RangeSensorConfigurationRec &value);
			int addElement(const RangeSensorConfigurationRec &value);
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
			std::vector<RangeSensorConfigurationRec> m_RangeSensorConfigurationRec;
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
	ReportRangeSensorConfiguration &operator=(const ReportRangeSensorConfiguration &value);
	bool operator==(const ReportRangeSensorConfiguration &value) const;
	bool operator!=(const ReportRangeSensorConfiguration &value) const;
	ReportRangeSensorConfiguration();
	ReportRangeSensorConfiguration(const ReportRangeSensorConfiguration &value);
	virtual ~ReportRangeSensorConfiguration();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORCONFIGURATION_H
