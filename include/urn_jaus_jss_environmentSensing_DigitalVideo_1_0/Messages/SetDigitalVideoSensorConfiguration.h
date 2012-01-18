#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_SETDIGITALVIDEOSENSORCONFIGURATION_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_SETDIGITALVIDEOSENSORCONFIGURATION_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

class DllExport SetDigitalVideoSensorConfiguration: public JTS::Message
{
public:
	static const int ID = 0x0804;
	
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
		class DllExport DigitalVideoSensorConfigurationSequence
		{
		public:
			class DllExport RequestIdRec
			{
			public:
				void setParent(DigitalVideoSensorConfigurationSequence* parent);
				void setParentPresenceVector();
				jUnsignedByte getRequestID();
				int setRequestID(jUnsignedByte value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				RequestIdRec &operator=(const RequestIdRec &value);
				bool operator==(const RequestIdRec &value) const;
				bool operator!=(const RequestIdRec &value) const;
				RequestIdRec();
				RequestIdRec(const RequestIdRec &value);
				virtual ~RequestIdRec();
			
			protected:
				DigitalVideoSensorConfigurationSequence* m_parent;
				jUnsignedByte m_RequestID;
			};
			class DllExport DigitalVideoSensorList
			{
			public:
				class DllExport DigitalVideoSensorConfigurationRec
				{
				public:
					void setParent(DigitalVideoSensorList* parent);
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
				
					DigitalVideoSensorList* m_parent;
					jUnsignedByte m_PresenceVector;
					jUnsignedShortInteger m_SensorID;
					jUnsignedShortInteger m_MinimumBitRate;
					jUnsignedShortInteger m_MaximumBitRate;
					jUnsignedByte m_FrameRate;
					jUnsignedByte m_FrameSize;
					jUnsignedByte m_DigitalFormat;
				};
			
				void setParent(DigitalVideoSensorConfigurationSequence* parent);
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
				DigitalVideoSensorList &operator=(const DigitalVideoSensorList &value);
				bool operator==(const DigitalVideoSensorList &value) const;
				bool operator!=(const DigitalVideoSensorList &value) const;
				DigitalVideoSensorList();
				DigitalVideoSensorList(const DigitalVideoSensorList &value);
				virtual ~DigitalVideoSensorList();
			
			protected:
				DigitalVideoSensorConfigurationSequence* m_parent;
				std::vector<DigitalVideoSensorConfigurationRec> m_DigitalVideoSensorConfigurationRec;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			RequestIdRec* const getRequestIdRec();
			int setRequestIdRec(const RequestIdRec &value);
			DigitalVideoSensorList* const getDigitalVideoSensorList();
			int setDigitalVideoSensorList(const DigitalVideoSensorList &value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			DigitalVideoSensorConfigurationSequence &operator=(const DigitalVideoSensorConfigurationSequence &value);
			bool operator==(const DigitalVideoSensorConfigurationSequence &value) const;
			bool operator!=(const DigitalVideoSensorConfigurationSequence &value) const;
			DigitalVideoSensorConfigurationSequence();
			DigitalVideoSensorConfigurationSequence(const DigitalVideoSensorConfigurationSequence &value);
			virtual ~DigitalVideoSensorConfigurationSequence();
		
		protected:
			Body* m_parent;
			RequestIdRec m_RequestIdRec;
			DigitalVideoSensorList m_DigitalVideoSensorList;
		};
	
		DigitalVideoSensorConfigurationSequence* const getDigitalVideoSensorConfigurationSequence();
		int setDigitalVideoSensorConfigurationSequence(const DigitalVideoSensorConfigurationSequence &value);
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
		DigitalVideoSensorConfigurationSequence m_DigitalVideoSensorConfigurationSequence;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	SetDigitalVideoSensorConfiguration &operator=(const SetDigitalVideoSensorConfiguration &value);
	bool operator==(const SetDigitalVideoSensorConfiguration &value) const;
	bool operator!=(const SetDigitalVideoSensorConfiguration &value) const;
	SetDigitalVideoSensorConfiguration();
	SetDigitalVideoSensorConfiguration(const SetDigitalVideoSensorConfiguration &value);
	virtual ~SetDigitalVideoSensorConfiguration();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_SETDIGITALVIDEOSENSORCONFIGURATION_H
