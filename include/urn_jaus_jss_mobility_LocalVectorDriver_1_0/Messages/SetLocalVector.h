#ifndef URN_JAUS_JSS_MOBILITY_LOCALVECTORDRIVER_1_0_SETLOCALVECTOR_H
#define URN_JAUS_JSS_MOBILITY_LOCALVECTORDRIVER_1_0_SETLOCALVECTOR_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_LocalVectorDriver_1_0
{

class DllExport SetLocalVector: public JTS::Message
{
public:
	static const int ID = 0x0408;
	
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
		class DllExport LocalVectorRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			double getSpeed();
			int setSpeed(double value);
			bool isZValid() const;
			double getZ();
			int setZ(double value);
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
			LocalVectorRec &operator=(const LocalVectorRec &value);
			bool operator==(const LocalVectorRec &value) const;
			bool operator!=(const LocalVectorRec &value) const;
			LocalVectorRec();
			LocalVectorRec(const LocalVectorRec &value);
			virtual ~LocalVectorRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedByte m_PresenceVector;
			jUnsignedShortInteger m_Speed;
			jUnsignedInteger m_Z;
			jUnsignedShortInteger m_Heading;
			jUnsignedShortInteger m_Roll;
			jUnsignedShortInteger m_Pitch;
		};
	
		LocalVectorRec* const getLocalVectorRec();
		int setLocalVectorRec(const LocalVectorRec &value);
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
		LocalVectorRec m_LocalVectorRec;
	};

	unsigned int getID() { return ID; };
	AppHeader* const getAppHeader();
	int setAppHeader(const AppHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	SetLocalVector &operator=(const SetLocalVector &value);
	bool operator==(const SetLocalVector &value) const;
	bool operator!=(const SetLocalVector &value) const;
	SetLocalVector();
	SetLocalVector(const SetLocalVector &value);
	virtual ~SetLocalVector();

protected:
	AppHeader m_AppHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_LOCALVECTORDRIVER_1_0_SETLOCALVECTOR_H
