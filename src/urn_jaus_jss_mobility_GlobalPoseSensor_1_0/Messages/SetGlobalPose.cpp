#include "urn_jaus_jss_mobility_GlobalPoseSensor_1_0/Messages/SetGlobalPose.h"

namespace urn_jaus_jss_mobility_GlobalPoseSensor_1_0
{

void SetGlobalPose::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void SetGlobalPose::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetGlobalPose::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int SetGlobalPose::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
{
	m_MessageID = value;
	setParentPresenceVector();
	return 0;
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int SetGlobalPose::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void SetGlobalPose::AppHeader::HeaderRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_MessageIDTemp;
	
	m_MessageIDTemp = JSIDL_v_1_0::correctEndianness(m_MessageID);
	memcpy(bytes + pos, &m_MessageIDTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void SetGlobalPose::AppHeader::HeaderRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_MessageIDTemp;
	
	memcpy(&m_MessageIDTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_MessageID = JSIDL_v_1_0::correctEndianness(m_MessageIDTemp);
	pos += sizeof(jUnsignedShortInteger);
}

SetGlobalPose::AppHeader::HeaderRec &SetGlobalPose::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool SetGlobalPose::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool SetGlobalPose::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

SetGlobalPose::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x0402;
}

SetGlobalPose::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x0402;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

SetGlobalPose::AppHeader::HeaderRec::~HeaderRec()
{
}

SetGlobalPose::AppHeader::HeaderRec* const SetGlobalPose::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int SetGlobalPose::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void SetGlobalPose::AppHeader::setParentPresenceVector()
{
	// Nothing needed here, placeholder function
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int SetGlobalPose::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void SetGlobalPose::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void SetGlobalPose::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

SetGlobalPose::AppHeader &SetGlobalPose::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool SetGlobalPose::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool SetGlobalPose::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

SetGlobalPose::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

SetGlobalPose::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

SetGlobalPose::AppHeader::~AppHeader()
{
}

SetGlobalPose::AppHeader* const SetGlobalPose::getAppHeader()
{
	return &m_AppHeader;
}

int SetGlobalPose::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void SetGlobalPose::Body::GlobalPoseRec::setParent(Body* parent)
{
	m_parent = parent;
}

void SetGlobalPose::Body::GlobalPoseRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetGlobalPose::Body::GlobalPoseRec::getPresenceVector()
{
	return m_PresenceVector;
}

int SetGlobalPose::Body::GlobalPoseRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedShortInteger)pvBitSet.to_ulong();
	return 0;
}

bool SetGlobalPose::Body::GlobalPoseRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

bool SetGlobalPose::Body::GlobalPoseRec::isLatitudeValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

double SetGlobalPose::Body::GlobalPoseRec::getLatitude()
{
	double value;
	
	double scaleFactor = ( 90 - -90 ) / 4.294967295E9;
	double bias = -90;
	
	value = m_Latitude * scaleFactor + bias;
	
	return value;
}

int SetGlobalPose::Body::GlobalPoseRec::setLatitude(double value)
{
	if ((value >= -90) && (value <= 90))
	{
		double scaleFactor = ( 90 - -90 ) / 4.294967295E9;
		double bias = -90;
		
		m_Latitude= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(0);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetGlobalPose::Body::GlobalPoseRec::isLongitudeValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double SetGlobalPose::Body::GlobalPoseRec::getLongitude()
{
	double value;
	
	double scaleFactor = ( 180 - -180 ) / 4.294967295E9;
	double bias = -180;
	
	value = m_Longitude * scaleFactor + bias;
	
	return value;
}

int SetGlobalPose::Body::GlobalPoseRec::setLongitude(double value)
{
	if ((value >= -180) && (value <= 180))
	{
		double scaleFactor = ( 180 - -180 ) / 4.294967295E9;
		double bias = -180;
		
		m_Longitude= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetGlobalPose::Body::GlobalPoseRec::isAltitudeValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double SetGlobalPose::Body::GlobalPoseRec::getAltitude()
{
	double value;
	
	double scaleFactor = ( 35000 - -10000 ) / 4.294967295E9;
	double bias = -10000;
	
	value = m_Altitude * scaleFactor + bias;
	
	return value;
}

int SetGlobalPose::Body::GlobalPoseRec::setAltitude(double value)
{
	if ((value >= -10000) && (value <= 35000))
	{
		double scaleFactor = ( 35000 - -10000 ) / 4.294967295E9;
		double bias = -10000;
		
		m_Altitude= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(2);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetGlobalPose::Body::GlobalPoseRec::isPosition_RMSValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double SetGlobalPose::Body::GlobalPoseRec::getPosition_RMS()
{
	double value;
	
	double scaleFactor = ( 100 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_Position_RMS * scaleFactor + bias;
	
	return value;
}

int SetGlobalPose::Body::GlobalPoseRec::setPosition_RMS(double value)
{
	if ((value >= 0) && (value <= 100))
	{
		double scaleFactor = ( 100 - 0 ) / 4.294967295E9;
		double bias = 0;
		
		m_Position_RMS= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetGlobalPose::Body::GlobalPoseRec::isRollValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double SetGlobalPose::Body::GlobalPoseRec::getRoll()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Roll * scaleFactor + bias;
	
	return value;
}

int SetGlobalPose::Body::GlobalPoseRec::setRoll(double value)
{
	if ((value >= -3.14159265358979323846) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
		double bias = -3.14159265358979323846;
		
		m_Roll= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(4);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetGlobalPose::Body::GlobalPoseRec::isPitchValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

double SetGlobalPose::Body::GlobalPoseRec::getPitch()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Pitch * scaleFactor + bias;
	
	return value;
}

int SetGlobalPose::Body::GlobalPoseRec::setPitch(double value)
{
	if ((value >= -3.14159265358979323846) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
		double bias = -3.14159265358979323846;
		
		m_Pitch= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(5);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetGlobalPose::Body::GlobalPoseRec::isYawValid() const
{
	if (checkPresenceVector(6))
	{
		return true;
	}
	return false;
}

double SetGlobalPose::Body::GlobalPoseRec::getYaw()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Yaw * scaleFactor + bias;
	
	return value;
}

int SetGlobalPose::Body::GlobalPoseRec::setYaw(double value)
{
	if ((value >= -3.14159265358979323846) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
		double bias = -3.14159265358979323846;
		
		m_Yaw= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(6);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetGlobalPose::Body::GlobalPoseRec::isAttitude_RMSValid() const
{
	if (checkPresenceVector(7))
	{
		return true;
	}
	return false;
}

double SetGlobalPose::Body::GlobalPoseRec::getAttitude_RMS()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - 0 ) / 65535.0;
	double bias = 0;
	
	value = m_Attitude_RMS * scaleFactor + bias;
	
	return value;
}

int SetGlobalPose::Body::GlobalPoseRec::setAttitude_RMS(double value)
{
	if ((value >= 0) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - 0 ) / 65535.0;
		double bias = 0;
		
		m_Attitude_RMS= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(7);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

void SetGlobalPose::Body::GlobalPoseRec::TimeStamp::setParent(GlobalPoseRec* parent)
{
	m_parent = parent;
}

void SetGlobalPose::Body::GlobalPoseRec::TimeStamp::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setPresenceVector(8);
		m_parent->setParentPresenceVector();
	}
}

jUnsignedInteger SetGlobalPose::Body::GlobalPoseRec::TimeStamp::getSeconds()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<6> sfbs;
	int i = 0;
	
	for (int index = 10; index <= 15; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int SetGlobalPose::Body::GlobalPoseRec::TimeStamp::setSeconds(jUnsignedInteger value)
{
	if (((value >= 0) && (value <= 59)))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<6> sfbs((int)value);
		int i = 0;
		
		for (int index = 10; index <= 15; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger SetGlobalPose::Body::GlobalPoseRec::TimeStamp::getMinutes()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<6> sfbs;
	int i = 0;
	
	for (int index = 16; index <= 21; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int SetGlobalPose::Body::GlobalPoseRec::TimeStamp::setMinutes(jUnsignedInteger value)
{
	if (((value >= 0) && (value <= 59)))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<6> sfbs((int)value);
		int i = 0;
		
		for (int index = 16; index <= 21; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger SetGlobalPose::Body::GlobalPoseRec::TimeStamp::getHour()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<5> sfbs;
	int i = 0;
	
	for (int index = 22; index <= 26; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int SetGlobalPose::Body::GlobalPoseRec::TimeStamp::setHour(jUnsignedInteger value)
{
	if (((value >= 0) && (value <= 23)))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<5> sfbs((int)value);
		int i = 0;
		
		for (int index = 22; index <= 26; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger SetGlobalPose::Body::GlobalPoseRec::TimeStamp::getDay()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<5> sfbs;
	int i = 0;
	
	for (int index = 27; index <= 31; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int SetGlobalPose::Body::GlobalPoseRec::TimeStamp::setDay(jUnsignedInteger value)
{
	if (((value >= 1) && (value <= 31)))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<5> sfbs((int)value);
		int i = 0;
		
		for (int index = 27; index <= 31; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger SetGlobalPose::Body::GlobalPoseRec::TimeStamp::getMilliseconds()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<10> sfbs;
	int i = 0;
	
	for (int index = 0; index <= 9; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int SetGlobalPose::Body::GlobalPoseRec::TimeStamp::setMilliseconds(jUnsignedInteger value)
{
	if (((value >= 0) && (value <= 999)))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<10> sfbs((int)value);
		int i = 0;
		
		for (int index = 0; index <= 9; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int SetGlobalPose::Body::GlobalPoseRec::TimeStamp::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedInteger);
	
	return size;
}

void SetGlobalPose::Body::GlobalPoseRec::TimeStamp::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedInteger m_SubFieldsTemp;
	
	m_SubFieldsTemp = JSIDL_v_1_0::correctEndianness(m_SubFields);
	memcpy(bytes + pos, &m_SubFieldsTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
}

void SetGlobalPose::Body::GlobalPoseRec::TimeStamp::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedInteger m_SubFieldsTemp;
	
	memcpy(&m_SubFieldsTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_SubFields = JSIDL_v_1_0::correctEndianness(m_SubFieldsTemp);
	pos += sizeof(jUnsignedInteger);
}

SetGlobalPose::Body::GlobalPoseRec::TimeStamp &SetGlobalPose::Body::GlobalPoseRec::TimeStamp::operator=(const TimeStamp &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool SetGlobalPose::Body::GlobalPoseRec::TimeStamp::operator==(const TimeStamp &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool SetGlobalPose::Body::GlobalPoseRec::TimeStamp::operator!=(const TimeStamp &value) const
{
	return !((*this) == value);
}

SetGlobalPose::Body::GlobalPoseRec::TimeStamp::TimeStamp()
{
	m_parent = NULL;
	m_SubFields = 0;
}

SetGlobalPose::Body::GlobalPoseRec::TimeStamp::TimeStamp(const TimeStamp &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

SetGlobalPose::Body::GlobalPoseRec::TimeStamp::~TimeStamp()
{
}

bool SetGlobalPose::Body::GlobalPoseRec::isTimeStampValid() const
{
	if (checkPresenceVector(8))
	{
		return true;
	}
	return false;
}

SetGlobalPose::Body::GlobalPoseRec::TimeStamp* const SetGlobalPose::Body::GlobalPoseRec::getTimeStamp()
{
	return &m_TimeStamp;
}

int SetGlobalPose::Body::GlobalPoseRec::setTimeStamp(const TimeStamp &value)
{
	m_TimeStamp = value;
	setPresenceVector(8);
	setParentPresenceVector();
	return 0;
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int SetGlobalPose::Body::GlobalPoseRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(7))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(8))
	{
		size += m_TimeStamp.getSize();
	}
	
	return size;
}

void SetGlobalPose::Body::GlobalPoseRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_PresenceVectorTemp;
	
	m_PresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_PresenceVector);
	memcpy(bytes + pos, &m_PresenceVectorTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_LatitudeTemp;
		
		m_LatitudeTemp = JSIDL_v_1_0::correctEndianness(m_Latitude);
		memcpy(bytes + pos, &m_LatitudeTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedInteger m_LongitudeTemp;
		
		m_LongitudeTemp = JSIDL_v_1_0::correctEndianness(m_Longitude);
		memcpy(bytes + pos, &m_LongitudeTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_AltitudeTemp;
		
		m_AltitudeTemp = JSIDL_v_1_0::correctEndianness(m_Altitude);
		memcpy(bytes + pos, &m_AltitudeTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedInteger m_Position_RMSTemp;
		
		m_Position_RMSTemp = JSIDL_v_1_0::correctEndianness(m_Position_RMS);
		memcpy(bytes + pos, &m_Position_RMSTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedShortInteger m_RollTemp;
		
		m_RollTemp = JSIDL_v_1_0::correctEndianness(m_Roll);
		memcpy(bytes + pos, &m_RollTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedShortInteger m_PitchTemp;
		
		m_PitchTemp = JSIDL_v_1_0::correctEndianness(m_Pitch);
		memcpy(bytes + pos, &m_PitchTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedShortInteger m_YawTemp;
		
		m_YawTemp = JSIDL_v_1_0::correctEndianness(m_Yaw);
		memcpy(bytes + pos, &m_YawTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedShortInteger m_Attitude_RMSTemp;
		
		m_Attitude_RMSTemp = JSIDL_v_1_0::correctEndianness(m_Attitude_RMS);
		memcpy(bytes + pos, &m_Attitude_RMSTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(8))
	{
		m_TimeStamp.encode(bytes + pos);
		pos += m_TimeStamp.getSize();
	}
}

void SetGlobalPose::Body::GlobalPoseRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_PresenceVectorTemp;
	
	memcpy(&m_PresenceVectorTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_PresenceVector = JSIDL_v_1_0::correctEndianness(m_PresenceVectorTemp);
	pos += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_LatitudeTemp;
		
		memcpy(&m_LatitudeTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Latitude = JSIDL_v_1_0::correctEndianness(m_LatitudeTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedInteger m_LongitudeTemp;
		
		memcpy(&m_LongitudeTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Longitude = JSIDL_v_1_0::correctEndianness(m_LongitudeTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_AltitudeTemp;
		
		memcpy(&m_AltitudeTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Altitude = JSIDL_v_1_0::correctEndianness(m_AltitudeTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedInteger m_Position_RMSTemp;
		
		memcpy(&m_Position_RMSTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Position_RMS = JSIDL_v_1_0::correctEndianness(m_Position_RMSTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedShortInteger m_RollTemp;
		
		memcpy(&m_RollTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Roll = JSIDL_v_1_0::correctEndianness(m_RollTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedShortInteger m_PitchTemp;
		
		memcpy(&m_PitchTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Pitch = JSIDL_v_1_0::correctEndianness(m_PitchTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedShortInteger m_YawTemp;
		
		memcpy(&m_YawTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Yaw = JSIDL_v_1_0::correctEndianness(m_YawTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedShortInteger m_Attitude_RMSTemp;
		
		memcpy(&m_Attitude_RMSTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Attitude_RMS = JSIDL_v_1_0::correctEndianness(m_Attitude_RMSTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(8))
	{
		m_TimeStamp.decode(bytes + pos);
		pos += m_TimeStamp.getSize();
	}
}

SetGlobalPose::Body::GlobalPoseRec &SetGlobalPose::Body::GlobalPoseRec::operator=(const GlobalPoseRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_Latitude = value.m_Latitude;
	m_Longitude = value.m_Longitude;
	m_Altitude = value.m_Altitude;
	m_Position_RMS = value.m_Position_RMS;
	m_Roll = value.m_Roll;
	m_Pitch = value.m_Pitch;
	m_Yaw = value.m_Yaw;
	m_Attitude_RMS = value.m_Attitude_RMS;
	m_TimeStamp = value.m_TimeStamp;
	
	return *this;
}

bool SetGlobalPose::Body::GlobalPoseRec::operator==(const GlobalPoseRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_Latitude != value.m_Latitude)
	{
		return false;
	}
	if (m_Longitude != value.m_Longitude)
	{
		return false;
	}
	if (m_Altitude != value.m_Altitude)
	{
		return false;
	}
	if (m_Position_RMS != value.m_Position_RMS)
	{
		return false;
	}
	if (m_Roll != value.m_Roll)
	{
		return false;
	}
	if (m_Pitch != value.m_Pitch)
	{
		return false;
	}
	if (m_Yaw != value.m_Yaw)
	{
		return false;
	}
	if (m_Attitude_RMS != value.m_Attitude_RMS)
	{
		return false;
	}
	
	if (m_TimeStamp != value.m_TimeStamp)
	{
		return false;
	}
	
	return true;
}

bool SetGlobalPose::Body::GlobalPoseRec::operator!=(const GlobalPoseRec &value) const
{
	return !((*this) == value);
}

SetGlobalPose::Body::GlobalPoseRec::GlobalPoseRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Latitude = 0;
	m_Longitude = 0;
	m_Altitude = 0;
	m_Position_RMS = 0;
	m_Roll = 0;
	m_Pitch = 0;
	m_Yaw = 0;
	m_Attitude_RMS = 0;
	m_TimeStamp.setParent(this);
}

SetGlobalPose::Body::GlobalPoseRec::GlobalPoseRec(const GlobalPoseRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Latitude = 0;
	m_Longitude = 0;
	m_Altitude = 0;
	m_Position_RMS = 0;
	m_Roll = 0;
	m_Pitch = 0;
	m_Yaw = 0;
	m_Attitude_RMS = 0;
	m_TimeStamp.setParent(this);
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_Latitude = value.m_Latitude;
	m_Longitude = value.m_Longitude;
	m_Altitude = value.m_Altitude;
	m_Position_RMS = value.m_Position_RMS;
	m_Roll = value.m_Roll;
	m_Pitch = value.m_Pitch;
	m_Yaw = value.m_Yaw;
	m_Attitude_RMS = value.m_Attitude_RMS;
	m_TimeStamp = value.m_TimeStamp;
}

SetGlobalPose::Body::GlobalPoseRec::~GlobalPoseRec()
{
}

SetGlobalPose::Body::GlobalPoseRec* const SetGlobalPose::Body::getGlobalPoseRec()
{
	return &m_GlobalPoseRec;
}

int SetGlobalPose::Body::setGlobalPoseRec(const GlobalPoseRec &value)
{
	m_GlobalPoseRec = value;
	setParentPresenceVector();
	return 0;
}

void SetGlobalPose::Body::setParentPresenceVector()
{
	// Nothing needed here, placeholder function
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int SetGlobalPose::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_GlobalPoseRec.getSize();
	
	return size;
}

void SetGlobalPose::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_GlobalPoseRec.encode(bytes + pos);
	pos += m_GlobalPoseRec.getSize();
}

void SetGlobalPose::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_GlobalPoseRec.decode(bytes + pos);
	pos += m_GlobalPoseRec.getSize();
}

SetGlobalPose::Body &SetGlobalPose::Body::operator=(const Body &value)
{
	m_GlobalPoseRec = value.m_GlobalPoseRec;
	m_GlobalPoseRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool SetGlobalPose::Body::operator==(const Body &value) const
{
	if (m_GlobalPoseRec != value.m_GlobalPoseRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool SetGlobalPose::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

SetGlobalPose::Body::Body()
{
	m_GlobalPoseRec.setParent(this);
	/// No Initialization of m_GlobalPoseRec necessary.
}

SetGlobalPose::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_GlobalPoseRec.setParent(this);
	/// No Initialization of m_GlobalPoseRec necessary.
	
	/// Copy the values
	m_GlobalPoseRec = value.m_GlobalPoseRec;
	m_GlobalPoseRec.setParent(this);
	/// This code is currently not supported
}

SetGlobalPose::Body::~Body()
{
}

SetGlobalPose::Body* const SetGlobalPose::getBody()
{
	return &m_Body;
}

int SetGlobalPose::setBody(const Body &value)
{
	m_Body = value;
	return 0;
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int SetGlobalPose::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void SetGlobalPose::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_AppHeader.encode(bytes + pos);
	pos += m_AppHeader.getSize();
	m_Body.encode(bytes + pos);
	pos += m_Body.getSize();
}

void SetGlobalPose::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_AppHeader.decode(bytes + pos);
	pos += m_AppHeader.getSize();
	m_Body.decode(bytes + pos);
	pos += m_Body.getSize();
}

SetGlobalPose &SetGlobalPose::operator=(const SetGlobalPose &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool SetGlobalPose::operator==(const SetGlobalPose &value) const
{
	if (m_AppHeader != value.m_AppHeader)
	{
		return false;
	}
	if (m_Body != value.m_Body)
	{
		return false;
	}
	
	return true;
}

bool SetGlobalPose::operator!=(const SetGlobalPose &value) const
{
	return !((*this) == value);
}

SetGlobalPose::SetGlobalPose()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

SetGlobalPose::SetGlobalPose(const SetGlobalPose &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

SetGlobalPose::~SetGlobalPose()
{
}


}
