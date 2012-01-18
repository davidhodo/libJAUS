#ifndef URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_QUERYDIGITALVIDEOSENSORCONFIGURATION_H
#define URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_QUERYDIGITALVIDEOSENSORCONFIGURATION_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

class DllExport QueryDigitalVideoSensorConfiguration: public JTS::Message
{
public:
	static const int ID = 0x2809;
	
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
		class DllExport QueryDigitalVideoConfigurationList
		{
		public:
			class DllExport QueryDigitalVideoConfigurationRec
			{
			public:
				void setParent(QueryDigitalVideoConfigurationList* parent);
				void setParentPresenceVector();
				jUnsignedShortInteger getSensorID();
				int setSensorID(jUnsignedShortInteger value);
				jUnsignedByte getQueryPresenceVector();
				int setQueryPresenceVector(jUnsignedByte value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				QueryDigitalVideoConfigurationRec &operator=(const QueryDigitalVideoConfigurationRec &value);
				bool operator==(const QueryDigitalVideoConfigurationRec &value) const;
				bool operator!=(const QueryDigitalVideoConfigurationRec &value) const;
				QueryDigitalVideoConfigurationRec();
				QueryDigitalVideoConfigurationRec(const QueryDigitalVideoConfigurationRec &value);
				virtual ~QueryDigitalVideoConfigurationRec();
			
			protected:
				QueryDigitalVideoConfigurationList* m_parent;
				jUnsignedShortInteger m_SensorID;
				jUnsignedByte m_QueryPresenceVector;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			unsigned int getNumberOfElements() const;
			QueryDigitalVideoConfigurationRec* const getElement(unsigned int index);
			int setElement(unsigned int index, const QueryDigitalVideoConfigurationRec &value);
			int addElement(const QueryDigitalVideoConfigurationRec &value);
			int deleteElement(unsigned int index);
			int deleteLastElement();
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryDigitalVideoConfigurationList &operator=(const QueryDigitalVideoConfigurationList &value);
			bool operator==(const QueryDigitalVideoConfigurationList &value) const;
			bool operator!=(const QueryDigitalVideoConfigurationList &value) const;
			QueryDigitalVideoConfigurationList();
			QueryDigitalVideoConfigurationList(const QueryDigitalVideoConfigurationList &value);
			virtual ~QueryDigitalVideoConfigurationList();
		
		protected:
			Body* m_parent;
			std::vector<QueryDigitalVideoConfigurationRec> m_QueryDigitalVideoConfigurationRec;
		};
	
		QueryDigitalVideoConfigurationList* const getQueryDigitalVideoConfigurationList();
		int setQueryDigitalVideoConfigurationList(const QueryDigitalVideoConfigurationList &value);
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
		QueryDigitalVideoConfigurationList m_QueryDigitalVideoConfigurationList;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryDigitalVideoSensorConfiguration &operator=(const QueryDigitalVideoSensorConfiguration &value);
	bool operator==(const QueryDigitalVideoSensorConfiguration &value) const;
	bool operator!=(const QueryDigitalVideoSensorConfiguration &value) const;
	QueryDigitalVideoSensorConfiguration();
	QueryDigitalVideoSensorConfiguration(const QueryDigitalVideoSensorConfiguration &value);
	virtual ~QueryDigitalVideoSensorConfiguration();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_ENVIRONMENTSENSING_DIGITALVIDEO_1_0_QUERYDIGITALVIDEOSENSORCONFIGURATION_H
