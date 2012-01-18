#include "urn_jaus_jss_mobility_AccelerationStateSensor_0_6/Messages/ReportAccelerationState.h"

namespace urn_jaus_jss_mobility_AccelerationStateSensor_0_6
{

void ReportAccelerationState::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportAccelerationState::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportAccelerationState::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportAccelerationState::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportAccelerationState::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportAccelerationState::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportAccelerationState::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportAccelerationState::AppHeader::HeaderRec &ReportAccelerationState::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportAccelerationState::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportAccelerationState::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportAccelerationState::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4417;
}

ReportAccelerationState::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4417;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportAccelerationState::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportAccelerationState::AppHeader::HeaderRec* const ReportAccelerationState::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportAccelerationState::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportAccelerationState::AppHeader::setParentPresenceVector()
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
const unsigned int ReportAccelerationState::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportAccelerationState::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportAccelerationState::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportAccelerationState::AppHeader &ReportAccelerationState::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportAccelerationState::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportAccelerationState::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportAccelerationState::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportAccelerationState::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportAccelerationState::AppHeader::~AppHeader()
{
}

ReportAccelerationState::AppHeader* const ReportAccelerationState::getAppHeader()
{
	return &m_AppHeader;
}

int ReportAccelerationState::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportAccelerationState::Body::ReportAccelerationStateRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportAccelerationState::Body::ReportAccelerationStateRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ReportAccelerationState::Body::ReportAccelerationStateRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportAccelerationState::Body::ReportAccelerationStateRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedByte)pvBitSet.to_ulong();
	return 0;
}

bool ReportAccelerationState::Body::ReportAccelerationStateRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

double ReportAccelerationState::Body::ReportAccelerationStateRec::getAcceleration_X()
{
	double value;
	
	double scaleFactor = ( 1310.68 - -1310.68 ) / 4.294967295E9;
	double bias = -1310.68;
	
	value = m_Acceleration_X * scaleFactor + bias;
	
	return value;
}

int ReportAccelerationState::Body::ReportAccelerationStateRec::setAcceleration_X(double value)
{
	if ((value >= -1310.68) && (value <= 1310.68))
	{
		double scaleFactor = ( 1310.68 - -1310.68 ) / 4.294967295E9;
		double bias = -1310.68;
		
		m_Acceleration_X= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double ReportAccelerationState::Body::ReportAccelerationStateRec::getAcceleration_Y()
{
	double value;
	
	double scaleFactor = ( 1310.68 - -1310.68 ) / 4.294967295E9;
	double bias = -1310.68;
	
	value = m_Acceleration_Y * scaleFactor + bias;
	
	return value;
}

int ReportAccelerationState::Body::ReportAccelerationStateRec::setAcceleration_Y(double value)
{
	if ((value >= -1310.68) && (value <= 1310.68))
	{
		double scaleFactor = ( 1310.68 - -1310.68 ) / 4.294967295E9;
		double bias = -1310.68;
		
		m_Acceleration_Y= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double ReportAccelerationState::Body::ReportAccelerationStateRec::getAcceleration_Z()
{
	double value;
	
	double scaleFactor = ( 1310.68 - -1310.68 ) / 4.294967295E9;
	double bias = -1310.68;
	
	value = m_Acceleration_Z * scaleFactor + bias;
	
	return value;
}

int ReportAccelerationState::Body::ReportAccelerationStateRec::setAcceleration_Z(double value)
{
	if ((value >= -1310.68) && (value <= 1310.68))
	{
		double scaleFactor = ( 1310.68 - -1310.68 ) / 4.294967295E9;
		double bias = -1310.68;
		
		m_Acceleration_Z= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportAccelerationState::Body::ReportAccelerationStateRec::isAcceleration_RMSValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

double ReportAccelerationState::Body::ReportAccelerationStateRec::getAcceleration_RMS()
{
	double value;
	
	double scaleFactor = ( 100 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_Acceleration_RMS * scaleFactor + bias;
	
	return value;
}

int ReportAccelerationState::Body::ReportAccelerationStateRec::setAcceleration_RMS(double value)
{
	if ((value >= 0) && (value <= 100))
	{
		double scaleFactor = ( 100 - 0 ) / 4.294967295E9;
		double bias = 0;
		
		m_Acceleration_RMS= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(0);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double ReportAccelerationState::Body::ReportAccelerationStateRec::getRollAcceleration()
{
	double value;
	
	double scaleFactor = ( 13106.8 - -13106.8 ) / 4.294967295E9;
	double bias = -13106.8;
	
	value = m_RollAcceleration * scaleFactor + bias;
	
	return value;
}

int ReportAccelerationState::Body::ReportAccelerationStateRec::setRollAcceleration(double value)
{
	if ((value >= -13106.8) && (value <= 13106.8))
	{
		double scaleFactor = ( 13106.8 - -13106.8 ) / 4.294967295E9;
		double bias = -13106.8;
		
		m_RollAcceleration= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double ReportAccelerationState::Body::ReportAccelerationStateRec::getPitchAcceleration()
{
	double value;
	
	double scaleFactor = ( 13106.8 - -13106.8 ) / 4.294967295E9;
	double bias = -13106.8;
	
	value = m_PitchAcceleration * scaleFactor + bias;
	
	return value;
}

int ReportAccelerationState::Body::ReportAccelerationStateRec::setPitchAcceleration(double value)
{
	if ((value >= -13106.8) && (value <= 13106.8))
	{
		double scaleFactor = ( 13106.8 - -13106.8 ) / 4.294967295E9;
		double bias = -13106.8;
		
		m_PitchAcceleration= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double ReportAccelerationState::Body::ReportAccelerationStateRec::getYawAcceleration()
{
	double value;
	
	double scaleFactor = ( 13106.8 - -13106.8 ) / 4.294967295E9;
	double bias = -13106.8;
	
	value = m_YawAcceleration * scaleFactor + bias;
	
	return value;
}

int ReportAccelerationState::Body::ReportAccelerationStateRec::setYawAcceleration(double value)
{
	if ((value >= -13106.8) && (value <= 13106.8))
	{
		double scaleFactor = ( 13106.8 - -13106.8 ) / 4.294967295E9;
		double bias = -13106.8;
		
		m_YawAcceleration= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportAccelerationState::Body::ReportAccelerationStateRec::isRotationalAcceleration_RMSValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double ReportAccelerationState::Body::ReportAccelerationStateRec::getRotationalAcceleration_RMS()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - 0 ) / 65535.0;
	double bias = 0;
	
	value = m_RotationalAcceleration_RMS * scaleFactor + bias;
	
	return value;
}

int ReportAccelerationState::Body::ReportAccelerationStateRec::setRotationalAcceleration_RMS(double value)
{
	if ((value >= 0) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - 0 ) / 65535.0;
		double bias = 0;
		
		m_RotationalAcceleration_RMS= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

void ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::setParent(ReportAccelerationStateRec* parent)
{
	m_parent = parent;
}

void ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setPresenceVector(2);
		m_parent->setParentPresenceVector();
	}
}

jUnsignedInteger ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::getSeconds()
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

int ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::setSeconds(jUnsignedInteger value)
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

jUnsignedInteger ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::getMinutes()
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

int ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::setMinutes(jUnsignedInteger value)
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

jUnsignedInteger ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::getHour()
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

int ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::setHour(jUnsignedInteger value)
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

jUnsignedInteger ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::getDay()
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

int ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::setDay(jUnsignedInteger value)
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

jUnsignedInteger ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::getMilliseconds()
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

int ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::setMilliseconds(jUnsignedInteger value)
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
const unsigned int ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedInteger);
	
	return size;
}

void ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::encode(unsigned char *bytes)
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

void ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::decode(const unsigned char *bytes)
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

ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp &ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::operator=(const TimeStamp &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::operator==(const TimeStamp &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::operator!=(const TimeStamp &value) const
{
	return !((*this) == value);
}

ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::TimeStamp()
{
	m_parent = NULL;
	m_SubFields = 0;
}

ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::TimeStamp(const TimeStamp &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp::~TimeStamp()
{
}

bool ReportAccelerationState::Body::ReportAccelerationStateRec::isTimeStampValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

ReportAccelerationState::Body::ReportAccelerationStateRec::TimeStamp* const ReportAccelerationState::Body::ReportAccelerationStateRec::getTimeStamp()
{
	return &m_TimeStamp;
}

int ReportAccelerationState::Body::ReportAccelerationStateRec::setTimeStamp(const TimeStamp &value)
{
	m_TimeStamp = value;
	setPresenceVector(2);
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
const unsigned int ReportAccelerationState::Body::ReportAccelerationStateRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	size += sizeof(jUnsignedInteger);
	size += sizeof(jUnsignedInteger);
	size += sizeof(jUnsignedInteger);
	if (checkPresenceVector(0))
	{
		size += sizeof(jUnsignedInteger);
	}
	size += sizeof(jUnsignedInteger);
	size += sizeof(jUnsignedInteger);
	size += sizeof(jUnsignedInteger);
	if (checkPresenceVector(1))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		size += m_TimeStamp.getSize();
	}
	
	return size;
}

void ReportAccelerationState::Body::ReportAccelerationStateRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_PresenceVectorTemp;
	
	m_PresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_PresenceVector);
	memcpy(bytes + pos, &m_PresenceVectorTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
	jUnsignedInteger m_Acceleration_XTemp;
	
	m_Acceleration_XTemp = JSIDL_v_1_0::correctEndianness(m_Acceleration_X);
	memcpy(bytes + pos, &m_Acceleration_XTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_Acceleration_YTemp;
	
	m_Acceleration_YTemp = JSIDL_v_1_0::correctEndianness(m_Acceleration_Y);
	memcpy(bytes + pos, &m_Acceleration_YTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_Acceleration_ZTemp;
	
	m_Acceleration_ZTemp = JSIDL_v_1_0::correctEndianness(m_Acceleration_Z);
	memcpy(bytes + pos, &m_Acceleration_ZTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_Acceleration_RMSTemp;
		
		m_Acceleration_RMSTemp = JSIDL_v_1_0::correctEndianness(m_Acceleration_RMS);
		memcpy(bytes + pos, &m_Acceleration_RMSTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	jUnsignedInteger m_RollAccelerationTemp;
	
	m_RollAccelerationTemp = JSIDL_v_1_0::correctEndianness(m_RollAcceleration);
	memcpy(bytes + pos, &m_RollAccelerationTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_PitchAccelerationTemp;
	
	m_PitchAccelerationTemp = JSIDL_v_1_0::correctEndianness(m_PitchAcceleration);
	memcpy(bytes + pos, &m_PitchAccelerationTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_YawAccelerationTemp;
	
	m_YawAccelerationTemp = JSIDL_v_1_0::correctEndianness(m_YawAcceleration);
	memcpy(bytes + pos, &m_YawAccelerationTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_RotationalAcceleration_RMSTemp;
		
		m_RotationalAcceleration_RMSTemp = JSIDL_v_1_0::correctEndianness(m_RotationalAcceleration_RMS);
		memcpy(bytes + pos, &m_RotationalAcceleration_RMSTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		m_TimeStamp.encode(bytes + pos);
		pos += m_TimeStamp.getSize();
	}
}

void ReportAccelerationState::Body::ReportAccelerationStateRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_PresenceVectorTemp;
	
	memcpy(&m_PresenceVectorTemp, bytes + pos, sizeof(jUnsignedByte));
	m_PresenceVector = JSIDL_v_1_0::correctEndianness(m_PresenceVectorTemp);
	pos += sizeof(jUnsignedByte);
	jUnsignedInteger m_Acceleration_XTemp;
	
	memcpy(&m_Acceleration_XTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_Acceleration_X = JSIDL_v_1_0::correctEndianness(m_Acceleration_XTemp);
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_Acceleration_YTemp;
	
	memcpy(&m_Acceleration_YTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_Acceleration_Y = JSIDL_v_1_0::correctEndianness(m_Acceleration_YTemp);
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_Acceleration_ZTemp;
	
	memcpy(&m_Acceleration_ZTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_Acceleration_Z = JSIDL_v_1_0::correctEndianness(m_Acceleration_ZTemp);
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_Acceleration_RMSTemp;
		
		memcpy(&m_Acceleration_RMSTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Acceleration_RMS = JSIDL_v_1_0::correctEndianness(m_Acceleration_RMSTemp);
		pos += sizeof(jUnsignedInteger);
	}
	jUnsignedInteger m_RollAccelerationTemp;
	
	memcpy(&m_RollAccelerationTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_RollAcceleration = JSIDL_v_1_0::correctEndianness(m_RollAccelerationTemp);
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_PitchAccelerationTemp;
	
	memcpy(&m_PitchAccelerationTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_PitchAcceleration = JSIDL_v_1_0::correctEndianness(m_PitchAccelerationTemp);
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_YawAccelerationTemp;
	
	memcpy(&m_YawAccelerationTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_YawAcceleration = JSIDL_v_1_0::correctEndianness(m_YawAccelerationTemp);
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_RotationalAcceleration_RMSTemp;
		
		memcpy(&m_RotationalAcceleration_RMSTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_RotationalAcceleration_RMS = JSIDL_v_1_0::correctEndianness(m_RotationalAcceleration_RMSTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		m_TimeStamp.decode(bytes + pos);
		pos += m_TimeStamp.getSize();
	}
}

ReportAccelerationState::Body::ReportAccelerationStateRec &ReportAccelerationState::Body::ReportAccelerationStateRec::operator=(const ReportAccelerationStateRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_Acceleration_X = value.m_Acceleration_X;
	m_Acceleration_Y = value.m_Acceleration_Y;
	m_Acceleration_Z = value.m_Acceleration_Z;
	m_Acceleration_RMS = value.m_Acceleration_RMS;
	m_RollAcceleration = value.m_RollAcceleration;
	m_PitchAcceleration = value.m_PitchAcceleration;
	m_YawAcceleration = value.m_YawAcceleration;
	m_RotationalAcceleration_RMS = value.m_RotationalAcceleration_RMS;
	m_TimeStamp = value.m_TimeStamp;
	
	return *this;
}

bool ReportAccelerationState::Body::ReportAccelerationStateRec::operator==(const ReportAccelerationStateRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_Acceleration_X != value.m_Acceleration_X)
	{
		return false;
	}
	if (m_Acceleration_Y != value.m_Acceleration_Y)
	{
		return false;
	}
	if (m_Acceleration_Z != value.m_Acceleration_Z)
	{
		return false;
	}
	if (m_Acceleration_RMS != value.m_Acceleration_RMS)
	{
		return false;
	}
	if (m_RollAcceleration != value.m_RollAcceleration)
	{
		return false;
	}
	if (m_PitchAcceleration != value.m_PitchAcceleration)
	{
		return false;
	}
	if (m_YawAcceleration != value.m_YawAcceleration)
	{
		return false;
	}
	if (m_RotationalAcceleration_RMS != value.m_RotationalAcceleration_RMS)
	{
		return false;
	}
	
	if (m_TimeStamp != value.m_TimeStamp)
	{
		return false;
	}
	
	return true;
}

bool ReportAccelerationState::Body::ReportAccelerationStateRec::operator!=(const ReportAccelerationStateRec &value) const
{
	return !((*this) == value);
}

ReportAccelerationState::Body::ReportAccelerationStateRec::ReportAccelerationStateRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Acceleration_X = 0;
	m_Acceleration_Y = 0;
	m_Acceleration_Z = 0;
	m_Acceleration_RMS = 0;
	m_RollAcceleration = 0;
	m_PitchAcceleration = 0;
	m_YawAcceleration = 0;
	m_RotationalAcceleration_RMS = 0;
	m_TimeStamp.setParent(this);
}

ReportAccelerationState::Body::ReportAccelerationStateRec::ReportAccelerationStateRec(const ReportAccelerationStateRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Acceleration_X = 0;
	m_Acceleration_Y = 0;
	m_Acceleration_Z = 0;
	m_Acceleration_RMS = 0;
	m_RollAcceleration = 0;
	m_PitchAcceleration = 0;
	m_YawAcceleration = 0;
	m_RotationalAcceleration_RMS = 0;
	m_TimeStamp.setParent(this);
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_Acceleration_X = value.m_Acceleration_X;
	m_Acceleration_Y = value.m_Acceleration_Y;
	m_Acceleration_Z = value.m_Acceleration_Z;
	m_Acceleration_RMS = value.m_Acceleration_RMS;
	m_RollAcceleration = value.m_RollAcceleration;
	m_PitchAcceleration = value.m_PitchAcceleration;
	m_YawAcceleration = value.m_YawAcceleration;
	m_RotationalAcceleration_RMS = value.m_RotationalAcceleration_RMS;
	m_TimeStamp = value.m_TimeStamp;
}

ReportAccelerationState::Body::ReportAccelerationStateRec::~ReportAccelerationStateRec()
{
}

ReportAccelerationState::Body::ReportAccelerationStateRec* const ReportAccelerationState::Body::getReportAccelerationStateRec()
{
	return &m_ReportAccelerationStateRec;
}

int ReportAccelerationState::Body::setReportAccelerationStateRec(const ReportAccelerationStateRec &value)
{
	m_ReportAccelerationStateRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportAccelerationState::Body::setParentPresenceVector()
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
const unsigned int ReportAccelerationState::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_ReportAccelerationStateRec.getSize();
	
	return size;
}

void ReportAccelerationState::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ReportAccelerationStateRec.encode(bytes + pos);
	pos += m_ReportAccelerationStateRec.getSize();
}

void ReportAccelerationState::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ReportAccelerationStateRec.decode(bytes + pos);
	pos += m_ReportAccelerationStateRec.getSize();
}

ReportAccelerationState::Body &ReportAccelerationState::Body::operator=(const Body &value)
{
	m_ReportAccelerationStateRec = value.m_ReportAccelerationStateRec;
	m_ReportAccelerationStateRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportAccelerationState::Body::operator==(const Body &value) const
{
	if (m_ReportAccelerationStateRec != value.m_ReportAccelerationStateRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportAccelerationState::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportAccelerationState::Body::Body()
{
	m_ReportAccelerationStateRec.setParent(this);
	/// No Initialization of m_ReportAccelerationStateRec necessary.
}

ReportAccelerationState::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_ReportAccelerationStateRec.setParent(this);
	/// No Initialization of m_ReportAccelerationStateRec necessary.
	
	/// Copy the values
	m_ReportAccelerationStateRec = value.m_ReportAccelerationStateRec;
	m_ReportAccelerationStateRec.setParent(this);
	/// This code is currently not supported
}

ReportAccelerationState::Body::~Body()
{
}

ReportAccelerationState::Body* const ReportAccelerationState::getBody()
{
	return &m_Body;
}

int ReportAccelerationState::setBody(const Body &value)
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
const unsigned int ReportAccelerationState::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportAccelerationState::encode(unsigned char *bytes)
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

void ReportAccelerationState::decode(const unsigned char *bytes)
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

ReportAccelerationState &ReportAccelerationState::operator=(const ReportAccelerationState &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportAccelerationState::operator==(const ReportAccelerationState &value) const
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

bool ReportAccelerationState::operator!=(const ReportAccelerationState &value) const
{
	return !((*this) == value);
}

ReportAccelerationState::ReportAccelerationState()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportAccelerationState::ReportAccelerationState(const ReportAccelerationState &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportAccelerationState::~ReportAccelerationState()
{
}


}
