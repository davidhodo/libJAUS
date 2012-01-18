#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_REPORTDIGITALVIDEOSENSORCONFIGURATION_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_REPORTDIGITALVIDEOSENSORCONFIGURATION_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

class DllExport ReportDigitalVideoSensorConfiguration: public JTS::Message
{
public:
	static const int ID = 0x4809;
	
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
		class DllExport DigitalVideoSensorConfigurationList
		{
		public:
			class DllExport DigitalVideoSensorConfigurationRec
			{
			public:
				void setParent(DigitalVideoSensorConfigurationList* parent);
				void setParentPresenceVector();
				jUnsignedByte getPresenceVector();
				bool checkPresenceVector(unsigned int index) const;
				jUnsignedShortInteger getSensorID();
				int setSensorID(jUnsignedShortInteger value);
				bool isMinimumBitRateValid() const;
				jUnsignedShortInteger getMinimumBitRate();
				int setMinimumBitRate(jUnsignedShortInteger value);
				bool isMaximumBitRateValid() const;
				jUnsignedShortInteger getMaximumBitRate();
				int setMaximumBitRate(jUnsignedShortInteger value);
				bool isFrameRateValid() const;
				jUnsignedByte getFrameRate();
				int setFrameRate(jUnsignedByte value);
				bool isFrameSizeValid() const;
				jUnsignedByte getFrameSize();
				int setFrameSize(jUnsignedByte value);
				bool isDigitalFormatValid() const;
				jUnsignedByte getDigitalFormat();
				int setDigitalFormat(jUnsignedByte value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				DigitalVideoSensorConfigurationRec &operator=(const DigitalVideoSensorConfigurationRec &value);
				bool operator==(const DigitalVideoSensorConfigurationRec &value) const;
				bool operator!=(const DigitalVideoSensorConfigurationRec &value) const;
				DigitalVideoSensorConfigurationRec();
				DigitalVideoSensorConfigurationRec(const DigitalVideoSensorConfigurationRec &value);
				virtual ~DigitalVideoSensorConfigurationRec();
			
			protected:
				int setPresenceVector(unsigned int index);
			
				DigitalVideoSensorConfigurationList* m_parent;
				jUnsignedByte m_PresenceVector;
				jUnsignedShortInteger m_SensorID;
				jUnsignedShortInteger m_MinimumBitRate;
				jUnsignedShortInteger m_MaximumBitRate;
				jUnsignedByte m_FrameRate;
				jUnsignedByte m_FrameSize;
				jUnsignedByte m_DigitalFormat;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			DigitalVideoSensorConfigurationRec* const getElement(unsigned int index);
			int setElement(unsigned int index, const DigitalVideoSensorConfigurationRec &value);
			int addElement(const DigitalVideoSensorConfigurationRec &value);
			int deleteElement(unsigned int index);
			int deleteLastElement();
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			DigitalVideoSensorConfigurationList &operator=(const DigitalVideoSensorConfigurationList &value);
			bool operator==(const DigitalVideoSensorConfigurationList &value) const;
			bool operator!=(const DigitalVideoSensorConfigurationList &value) const;
			DigitalVideoSensorConfigurationList();
			DigitalVideoSensorConfigurationList(const DigitalVideoSensorConfigurationList &value);
			virtual ~DigitalVideoSensorConfigurationList();
		
		protected:
			Body* m_parent;
			std::vector<DigitalVideoSensorConfigurationRec> m_DigitalVideoSensorConfigurationRec;
		};
	
		DigitalVideoSensorConfigurationList* const getDigitalVideoSensorConfigurationList();
		int setDigitalVideoSensorConfigurationList(const DigitalVideoSensorConfigurationList &value);
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
		DigitalVideoSensorConfigurationList m_DigitalVideoSensorConfigurationList;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportDigitalVideoSensorConfiguration &operator=(const ReportDigitalVideoSensorConfiguration &value);
	bool operator==(const ReportDigitalVideoSensorConfiguration &value) const;
	bool operator!=(const ReportDigitalVideoSensorConfiguration &value) const;
	ReportDigitalVideoSensorConfiguration();
	ReportDigitalVideoSensorConfiguration(const ReportDigitalVideoSensorConfiguration &value);
	virtual ~ReportDigitalVideoSensorConfiguration();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_REPORTDIGITALVIDEOSENSORCONFIGURATION_H
