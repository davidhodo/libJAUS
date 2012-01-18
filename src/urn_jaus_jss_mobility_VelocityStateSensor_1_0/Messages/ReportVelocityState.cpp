#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/Messages/ReportVelocityState.h"

namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{

void ReportVelocityState::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportVelocityState::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportVelocityState::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportVelocityState::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportVelocityState::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportVelocityState::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportVelocityState::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportVelocityState::AppHeader::HeaderRec &ReportVelocityState::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportVelocityState::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportVelocityState::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportVelocityState::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4404;
}

ReportVelocityState::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4404;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportVelocityState::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportVelocityState::AppHeader::HeaderRec* const ReportVelocityState::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportVelocityState::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportVelocityState::AppHeader::setParentPresenceVector()
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
const unsigned int ReportVelocityState::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportVelocityState::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportVelocityState::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportVelocityState::AppHeader &ReportVelocityState::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportVelocityState::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportVelocityState::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportVelocityState::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportVelocityState::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportVelocityState::AppHeader::~AppHeader()
{
}

ReportVelocityState::AppHeader* const ReportVelocityState::getAppHeader()
{
	return &m_AppHeader;
}

int ReportVelocityState::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportVelocityState::Body::ReportVelocityStateRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportVelocityState::Body::ReportVelocityStateRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportVelocityState::Body::ReportVelocityStateRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedShortInteger)pvBitSet.to_ulong();
	return 0;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isVelocity_XValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getVelocity_X()
{
	double value;
	
	double scaleFactor = ( 327.67 - -327.68 ) / 4.294967295E9;
	double bias = -327.68;
	
	value = m_Velocity_X * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setVelocity_X(double value)
{
	if ((value >= -327.68) && (value <= 327.67))
	{
		double scaleFactor = ( 327.67 - -327.68 ) / 4.294967295E9;
		double bias = -327.68;
		
		m_Velocity_X= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(0);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isVelocity_YValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getVelocity_Y()
{
	double value;
	
	double scaleFactor = ( 327.67 - -327.68 ) / 4.294967295E9;
	double bias = -327.68;
	
	value = m_Velocity_Y * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setVelocity_Y(double value)
{
	if ((value >= -327.68) && (value <= 327.67))
	{
		double scaleFactor = ( 327.67 - -327.68 ) / 4.294967295E9;
		double bias = -327.68;
		
		m_Velocity_Y= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isVelocity_ZValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getVelocity_Z()
{
	double value;
	
	double scaleFactor = ( 327.67 - -327.68 ) / 4.294967295E9;
	double bias = -327.68;
	
	value = m_Velocity_Z * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setVelocity_Z(double value)
{
	if ((value >= -327.68) && (value <= 327.67))
	{
		double scaleFactor = ( 327.67 - -327.68 ) / 4.294967295E9;
		double bias = -327.68;
		
		m_Velocity_Z= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(2);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isVelocity_RMSValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getVelocity_RMS()
{
	double value;
	
	double scaleFactor = ( 100 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_Velocity_RMS * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setVelocity_RMS(double value)
{
	if ((value >= 0) && (value <= 100))
	{
		double scaleFactor = ( 100 - 0 ) / 4.294967295E9;
		double bias = 0;
		
		m_Velocity_RMS= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isRollRateValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getRollRate()
{
	double value;
	
	double scaleFactor = ( 32.767 - -32.768 ) / 65535.0;
	double bias = -32.768;
	
	value = m_RollRate * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setRollRate(double value)
{
	if ((value >= -32.768) && (value <= 32.767))
	{
		double scaleFactor = ( 32.767 - -32.768 ) / 65535.0;
		double bias = -32.768;
		
		m_RollRate= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(4);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isPitchRateValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getPitchRate()
{
	double value;
	
	double scaleFactor = ( 32.767 - -32.768 ) / 65535.0;
	double bias = -32.768;
	
	value = m_PitchRate * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setPitchRate(double value)
{
	if ((value >= -32.768) && (value <= 32.767))
	{
		double scaleFactor = ( 32.767 - -32.768 ) / 65535.0;
		double bias = -32.768;
		
		m_PitchRate= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(5);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isYawRateValid() const
{
	if (checkPresenceVector(6))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getYawRate()
{
	double value;
	
	double scaleFactor = ( 32.767 - -32.768 ) / 65535.0;
	double bias = -32.768;
	
	value = m_YawRate * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setYawRate(double value)
{
	if ((value >= -32.768) && (value <= 32.767))
	{
		double scaleFactor = ( 32.767 - -32.768 ) / 65535.0;
		double bias = -32.768;
		
		m_YawRate= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(6);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isRate_RMSValid() const
{
	if (checkPresenceVector(7))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getRate_RMS()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - 0 ) / 65535.0;
	double bias = 0;
	
	value = m_Rate_RMS * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setRate_RMS(double value)
{
	if ((value >= 0) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - 0 ) / 65535.0;
		double bias = 0;
		
		m_Rate_RMS= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(7);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

void ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setParent(ReportVelocityStateRec* parent)
{
	m_parent = parent;
}

void ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setPresenceVector(8);
		m_parent->setParentPresenceVector();
	}
}

jUnsignedInteger ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getSeconds()
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

int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setSeconds(jUnsignedInteger value)
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

jUnsignedInteger ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getMinutes()
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

int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setMinutes(jUnsignedInteger value)
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

jUnsignedInteger ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getHour()
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

int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setHour(jUnsignedInteger value)
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

jUnsignedInteger ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getDay()
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

int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setDay(jUnsignedInteger value)
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

jUnsignedInteger ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getMilliseconds()
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

int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setMilliseconds(jUnsignedInteger value)
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
const unsigned int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedInteger);
	
	return size;
}

void ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::encode(unsigned char *bytes)
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

void ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::decode(const unsigned char *bytes)
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

ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp &ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::operator=(const TimeStamp &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::operator==(const TimeStamp &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::operator!=(const TimeStamp &value) const
{
	return !((*this) == value);
}

ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::TimeStamp()
{
	m_parent = NULL;
	m_SubFields = 0;
}

ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::TimeStamp(const TimeStamp &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::~TimeStamp()
{
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isTimeStampValid() const
{
	if (checkPresenceVector(8))
	{
		return true;
	}
	return false;
}

ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp* const ReportVelocityState::Body::ReportVelocityStateRec::getTimeStamp()
{
	return &m_TimeStamp;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setTimeStamp(const TimeStamp &value)
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
const unsigned int ReportVelocityState::Body::ReportVelocityStateRec::getSize()
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

void ReportVelocityState::Body::ReportVelocityStateRec::encode(unsigned char *bytes)
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
		jUnsignedInteger m_Velocity_XTemp;
		
		m_Velocity_XTemp = JSIDL_v_1_0::correctEndianness(m_Velocity_X);
		memcpy(bytes + pos, &m_Velocity_XTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedInteger m_Velocity_YTemp;
		
		m_Velocity_YTemp = JSIDL_v_1_0::correctEndianness(m_Velocity_Y);
		memcpy(bytes + pos, &m_Velocity_YTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_Velocity_ZTemp;
		
		m_Velocity_ZTemp = JSIDL_v_1_0::correctEndianness(m_Velocity_Z);
		memcpy(bytes + pos, &m_Velocity_ZTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedInteger m_Velocity_RMSTemp;
		
		m_Velocity_RMSTemp = JSIDL_v_1_0::correctEndianness(m_Velocity_RMS);
		memcpy(bytes + pos, &m_Velocity_RMSTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedShortInteger m_RollRateTemp;
		
		m_RollRateTemp = JSIDL_v_1_0::correctEndianness(m_RollRate);
		memcpy(bytes + pos, &m_RollRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedShortInteger m_PitchRateTemp;
		
		m_PitchRateTemp = JSIDL_v_1_0::correctEndianness(m_PitchRate);
		memcpy(bytes + pos, &m_PitchRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedShortInteger m_YawRateTemp;
		
		m_YawRateTemp = JSIDL_v_1_0::correctEndianness(m_YawRate);
		memcpy(bytes + pos, &m_YawRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedShortInteger m_Rate_RMSTemp;
		
		m_Rate_RMSTemp = JSIDL_v_1_0::correctEndianness(m_Rate_RMS);
		memcpy(bytes + pos, &m_Rate_RMSTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(8))
	{
		m_TimeStamp.encode(bytes + pos);
		pos += m_TimeStamp.getSize();
	}
}

void ReportVelocityState::Body::ReportVelocityStateRec::decode(const unsigned char *bytes)
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
		jUnsignedInteger m_Velocity_XTemp;
		
		memcpy(&m_Velocity_XTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Velocity_X = JSIDL_v_1_0::correctEndianness(m_Velocity_XTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedInteger m_Velocity_YTemp;
		
		memcpy(&m_Velocity_YTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Velocity_Y = JSIDL_v_1_0::correctEndianness(m_Velocity_YTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_Velocity_ZTemp;
		
		memcpy(&m_Velocity_ZTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Velocity_Z = JSIDL_v_1_0::correctEndianness(m_Velocity_ZTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedInteger m_Velocity_RMSTemp;
		
		memcpy(&m_Velocity_RMSTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Velocity_RMS = JSIDL_v_1_0::correctEndianness(m_Velocity_RMSTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedShortInteger m_RollRateTemp;
		
		memcpy(&m_RollRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_RollRate = JSIDL_v_1_0::correctEndianness(m_RollRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedShortInteger m_PitchRateTemp;
		
		memcpy(&m_PitchRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_PitchRate = JSIDL_v_1_0::correctEndianness(m_PitchRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedShortInteger m_YawRateTemp;
		
		memcpy(&m_YawRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_YawRate = JSIDL_v_1_0::correctEndianness(m_YawRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedShortInteger m_Rate_RMSTemp;
		
		memcpy(&m_Rate_RMSTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Rate_RMS = JSIDL_v_1_0::correctEndianness(m_Rate_RMSTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(8))
	{
		m_TimeStamp.decode(bytes + pos);
		pos += m_TimeStamp.getSize();
	}
}

ReportVelocityState::Body::ReportVelocityStateRec &ReportVelocityState::Body::ReportVelocityStateRec::operator=(const ReportVelocityStateRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_Velocity_X = value.m_Velocity_X;
	m_Velocity_Y = value.m_Velocity_Y;
	m_Velocity_Z = value.m_Velocity_Z;
	m_Velocity_RMS = value.m_Velocity_RMS;
	m_RollRate = value.m_RollRate;
	m_PitchRate = value.m_PitchRate;
	m_YawRate = value.m_YawRate;
	m_Rate_RMS = value.m_Rate_RMS;
	m_TimeStamp = value.m_TimeStamp;
	
	return *this;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::operator==(const ReportVelocityStateRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_Velocity_X != value.m_Velocity_X)
	{
		return false;
	}
	if (m_Velocity_Y != value.m_Velocity_Y)
	{
		return false;
	}
	if (m_Velocity_Z != value.m_Velocity_Z)
	{
		return false;
	}
	if (m_Velocity_RMS != value.m_Velocity_RMS)
	{
		return false;
	}
	if (m_RollRate != value.m_RollRate)
	{
		return false;
	}
	if (m_PitchRate != value.m_PitchRate)
	{
		return false;
	}
	if (m_YawRate != value.m_YawRate)
	{
		return false;
	}
	if (m_Rate_RMS != value.m_Rate_RMS)
	{
		return false;
	}
	
	if (m_TimeStamp != value.m_TimeStamp)
	{
		return false;
	}
	
	return true;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::operator!=(const ReportVelocityStateRec &value) const
{
	return !((*this) == value);
}

ReportVelocityState::Body::ReportVelocityStateRec::ReportVelocityStateRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Velocity_X = 0;
	m_Velocity_Y = 0;
	m_Velocity_Z = 0;
	m_Velocity_RMS = 0;
	m_RollRate = 0;
	m_PitchRate = 0;
	m_YawRate = 0;
	m_Rate_RMS = 0;
	m_TimeStamp.setParent(this);
}

ReportVelocityState::Body::ReportVelocityStateRec::ReportVelocityStateRec(const ReportVelocityStateRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Velocity_X = 0;
	m_Velocity_Y = 0;
	m_Velocity_Z = 0;
	m_Velocity_RMS = 0;
	m_RollRate = 0;
	m_PitchRate = 0;
	m_YawRate = 0;
	m_Rate_RMS = 0;
	m_TimeStamp.setParent(this);
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_Velocity_X = value.m_Velocity_X;
	m_Velocity_Y = value.m_Velocity_Y;
	m_Velocity_Z = value.m_Velocity_Z;
	m_Velocity_RMS = value.m_Velocity_RMS;
	m_RollRate = value.m_RollRate;
	m_PitchRate = value.m_PitchRate;
	m_YawRate = value.m_YawRate;
	m_Rate_RMS = value.m_Rate_RMS;
	m_TimeStamp = value.m_TimeStamp;
}

ReportVelocityState::Body::ReportVelocityStateRec::~ReportVelocityStateRec()
{
}

ReportVelocityState::Body::ReportVelocityStateRec* const ReportVelocityState::Body::getReportVelocityStateRec()
{
	return &m_ReportVelocityStateRec;
}

int ReportVelocityState::Body::setReportVelocityStateRec(const ReportVelocityStateRec &value)
{
	m_ReportVelocityStateRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportVelocityState::Body::setParentPresenceVector()
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
const unsigned int ReportVelocityState::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_ReportVelocityStateRec.getSize();
	
	return size;
}

void ReportVelocityState::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ReportVelocityStateRec.encode(bytes + pos);
	pos += m_ReportVelocityStateRec.getSize();
}

void ReportVelocityState::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ReportVelocityStateRec.decode(bytes + pos);
	pos += m_ReportVelocityStateRec.getSize();
}

ReportVelocityState::Body &ReportVelocityState::Body::operator=(const Body &value)
{
	m_ReportVelocityStateRec = value.m_ReportVelocityStateRec;
	m_ReportVelocityStateRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportVelocityState::Body::operator==(const Body &value) const
{
	if (m_ReportVelocityStateRec != value.m_ReportVelocityStateRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportVelocityState::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportVelocityState::Body::Body()
{
	m_ReportVelocityStateRec.setParent(this);
	/// No Initialization of m_ReportVelocityStateRec necessary.
}

ReportVelocityState::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_ReportVelocityStateRec.setParent(this);
	/// No Initialization of m_ReportVelocityStateRec necessary.
	
	/// Copy the values
	m_ReportVelocityStateRec = value.m_ReportVelocityStateRec;
	m_ReportVelocityStateRec.setParent(this);
	/// This code is currently not supported
}

ReportVelocityState::Body::~Body()
{
}

ReportVelocityState::Body* const ReportVelocityState::getBody()
{
	return &m_Body;
}

int ReportVelocityState::setBody(const Body &value)
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
const unsigned int ReportVelocityState::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportVelocityState::encode(unsigned char *bytes)
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

void ReportVelocityState::decode(const unsigned char *bytes)
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

ReportVelocityState &ReportVelocityState::operator=(const ReportVelocityState &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportVelocityState::operator==(const ReportVelocityState &value) const
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

bool ReportVelocityState::operator!=(const ReportVelocityState &value) const
{
	return !((*this) == value);
}

ReportVelocityState::ReportVelocityState()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportVelocityState::ReportVelocityState(const ReportVelocityState &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportVelocityState::~ReportVelocityState()
{
}


}
