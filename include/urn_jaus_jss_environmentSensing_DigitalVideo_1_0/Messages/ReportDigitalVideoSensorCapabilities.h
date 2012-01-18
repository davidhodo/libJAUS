#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_REPORTDIGITALVIDEOSENSORCAPABILITIES_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_REPORTDIGITALVIDEOSENSORCAPABILITIES_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

class DllExport ReportDigitalVideoSensorCapabilities: public JTS::Message
{
public:
	static const int ID = 0x4808;
	
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
		class DllExport DigitalVideoSensorList
		{
		public:
			class DllExport DigitalVideoSensorCapabilitiesRec
			{
			public:
				class DllExport SupportedFrameSizes
				{
				public:
					void setParent(DigitalVideoSensorCapabilitiesRec* parent);
					void setParentPresenceVector();
					jUnsignedInteger getWvga_852x480();
					int setWvga_852x480(jUnsignedInteger value);
					jUnsignedInteger getWxga_1366x768();
					int setWxga_1366x768(jUnsignedInteger value);
					jUnsignedInteger getWsxga_1600x1024();
					int setWsxga_1600x1024(jUnsignedInteger value);
					jUnsignedInteger getWuxga_1920x1200();
					int setWuxga_1920x1200(jUnsignedInteger value);
					jUnsignedInteger getWoxga_2560x1600();
					int setWoxga_2560x1600(jUnsignedInteger value);
					jUnsignedInteger getWqsxga_3200x2048();
					int setWqsxga_3200x2048(jUnsignedInteger value);
					jUnsignedInteger getWquxga_3840x2400();
					int setWquxga_3840x2400(jUnsignedInteger value);
					jUnsignedInteger getWhsxga_6400x4096();
					int setWhsxga_6400x4096(jUnsignedInteger value);
					jUnsignedInteger getWhuxga_7680x4800();
					int setWhuxga_7680x4800(jUnsignedInteger value);
					jUnsignedInteger getSqcif_128x96();
					int setSqcif_128x96(jUnsignedInteger value);
					jUnsignedInteger getQcif_176x144();
					int setQcif_176x144(jUnsignedInteger value);
					jUnsignedInteger getCga_320x200();
					int setCga_320x200(jUnsignedInteger value);
					jUnsignedInteger getCif_352x288();
					int setCif_352x288(jUnsignedInteger value);
					jUnsignedInteger getCif4_704x576();
					int setCif4_704x576(jUnsignedInteger value);
					jUnsignedInteger getEga_640x350();
					int setEga_640x350(jUnsignedInteger value);
					jUnsignedInteger getCif16_1408x1152();
					int setCif16_1408x1152(jUnsignedInteger value);
					jUnsignedInteger getQqvga_160x120();
					int setQqvga_160x120(jUnsignedInteger value);
					jUnsignedInteger getHd480_852x480();
					int setHd480_852x480(jUnsignedInteger value);
					jUnsignedInteger getQvga_320x240();
					int setQvga_320x240(jUnsignedInteger value);
					jUnsignedInteger getVga_640x480();
					int setVga_640x480(jUnsignedInteger value);
					jUnsignedInteger getHd720_1280x720();
					int setHd720_1280x720(jUnsignedInteger value);
					jUnsignedInteger getSvga_800x600();
					int setSvga_800x600(jUnsignedInteger value);
					jUnsignedInteger getXga_1024x768();
					int setXga_1024x768(jUnsignedInteger value);
					jUnsignedInteger getHd1080_1920x1080();
					int setHd1080_1920x1080(jUnsignedInteger value);
					jUnsignedInteger getUxga_1600x1200();
					int setUxga_1600x1200(jUnsignedInteger value);
					jUnsignedInteger getQxga_2048x1536();
					int setQxga_2048x1536(jUnsignedInteger value);
					jUnsignedInteger getSxga_1280x1024();
					int setSxga_1280x1024(jUnsignedInteger value);
					jUnsignedInteger getQsxga_2560x2048();
					int setQsxga_2560x2048(jUnsignedInteger value);
					jUnsignedInteger getHsxga_5120x4096();
					int setHsxga_5120x4096(jUnsignedInteger value);
					const unsigned int getSize();
					virtual void encode(unsigned char *bytes);
					virtual void decode(const unsigned char *bytes);
					SupportedFrameSizes &operator=(const SupportedFrameSizes &value);
					bool operator==(const SupportedFrameSizes &value) const;
					bool operator!=(const SupportedFrameSizes &value) const;
					SupportedFrameSizes();
					SupportedFrameSizes(const SupportedFrameSizes &value);
					virtual ~SupportedFrameSizes();
				
				protected:
					DigitalVideoSensorCapabilitiesRec* m_parent;
					jUnsignedInteger m_SubFields;
				};
				class DllExport SupportedDigitalFormats
				{
				public:
					void setParent(DigitalVideoSensorCapabilitiesRec* parent);
					void setParentPresenceVector();
					jUnsignedByte getMPEG2();
					int setMPEG2(jUnsignedByte value);
					jUnsignedByte getH263();
					int setH263(jUnsignedByte value);
					jUnsignedByte getH263plus();
					int setH263plus(jUnsignedByte value);
					jUnsignedByte getMPEG4_Visual();
					int setMPEG4_Visual(jUnsignedByte value);
					jUnsignedByte getMPEG4_AVC_h264();
					int setMPEG4_AVC_h264(jUnsignedByte value);
					jUnsignedByte getAVI();
					int setAVI(jUnsignedByte value);
					jUnsignedByte getMJPEG();
					int setMJPEG(jUnsignedByte value);
					const unsigned int getSize();
					virtual void encode(unsigned char *bytes);
					virtual void decode(const unsigned char *bytes);
					SupportedDigitalFormats &operator=(const SupportedDigitalFormats &value);
					bool operator==(const SupportedDigitalFormats &value) const;
					bool operator!=(const SupportedDigitalFormats &value) const;
					SupportedDigitalFormats();
					SupportedDigitalFormats(const SupportedDigitalFormats &value);
					virtual ~SupportedDigitalFormats();
				
				protected:
					DigitalVideoSensorCapabilitiesRec* m_parent;
					jUnsignedByte m_SubFields;
				};
			
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
				bool isMinimumFrameRateValid() const;
				jUnsignedByte getMinimumFrameRate();
				int setMinimumFrameRate(jUnsignedByte value);
				bool isMaximumFrameRateValid() const;
				jUnsignedByte getMaximumFrameRate();
				int setMaximumFrameRate(jUnsignedByte value);
				bool isSupportedFrameSizesValid() const;
				SupportedFrameSizes* const getSupportedFrameSizes();
				int setSupportedFrameSizes(const SupportedFrameSizes &value);
				bool isSupportedDigitalFormatsValid() const;
				SupportedDigitalFormats* const getSupportedDigitalFormats();
				int setSupportedDigitalFormats(const SupportedDigitalFormats &value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				DigitalVideoSensorCapabilitiesRec &operator=(const DigitalVideoSensorCapabilitiesRec &value);
				bool operator==(const DigitalVideoSensorCapabilitiesRec &value) const;
				bool operator!=(const DigitalVideoSensorCapabilitiesRec &value) const;
				DigitalVideoSensorCapabilitiesRec();
				DigitalVideoSensorCapabilitiesRec(const DigitalVideoSensorCapabilitiesRec &value);
				virtual ~DigitalVideoSensorCapabilitiesRec();
			
			protected:
				int setPresenceVector(unsigned int index);
			
				DigitalVideoSensorList* m_parent;
				jUnsignedByte m_PresenceVector;
				jUnsignedShortInteger m_SensorID;
				jUnsignedShortInteger m_MinimumBitRate;
				jUnsignedShortInteger m_MaximumBitRate;
				jUnsignedByte m_MinimumFrameRate;
				jUnsignedByte m_MaximumFrameRate;
				SupportedFrameSizes m_SupportedFrameSizes;
				SupportedDigitalFormats m_SupportedDigitalFormats;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			DigitalVideoSensorCapabilitiesRec* const getElement(unsigned int index);
			int setElement(unsigned int index, const DigitalVideoSensorCapabilitiesRec &value);
			int addElement(const DigitalVideoSensorCapabilitiesRec &value);
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
			Body* m_parent;
			std::vector<DigitalVideoSensorCapabilitiesRec> m_DigitalVideoSensorCapabilitiesRec;
		};
	
		DigitalVideoSensorList* const getDigitalVideoSensorList();
		int setDigitalVideoSensorList(const DigitalVideoSensorList &value);
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
		DigitalVideoSensorList m_DigitalVideoSensorList;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportDigitalVideoSensorCapabilities &operator=(const ReportDigitalVideoSensorCapabilities &value);
	bool operator==(const ReportDigitalVideoSensorCapabilities &value) const;
	bool operator!=(const ReportDigitalVideoSensorCapabilities &value) const;
	ReportDigitalVideoSensorCapabilities();
	ReportDigitalVideoSensorCapabilities(const ReportDigitalVideoSensorCapabilities &value);
	virtual ~ReportDigitalVideoSensorCapabilities();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_REPORTDIGITALVIDEOSENSORCAPABILITIES_H
