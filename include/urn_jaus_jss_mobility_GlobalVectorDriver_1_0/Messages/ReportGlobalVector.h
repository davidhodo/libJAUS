#ifndef URN_JAUS_JSS_MOBILITY_GLOBALVECTORDRIVER_1_0_REPORTGLOBALVECTOR_H
#define URN_JAUS_JSS_MOBILITY_GLOBALVECTORDRIVER_1_0_REPORTGLOBALVECTOR_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_GlobalVectorDriver_1_0
{

class DllExport ReportGlobalVector: public JTS::Message
{
public:
	static const int ID = 0x4407;
	
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
		class DllExport GlobalVectorRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			double getSpeed();
			int setSpeed(double value);
			bool isAltitudeValid() const;
			double getAltitude();
			int setAltitude(double value);
			bool isHeadingValid() const;
			double getHeading();
			int setHeading(double value);
			bool isRollValid() const;
			double getRoll();
			int setRoll(double value);
			bool isPitchValid() const;
			double getPitch();
			int setPitch(double value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			GlobalVectorRec &operator=(const GlobalVectorRec &value);
			bool operator==(const GlobalVectorRec &value) const;
			bool operator!=(const GlobalVectorRec &value) const;
			GlobalVectorRec();
			GlobalVectorRec(const GlobalVectorRec &value);
			virtual ~GlobalVectorRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedByte m_PresenceVector;
			jUnsignedShortInteger m_Speed;
			jUnsignedInteger m_Altitude;
			jUnsignedShortInteger m_Heading;
			jUnsignedShortInteger m_Roll;
			jUnsignedShortInteger m_Pitch;
		};
	
		GlobalVectorRec* const getGlobalVectorRec();
		int setGlobalVectorRec(const GlobalVectorRec &value);
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
		GlobalVectorRec m_GlobalVectorRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportGlobalVector &operator=(const ReportGlobalVector &value);
	bool operator==(const ReportGlobalVector &value) const;
	bool operator!=(const ReportGlobalVector &value) const;
	ReportGlobalVector();
	ReportGlobalVector(const ReportGlobalVector &value);
	virtual ~ReportGlobalVector();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_GLOBALVECTORDRIVER_1_0_REPORTGLOBALVECTOR_H
