#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/SetRangeSensorConfiguration.h"

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

void SetRangeSensorConfiguration::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void SetRangeSensorConfiguration::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetRangeSensorConfiguration::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int SetRangeSensorConfiguration::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int SetRangeSensorConfiguration::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void SetRangeSensorConfiguration::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void SetRangeSensorConfiguration::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

SetRangeSensorConfiguration::AppHeader::HeaderRec &SetRangeSensorConfiguration::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool SetRangeSensorConfiguration::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool SetRangeSensorConfiguration::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

SetRangeSensorConfiguration::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x0802;
}

SetRangeSensorConfiguration::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x0802;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

SetRangeSensorConfiguration::AppHeader::HeaderRec::~HeaderRec()
{
}

SetRangeSensorConfiguration::AppHeader::HeaderRec* const SetRangeSensorConfiguration::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int SetRangeSensorConfiguration::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void SetRangeSensorConfiguration::AppHeader::setParentPresenceVector()
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
const unsigned int SetRangeSensorConfiguration::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void SetRangeSensorConfiguration::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void SetRangeSensorConfiguration::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

SetRangeSensorConfiguration::AppHeader &SetRangeSensorConfiguration::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool SetRangeSensorConfiguration::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool SetRangeSensorConfiguration::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

SetRangeSensorConfiguration::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

SetRangeSensorConfiguration::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

SetRangeSensorConfiguration::AppHeader::~AppHeader()
{
}

SetRangeSensorConfiguration::AppHeader* const SetRangeSensorConfiguration::getAppHeader()
{
	return &m_AppHeader;
}

int SetRangeSensorConfiguration::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::setParent(Body* parent)
{
	m_parent = parent;
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::setParent(RangeSensorConfigurationSequence* parent)
{
	m_parent = parent;
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::getRequestID()
{
	return m_RequestID;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::setRequestID(jUnsignedByte value)
{
	m_RequestID = value;
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
const unsigned int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	return size;
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_RequestIDTemp;
	
	m_RequestIDTemp = JSIDL_v_1_0::correctEndianness(m_RequestID);
	memcpy(bytes + pos, &m_RequestIDTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_RequestIDTemp;
	
	memcpy(&m_RequestIDTemp, bytes + pos, sizeof(jUnsignedByte));
	m_RequestID = JSIDL_v_1_0::correctEndianness(m_RequestIDTemp);
	pos += sizeof(jUnsignedByte);
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec &SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::operator=(const RequestIdRec &value)
{
	m_RequestID = value.m_RequestID;
	
	return *this;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::operator==(const RequestIdRec &value) const
{
	if (m_RequestID != value.m_RequestID)
	{
		return false;
	}
	
	return true;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::operator!=(const RequestIdRec &value) const
{
	return !((*this) == value);
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::RequestIdRec()
{
	m_parent = NULL;
	m_RequestID = 0;
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::RequestIdRec(const RequestIdRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_RequestID = 0;
	
	/// Copy the values
	m_RequestID = value.m_RequestID;
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec::~RequestIdRec()
{
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RequestIdRec* const SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::getRequestIdRec()
{
	return &m_RequestIdRec;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::setRequestIdRec(const RequestIdRec &value)
{
	m_RequestIdRec = value;
	setParentPresenceVector();
	return 0;
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::setParent(RangeSensorConfigurationSequence* parent)
{
	m_parent = parent;
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setParent(RangeSensorConfigurationList* parent)
{
	m_parent = parent;
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getPresenceVector()
{
	return m_PresenceVector;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedShortInteger)pvBitSet.to_ulong();
	return 0;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

jUnsignedShortInteger SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getSensorID()
{
	return m_SensorID;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::isHorizontalFieldOfViewStartAngleValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

double SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getHorizontalFieldOfViewStartAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_HorizontalFieldOfViewStartAngle * scaleFactor + bias;
	
	return value;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setHorizontalFieldOfViewStartAngle(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
		double bias = -3.141592653589793;
		
		m_HorizontalFieldOfViewStartAngle= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(0);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::isHorizontalFieldOfViewStopAngleValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getHorizontalFieldOfViewStopAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_HorizontalFieldOfViewStopAngle * scaleFactor + bias;
	
	return value;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setHorizontalFieldOfViewStopAngle(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
		double bias = -3.141592653589793;
		
		m_HorizontalFieldOfViewStopAngle= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::isVerticalFieldOfViewStartAngleValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getVerticalFieldOfViewStartAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_VerticalFieldOfViewStartAngle * scaleFactor + bias;
	
	return value;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setVerticalFieldOfViewStartAngle(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
		double bias = -3.141592653589793;
		
		m_VerticalFieldOfViewStartAngle= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(2);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::isVerticalFieldOfViewStopAngleValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getVerticalFieldOfViewStopAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_VerticalFieldOfViewStopAngle * scaleFactor + bias;
	
	return value;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setVerticalFieldOfViewStopAngle(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
		double bias = -3.141592653589793;
		
		m_VerticalFieldOfViewStopAngle= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::isUpdateRateValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getUpdateRate()
{
	double value;
	
	double scaleFactor = ( 1000 - 0 ) / 65535.0;
	double bias = 0;
	
	value = m_UpdateRate * scaleFactor + bias;
	
	return value;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setUpdateRate(double value)
{
	if ((value >= 0) && (value <= 1000))
	{
		double scaleFactor = ( 1000 - 0 ) / 65535.0;
		double bias = 0;
		
		m_UpdateRate= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(4);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::isMinimumRangeValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

double SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getMinimumRange()
{
	double value;
	
	double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_MinimumRange * scaleFactor + bias;
	
	return value;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setMinimumRange(double value)
{
	if ((value >= 0) && (value <= 1000000.0))
	{
		double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
		double bias = 0;
		
		m_MinimumRange= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(5);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::isMaximumRangeValid() const
{
	if (checkPresenceVector(6))
	{
		return true;
	}
	return false;
}

double SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getMaximumRange()
{
	double value;
	
	double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_MaximumRange * scaleFactor + bias;
	
	return value;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setMaximumRange(double value)
{
	if ((value >= 0) && (value <= 1000000.0))
	{
		double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
		double bias = 0;
		
		m_MaximumRange= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(6);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::isSensorStateValid() const
{
	if (checkPresenceVector(7))
	{
		return true;
	}
	return false;
}

jUnsignedByte SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getSensorState()
{
	return m_SensorState;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::setSensorState(jUnsignedByte value)
{
	if ((value == 0) || (value == 1) || (value == 2))
	{
		m_SensorState = value;
		setPresenceVector(7);
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
const unsigned int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
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
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(6))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(7))
	{
		size += sizeof(jUnsignedByte);
	}
	
	return size;
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::encode(unsigned char *bytes)
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
	jUnsignedShortInteger m_SensorIDTemp;
	
	m_SensorIDTemp = JSIDL_v_1_0::correctEndianness(m_SensorID);
	memcpy(bytes + pos, &m_SensorIDTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_HorizontalFieldOfViewStartAngleTemp;
		
		m_HorizontalFieldOfViewStartAngleTemp = JSIDL_v_1_0::correctEndianness(m_HorizontalFieldOfViewStartAngle);
		memcpy(bytes + pos, &m_HorizontalFieldOfViewStartAngleTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedInteger m_HorizontalFieldOfViewStopAngleTemp;
		
		m_HorizontalFieldOfViewStopAngleTemp = JSIDL_v_1_0::correctEndianness(m_HorizontalFieldOfViewStopAngle);
		memcpy(bytes + pos, &m_HorizontalFieldOfViewStopAngleTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_VerticalFieldOfViewStartAngleTemp;
		
		m_VerticalFieldOfViewStartAngleTemp = JSIDL_v_1_0::correctEndianness(m_VerticalFieldOfViewStartAngle);
		memcpy(bytes + pos, &m_VerticalFieldOfViewStartAngleTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedInteger m_VerticalFieldOfViewStopAngleTemp;
		
		m_VerticalFieldOfViewStopAngleTemp = JSIDL_v_1_0::correctEndianness(m_VerticalFieldOfViewStopAngle);
		memcpy(bytes + pos, &m_VerticalFieldOfViewStopAngleTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedShortInteger m_UpdateRateTemp;
		
		m_UpdateRateTemp = JSIDL_v_1_0::correctEndianness(m_UpdateRate);
		memcpy(bytes + pos, &m_UpdateRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedInteger m_MinimumRangeTemp;
		
		m_MinimumRangeTemp = JSIDL_v_1_0::correctEndianness(m_MinimumRange);
		memcpy(bytes + pos, &m_MinimumRangeTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedInteger m_MaximumRangeTemp;
		
		m_MaximumRangeTemp = JSIDL_v_1_0::correctEndianness(m_MaximumRange);
		memcpy(bytes + pos, &m_MaximumRangeTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedByte m_SensorStateTemp;
		
		m_SensorStateTemp = JSIDL_v_1_0::correctEndianness(m_SensorState);
		memcpy(bytes + pos, &m_SensorStateTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::decode(const unsigned char *bytes)
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
	jUnsignedShortInteger m_SensorIDTemp;
	
	memcpy(&m_SensorIDTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_SensorID = JSIDL_v_1_0::correctEndianness(m_SensorIDTemp);
	pos += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_HorizontalFieldOfViewStartAngleTemp;
		
		memcpy(&m_HorizontalFieldOfViewStartAngleTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_HorizontalFieldOfViewStartAngle = JSIDL_v_1_0::correctEndianness(m_HorizontalFieldOfViewStartAngleTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedInteger m_HorizontalFieldOfViewStopAngleTemp;
		
		memcpy(&m_HorizontalFieldOfViewStopAngleTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_HorizontalFieldOfViewStopAngle = JSIDL_v_1_0::correctEndianness(m_HorizontalFieldOfViewStopAngleTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_VerticalFieldOfViewStartAngleTemp;
		
		memcpy(&m_VerticalFieldOfViewStartAngleTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_VerticalFieldOfViewStartAngle = JSIDL_v_1_0::correctEndianness(m_VerticalFieldOfViewStartAngleTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedInteger m_VerticalFieldOfViewStopAngleTemp;
		
		memcpy(&m_VerticalFieldOfViewStopAngleTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_VerticalFieldOfViewStopAngle = JSIDL_v_1_0::correctEndianness(m_VerticalFieldOfViewStopAngleTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedShortInteger m_UpdateRateTemp;
		
		memcpy(&m_UpdateRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_UpdateRate = JSIDL_v_1_0::correctEndianness(m_UpdateRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedInteger m_MinimumRangeTemp;
		
		memcpy(&m_MinimumRangeTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_MinimumRange = JSIDL_v_1_0::correctEndianness(m_MinimumRangeTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedInteger m_MaximumRangeTemp;
		
		memcpy(&m_MaximumRangeTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_MaximumRange = JSIDL_v_1_0::correctEndianness(m_MaximumRangeTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedByte m_SensorStateTemp;
		
		memcpy(&m_SensorStateTemp, bytes + pos, sizeof(jUnsignedByte));
		m_SensorState = JSIDL_v_1_0::correctEndianness(m_SensorStateTemp);
		pos += sizeof(jUnsignedByte);
	}
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec &SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::operator=(const RangeSensorConfigurationRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_SensorID = value.m_SensorID;
	m_HorizontalFieldOfViewStartAngle = value.m_HorizontalFieldOfViewStartAngle;
	m_HorizontalFieldOfViewStopAngle = value.m_HorizontalFieldOfViewStopAngle;
	m_VerticalFieldOfViewStartAngle = value.m_VerticalFieldOfViewStartAngle;
	m_VerticalFieldOfViewStopAngle = value.m_VerticalFieldOfViewStopAngle;
	m_UpdateRate = value.m_UpdateRate;
	m_MinimumRange = value.m_MinimumRange;
	m_MaximumRange = value.m_MaximumRange;
	m_SensorState = value.m_SensorState;
	
	return *this;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::operator==(const RangeSensorConfigurationRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_SensorID != value.m_SensorID)
	{
		return false;
	}
	if (m_HorizontalFieldOfViewStartAngle != value.m_HorizontalFieldOfViewStartAngle)
	{
		return false;
	}
	if (m_HorizontalFieldOfViewStopAngle != value.m_HorizontalFieldOfViewStopAngle)
	{
		return false;
	}
	if (m_VerticalFieldOfViewStartAngle != value.m_VerticalFieldOfViewStartAngle)
	{
		return false;
	}
	if (m_VerticalFieldOfViewStopAngle != value.m_VerticalFieldOfViewStopAngle)
	{
		return false;
	}
	if (m_UpdateRate != value.m_UpdateRate)
	{
		return false;
	}
	if (m_MinimumRange != value.m_MinimumRange)
	{
		return false;
	}
	if (m_MaximumRange != value.m_MaximumRange)
	{
		return false;
	}
	if (m_SensorState != value.m_SensorState)
	{
		return false;
	}
	
	return true;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::operator!=(const RangeSensorConfigurationRec &value) const
{
	return !((*this) == value);
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::RangeSensorConfigurationRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_SensorID = 0;
	m_HorizontalFieldOfViewStartAngle = 0;
	m_HorizontalFieldOfViewStopAngle = 0;
	m_VerticalFieldOfViewStartAngle = 0;
	m_VerticalFieldOfViewStopAngle = 0;
	m_UpdateRate = 0;
	m_MinimumRange = 0;
	m_MaximumRange = 0;
	m_SensorState = 0;
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::RangeSensorConfigurationRec(const RangeSensorConfigurationRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_SensorID = 0;
	m_HorizontalFieldOfViewStartAngle = 0;
	m_HorizontalFieldOfViewStopAngle = 0;
	m_VerticalFieldOfViewStartAngle = 0;
	m_VerticalFieldOfViewStopAngle = 0;
	m_UpdateRate = 0;
	m_MinimumRange = 0;
	m_MaximumRange = 0;
	m_SensorState = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_SensorID = value.m_SensorID;
	m_HorizontalFieldOfViewStartAngle = value.m_HorizontalFieldOfViewStartAngle;
	m_HorizontalFieldOfViewStopAngle = value.m_HorizontalFieldOfViewStopAngle;
	m_VerticalFieldOfViewStartAngle = value.m_VerticalFieldOfViewStartAngle;
	m_VerticalFieldOfViewStopAngle = value.m_VerticalFieldOfViewStopAngle;
	m_UpdateRate = value.m_UpdateRate;
	m_MinimumRange = value.m_MinimumRange;
	m_MaximumRange = value.m_MaximumRange;
	m_SensorState = value.m_SensorState;
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec::~RangeSensorConfigurationRec()
{
}

unsigned int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::getNumberOfElements() const
{
	return (unsigned int) m_RangeSensorConfigurationRec.size();
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationRec* const SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::getElement(unsigned int index)
{
	return &m_RangeSensorConfigurationRec.at(index);
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::setElement(unsigned int index, const RangeSensorConfigurationRec &value)
{
	if(m_RangeSensorConfigurationRec.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorConfigurationRec.at(index) = value;
	m_RangeSensorConfigurationRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::addElement(const RangeSensorConfigurationRec &value)
{
	m_RangeSensorConfigurationRec.push_back(value);
	m_RangeSensorConfigurationRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::deleteElement(unsigned int index)
{
	if(m_RangeSensorConfigurationRec.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorConfigurationRec.erase(m_RangeSensorConfigurationRec.begin()+index);
	return 0;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::deleteLastElement()
{
	m_RangeSensorConfigurationRec.pop_back();
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
const unsigned int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_RangeSensorConfigurationRec.size(); i++)
	{
		size += m_RangeSensorConfigurationRec[i].getSize();
	}
	
	return size;
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_RangeSensorConfigurationRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_RangeSensorConfigurationRec.size(); i++)
	{
		m_RangeSensorConfigurationRec[i].encode(bytes + pos);
		pos += m_RangeSensorConfigurationRec[i].getSize();
	}
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_RangeSensorConfigurationRec.resize(size);
	for (int i = 0; i < m_RangeSensorConfigurationRec.size(); i++)
	{
		m_RangeSensorConfigurationRec[i].decode(bytes + pos);
		pos += m_RangeSensorConfigurationRec[i].getSize();
	}
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList &SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::operator=(const RangeSensorConfigurationList &value)
{
	m_RangeSensorConfigurationRec.clear();
	
	for (int i = 0; i < value.m_RangeSensorConfigurationRec.size(); i++)
	{
		m_RangeSensorConfigurationRec.push_back(value.m_RangeSensorConfigurationRec[i]);
		m_RangeSensorConfigurationRec[i].setParent(this);
	}
	
	return *this;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::operator==(const RangeSensorConfigurationList &value) const
{
	for (int i = 0; i < m_RangeSensorConfigurationRec.size(); i++)
	{
		if (m_RangeSensorConfigurationRec[i] !=  value.m_RangeSensorConfigurationRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::operator!=(const RangeSensorConfigurationList &value) const
{
	return !((*this) == value);
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorConfigurationRec.size(); i++)
	{
		m_RangeSensorConfigurationRec[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorConfigurationRec necessary.
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::RangeSensorConfigurationList(const RangeSensorConfigurationList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorConfigurationRec.size(); i++)
	{
		m_RangeSensorConfigurationRec[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorConfigurationRec necessary.
	
	/// Copy the values
	m_RangeSensorConfigurationRec.clear();
	
	for (int i = 0; i < value.m_RangeSensorConfigurationRec.size(); i++)
	{
		m_RangeSensorConfigurationRec.push_back(value.m_RangeSensorConfigurationRec[i]);
		m_RangeSensorConfigurationRec[i].setParent(this);
	}
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList::~RangeSensorConfigurationList()
{
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationList* const SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::getRangeSensorConfigurationList()
{
	return &m_RangeSensorConfigurationList;
}

int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::setRangeSensorConfigurationList(const RangeSensorConfigurationList &value)
{
	m_RangeSensorConfigurationList = value;
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
const unsigned int SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::getSize()
{
	unsigned int size = 0;
	
	size += m_RequestIdRec.getSize();
	size += m_RangeSensorConfigurationList.getSize();
	
	return size;
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RequestIdRec.encode(bytes + pos);
	pos += m_RequestIdRec.getSize();
	m_RangeSensorConfigurationList.encode(bytes + pos);
	pos += m_RangeSensorConfigurationList.getSize();
}

void SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RequestIdRec.decode(bytes + pos);
	pos += m_RequestIdRec.getSize();
	m_RangeSensorConfigurationList.decode(bytes + pos);
	pos += m_RangeSensorConfigurationList.getSize();
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence &SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::operator=(const RangeSensorConfigurationSequence &value)
{
	m_RequestIdRec = value.m_RequestIdRec;
	m_RequestIdRec.setParent(this);
	m_RequestIdRec = value.m_RequestIdRec;
	m_RangeSensorConfigurationList = value.m_RangeSensorConfigurationList;
	m_RangeSensorConfigurationList.setParent(this);
	m_RangeSensorConfigurationList = value.m_RangeSensorConfigurationList;
	
	return *this;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::operator==(const RangeSensorConfigurationSequence &value) const
{
	if (m_RequestIdRec != value.m_RequestIdRec)
	{
		return false;
	}
	
	if (m_RequestIdRec != value.m_RequestIdRec)
	{
		return false;
	}
	if (m_RangeSensorConfigurationList != value.m_RangeSensorConfigurationList)
	{
		return false;
	}
	
	if (m_RangeSensorConfigurationList != value.m_RangeSensorConfigurationList)
	{
		return false;
	}
	
	return true;
}

bool SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::operator!=(const RangeSensorConfigurationSequence &value) const
{
	return !((*this) == value);
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationSequence()
{
	m_parent = NULL;
	m_RequestIdRec.setParent(this);
	/// No Initialization of m_RequestIdRec necessary.
	m_RangeSensorConfigurationList.setParent(this);
	/// No Initialization of m_RangeSensorConfigurationList necessary.
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::RangeSensorConfigurationSequence(const RangeSensorConfigurationSequence &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_RequestIdRec.setParent(this);
	/// No Initialization of m_RequestIdRec necessary.
	m_RangeSensorConfigurationList.setParent(this);
	/// No Initialization of m_RangeSensorConfigurationList necessary.
	
	/// Copy the values
	m_RequestIdRec = value.m_RequestIdRec;
	m_RequestIdRec.setParent(this);
	m_RequestIdRec = value.m_RequestIdRec;
	m_RangeSensorConfigurationList = value.m_RangeSensorConfigurationList;
	m_RangeSensorConfigurationList.setParent(this);
	m_RangeSensorConfigurationList = value.m_RangeSensorConfigurationList;
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence::~RangeSensorConfigurationSequence()
{
}

SetRangeSensorConfiguration::Body::RangeSensorConfigurationSequence* const SetRangeSensorConfiguration::Body::getRangeSensorConfigurationSequence()
{
	return &m_RangeSensorConfigurationSequence;
}

int SetRangeSensorConfiguration::Body::setRangeSensorConfigurationSequence(const RangeSensorConfigurationSequence &value)
{
	m_RangeSensorConfigurationSequence = value;
	setParentPresenceVector();
	return 0;
}

void SetRangeSensorConfiguration::Body::setParentPresenceVector()
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
const unsigned int SetRangeSensorConfiguration::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_RangeSensorConfigurationSequence.getSize();
	
	return size;
}

void SetRangeSensorConfiguration::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorConfigurationSequence.encode(bytes + pos);
	pos += m_RangeSensorConfigurationSequence.getSize();
}

void SetRangeSensorConfiguration::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorConfigurationSequence.decode(bytes + pos);
	pos += m_RangeSensorConfigurationSequence.getSize();
}

SetRangeSensorConfiguration::Body &SetRangeSensorConfiguration::Body::operator=(const Body &value)
{
	m_RangeSensorConfigurationSequence = value.m_RangeSensorConfigurationSequence;
	m_RangeSensorConfigurationSequence.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool SetRangeSensorConfiguration::Body::operator==(const Body &value) const
{
	if (m_RangeSensorConfigurationSequence != value.m_RangeSensorConfigurationSequence)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool SetRangeSensorConfiguration::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

SetRangeSensorConfiguration::Body::Body()
{
	m_RangeSensorConfigurationSequence.setParent(this);
	/// No Initialization of m_RangeSensorConfigurationSequence necessary.
}

SetRangeSensorConfiguration::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_RangeSensorConfigurationSequence.setParent(this);
	/// No Initialization of m_RangeSensorConfigurationSequence necessary.
	
	/// Copy the values
	m_RangeSensorConfigurationSequence = value.m_RangeSensorConfigurationSequence;
	m_RangeSensorConfigurationSequence.setParent(this);
	/// This code is currently not supported
}

SetRangeSensorConfiguration::Body::~Body()
{
}

SetRangeSensorConfiguration::Body* const SetRangeSensorConfiguration::getBody()
{
	return &m_Body;
}

int SetRangeSensorConfiguration::setBody(const Body &value)
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
const unsigned int SetRangeSensorConfiguration::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void SetRangeSensorConfiguration::encode(unsigned char *bytes)
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

void SetRangeSensorConfiguration::decode(const unsigned char *bytes)
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

SetRangeSensorConfiguration &SetRangeSensorConfiguration::operator=(const SetRangeSensorConfiguration &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool SetRangeSensorConfiguration::operator==(const SetRangeSensorConfiguration &value) const
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

bool SetRangeSensorConfiguration::operator!=(const SetRangeSensorConfiguration &value) const
{
	return !((*this) == value);
}

SetRangeSensorConfiguration::SetRangeSensorConfiguration()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

SetRangeSensorConfiguration::SetRangeSensorConfiguration(const SetRangeSensorConfiguration &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

SetRangeSensorConfiguration::~SetRangeSensorConfiguration()
{
}


}
