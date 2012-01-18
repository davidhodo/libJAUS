#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORCAPABILITIES_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORCAPABILITIES_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

class DllExport ReportRangeSensorCapabilities: public JTS::Message
{
public:
	static const int ID = 0x4801;
	
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
			class DllExport RangeSensorCapabilitiesRec
			{
			public:
				class DllExport SupportedStates
				{
				public:
					void setParent(RangeSensorCapabilitiesRec* parent);
					void setParentPresenceVector();
					jUnsignedByte getActive();
					int setActive(jUnsignedByte value);
					jUnsignedByte getStandby();
					int setStandby(jUnsignedByte value);
					jUnsignedByte getOff();
					int setOff(jUnsignedByte value);
					const unsigned int getSize();
					virtual void encode(unsigned char *bytes);
					virtual void decode(const unsigned char *bytes);
					SupportedStates &operator=(const SupportedStates &value);
					bool operator==(const SupportedStates &value) const;
					bool operator!=(const SupportedStates &value) const;
					SupportedStates();
					SupportedStates(const SupportedStates &value);
					virtual ~SupportedStates();
				
				protected:
					RangeSensorCapabilitiesRec* m_parent;
					jUnsignedByte m_SubFields;
				};
				class DllExport SupportedCompression
				{
				public:
					void setParent(RangeSensorCapabilitiesRec* parent);
					void setParentPresenceVector();
					jUnsignedByte getNoCompression();
					int setNoCompression(jUnsignedByte value);
					jUnsignedByte getDEFLATE();
					int setDEFLATE(jUnsignedByte value);
					jUnsignedByte getBzip2();
					int setBzip2(jUnsignedByte value);
					jUnsignedByte getLZMA();
					int setLZMA(jUnsignedByte value);
					const unsigned int getSize();
					virtual void encode(unsigned char *bytes);
					virtual void decode(const unsigned char *bytes);
					SupportedCompression &operator=(const SupportedCompression &value);
					bool operator==(const SupportedCompression &value) const;
					bool operator!=(const SupportedCompression &value) const;
					SupportedCompression();
					SupportedCompression(const SupportedCompression &value);
					virtual ~SupportedCompression();
				
				protected:
					RangeSensorCapabilitiesRec* m_parent;
					jUnsignedByte m_SubFields;
				};
			
				void setParent(RangeSensorCapabilitiesList* parent);
				void setParentPresenceVector();
				jUnsignedShortInteger getPresenceVector();
				bool checkPresenceVector(unsigned int index) const;
				jUnsignedShortInteger getSensorID();
				int setSensorID(jUnsignedShortInteger value);
				jVariableLengthString getSensorName();
				int setSensorName(jVariableLengthString value);
				bool isSupportedStatesValid() const;
				SupportedStates* const getSupportedStates();
				int setSupportedStates(const SupportedStates &value);
				bool isMinimumHorizontalFieldOfViewStartAngleValid() const;
				double getMinimumHorizontalFieldOfViewStartAngle();
				int setMinimumHorizontalFieldOfViewStartAngle(double value);
				bool isMaximumHorizontalFieldOfViewStopAngleValid() const;
				double getMaximumHorizontalFieldOfViewStopAngle();
				int setMaximumHorizontalFieldOfViewStopAngle(double value);
				bool isMinimumVerticalFieldOfViewStartAngleValid() const;
				double getMinimumVerticalFieldOfViewStartAngle();
				int setMinimumVerticalFieldOfViewStartAngle(double value);
				bool isMaximumVerticalFieldOfViewStopAngleValid() const;
				double getMaximumVerticalFieldOfViewStopAngle();
				int setMaximumVerticalFieldOfViewStopAngle(double value);
				bool isMiniumumUpdateRateValid() const;
				double getMiniumumUpdateRate();
				int setMiniumumUpdateRate(double value);
				bool isMaximumUpdateRateValid() const;
				double getMaximumUpdateRate();
				int setMaximumUpdateRate(double value);
				bool isMinimumRangeValid() const;
				double getMinimumRange();
				int setMinimumRange(double value);
				bool isMaximumRangeValid() const;
				double getMaximumRange();
				int setMaximumRange(double value);
				bool isSupportedCompressionValid() const;
				SupportedCompression* const getSupportedCompression();
				int setSupportedCompression(const SupportedCompression &value);
				bool isCoordinateTransformationSupportedValid() const;
				jUnsignedByte getCoordinateTransformationSupported();
				int setCoordinateTransformationSupported(jUnsignedByte value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				RangeSensorCapabilitiesRec &operator=(const RangeSensorCapabilitiesRec &value);
				bool operator==(const RangeSensorCapabilitiesRec &value) const;
				bool operator!=(const RangeSensorCapabilitiesRec &value) const;
				RangeSensorCapabilitiesRec();
				RangeSensorCapabilitiesRec(const RangeSensorCapabilitiesRec &value);
				virtual ~RangeSensorCapabilitiesRec();
			
			protected:
				int setPresenceVector(unsigned int index);
			
				RangeSensorCapabilitiesList* m_parent;
				jUnsignedShortInteger m_PresenceVector;
				jUnsignedShortInteger m_SensorID;
				jVariableLengthString m_SensorName;
				SupportedStates m_SupportedStates;
				jUnsignedInteger m_MinimumHorizontalFieldOfViewStartAngle;
				jUnsignedInteger m_MaximumHorizontalFieldOfViewStopAngle;
				jUnsignedInteger m_MinimumVerticalFieldOfViewStartAngle;
				jUnsignedInteger m_MaximumVerticalFieldOfViewStopAngle;
				jUnsignedShortInteger m_MiniumumUpdateRate;
				jUnsignedShortInteger m_MaximumUpdateRate;
				jUnsignedInteger m_MinimumRange;
				jUnsignedInteger m_MaximumRange;
				SupportedCompression m_SupportedCompression;
				jUnsignedByte m_CoordinateTransformationSupported;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			RangeSensorCapabilitiesRec* const getElement(unsigned int index);
			int setElement(unsigned int index, const RangeSensorCapabilitiesRec &value);
			int addElement(const RangeSensorCapabilitiesRec &value);
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
			std::vector<RangeSensorCapabilitiesRec> m_RangeSensorCapabilitiesRec;
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
	ReportRangeSensorCapabilities &operator=(const ReportRangeSensorCapabilities &value);
	bool operator==(const ReportRangeSensorCapabilities &value) const;
	bool operator!=(const ReportRangeSensorCapabilities &value) const;
	ReportRangeSensorCapabilities();
	ReportRangeSensorCapabilities(const ReportRangeSensorCapabilities &value);
	virtual ~ReportRangeSensorCapabilities();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_RANGESENSOR_1_0_REPORTRANGESENSORCAPABILITIES_H
