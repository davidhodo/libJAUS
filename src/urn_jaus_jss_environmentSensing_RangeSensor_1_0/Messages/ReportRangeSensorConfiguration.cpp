#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/ReportRangeSensorConfiguration.h"

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

void ReportRangeSensorConfiguration::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportRangeSensorConfiguration::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportRangeSensorConfiguration::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportRangeSensorConfiguration::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportRangeSensorConfiguration::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportRangeSensorConfiguration::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportRangeSensorConfiguration::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportRangeSensorConfiguration::AppHeader::HeaderRec &ReportRangeSensorConfiguration::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportRangeSensorConfiguration::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorConfiguration::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorConfiguration::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4802;
}

ReportRangeSensorConfiguration::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4802;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportRangeSensorConfiguration::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportRangeSensorConfiguration::AppHeader::HeaderRec* const ReportRangeSensorConfiguration::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportRangeSensorConfiguration::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorConfiguration::AppHeader::setParentPresenceVector()
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
const unsigned int ReportRangeSensorConfiguration::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportRangeSensorConfiguration::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportRangeSensorConfiguration::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportRangeSensorConfiguration::AppHeader &ReportRangeSensorConfiguration::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportRangeSensorConfiguration::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportRangeSensorConfiguration::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportRangeSensorConfiguration::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportRangeSensorConfiguration::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportRangeSensorConfiguration::AppHeader::~AppHeader()
{
}

ReportRangeSensorConfiguration::AppHeader* const ReportRangeSensorConfiguration::getAppHeader()
{
	return &m_AppHeader;
}

int ReportRangeSensorConfiguration::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setParent(RangeSensorConfigurationList* parent)
{
	m_parent = parent;
}

void ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedShortInteger)pvBitSet.to_ulong();
	return 0;
}

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

jUnsignedShortInteger ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getSensorID()
{
	return m_SensorID;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::isHorizontalFieldOfViewStartAngleValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getHorizontalFieldOfViewStartAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_HorizontalFieldOfViewStartAngle * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setHorizontalFieldOfViewStartAngle(double value)
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

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::isHorizontalFieldOfViewStopAngleValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getHorizontalFieldOfViewStopAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_HorizontalFieldOfViewStopAngle * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setHorizontalFieldOfViewStopAngle(double value)
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

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::isVerticalFieldOfViewStartAngleValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getVerticalFieldOfViewStartAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_VerticalFieldOfViewStartAngle * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setVerticalFieldOfViewStartAngle(double value)
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

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::isVerticalFieldOfViewStopAngleValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getVerticalFieldOfViewStopAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_VerticalFieldOfViewStopAngle * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setVerticalFieldOfViewStopAngle(double value)
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

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::isUpdateRateValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getUpdateRate()
{
	double value;
	
	double scaleFactor = ( 1000 - 0 ) / 65535.0;
	double bias = 0;
	
	value = m_UpdateRate * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setUpdateRate(double value)
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

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::isMinimumRangeValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getMinimumRange()
{
	double value;
	
	double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_MinimumRange * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setMinimumRange(double value)
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

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::isMaximumRangeValid() const
{
	if (checkPresenceVector(6))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getMaximumRange()
{
	double value;
	
	double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_MaximumRange * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setMaximumRange(double value)
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

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::isSensorStateValid() const
{
	if (checkPresenceVector(7))
	{
		return true;
	}
	return false;
}

jUnsignedByte ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getSensorState()
{
	return m_SensorState;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::setSensorState(jUnsignedByte value)
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
const unsigned int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::getSize()
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

void ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::encode(unsigned char *bytes)
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

void ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::decode(const unsigned char *bytes)
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

ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec &ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::operator=(const RangeSensorConfigurationRec &value)
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

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::operator==(const RangeSensorConfigurationRec &value) const
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

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::operator!=(const RangeSensorConfigurationRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::RangeSensorConfigurationRec()
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

ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::RangeSensorConfigurationRec(const RangeSensorConfigurationRec &value)
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

ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec::~RangeSensorConfigurationRec()
{
}

unsigned int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::getNumberOfElements() const
{
	return (unsigned int) m_RangeSensorConfigurationRec.size();
}

ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationRec* const ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::getElement(unsigned int index)
{
	return &m_RangeSensorConfigurationRec.at(index);
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::setElement(unsigned int index, const RangeSensorConfigurationRec &value)
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

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::addElement(const RangeSensorConfigurationRec &value)
{
	m_RangeSensorConfigurationRec.push_back(value);
	m_RangeSensorConfigurationRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::deleteElement(unsigned int index)
{
	if(m_RangeSensorConfigurationRec.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorConfigurationRec.erase(m_RangeSensorConfigurationRec.begin()+index);
	return 0;
}

int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::deleteLastElement()
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
const unsigned int ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_RangeSensorConfigurationRec.size(); i++)
	{
		size += m_RangeSensorConfigurationRec[i].getSize();
	}
	
	return size;
}

void ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::encode(unsigned char *bytes)
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

void ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::decode(const unsigned char *bytes)
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

ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList &ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::operator=(const RangeSensorConfigurationList &value)
{
	m_RangeSensorConfigurationRec.clear();
	
	for (int i = 0; i < value.m_RangeSensorConfigurationRec.size(); i++)
	{
		m_RangeSensorConfigurationRec.push_back(value.m_RangeSensorConfigurationRec[i]);
		m_RangeSensorConfigurationRec[i].setParent(this);
	}
	
	return *this;
}

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::operator==(const RangeSensorConfigurationList &value) const
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

bool ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::operator!=(const RangeSensorConfigurationList &value) const
{
	return !((*this) == value);
}

ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorConfigurationRec.size(); i++)
	{
		m_RangeSensorConfigurationRec[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorConfigurationRec necessary.
}

ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationList(const RangeSensorConfigurationList &value)
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

ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList::~RangeSensorConfigurationList()
{
}

ReportRangeSensorConfiguration::Body::RangeSensorConfigurationList* const ReportRangeSensorConfiguration::Body::getRangeSensorConfigurationList()
{
	return &m_RangeSensorConfigurationList;
}

int ReportRangeSensorConfiguration::Body::setRangeSensorConfigurationList(const RangeSensorConfigurationList &value)
{
	m_RangeSensorConfigurationList = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorConfiguration::Body::setParentPresenceVector()
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
const unsigned int ReportRangeSensorConfiguration::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_RangeSensorConfigurationList.getSize();
	
	return size;
}

void ReportRangeSensorConfiguration::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorConfigurationList.encode(bytes + pos);
	pos += m_RangeSensorConfigurationList.getSize();
}

void ReportRangeSensorConfiguration::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorConfigurationList.decode(bytes + pos);
	pos += m_RangeSensorConfigurationList.getSize();
}

ReportRangeSensorConfiguration::Body &ReportRangeSensorConfiguration::Body::operator=(const Body &value)
{
	m_RangeSensorConfigurationList = value.m_RangeSensorConfigurationList;
	m_RangeSensorConfigurationList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportRangeSensorConfiguration::Body::operator==(const Body &value) const
{
	if (m_RangeSensorConfigurationList != value.m_RangeSensorConfigurationList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportRangeSensorConfiguration::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportRangeSensorConfiguration::Body::Body()
{
	m_RangeSensorConfigurationList.setParent(this);
	/// No Initialization of m_RangeSensorConfigurationList necessary.
}

ReportRangeSensorConfiguration::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_RangeSensorConfigurationList.setParent(this);
	/// No Initialization of m_RangeSensorConfigurationList necessary.
	
	/// Copy the values
	m_RangeSensorConfigurationList = value.m_RangeSensorConfigurationList;
	m_RangeSensorConfigurationList.setParent(this);
	/// This code is currently not supported
}

ReportRangeSensorConfiguration::Body::~Body()
{
}

ReportRangeSensorConfiguration::Body* const ReportRangeSensorConfiguration::getBody()
{
	return &m_Body;
}

int ReportRangeSensorConfiguration::setBody(const Body &value)
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
const unsigned int ReportRangeSensorConfiguration::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportRangeSensorConfiguration::encode(unsigned char *bytes)
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

void ReportRangeSensorConfiguration::decode(const unsigned char *bytes)
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

ReportRangeSensorConfiguration &ReportRangeSensorConfiguration::operator=(const ReportRangeSensorConfiguration &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportRangeSensorConfiguration::operator==(const ReportRangeSensorConfiguration &value) const
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

bool ReportRangeSensorConfiguration::operator!=(const ReportRangeSensorConfiguration &value) const
{
	return !((*this) == value);
}

ReportRangeSensorConfiguration::ReportRangeSensorConfiguration()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportRangeSensorConfiguration::ReportRangeSensorConfiguration(const ReportRangeSensorConfiguration &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportRangeSensorConfiguration::~ReportRangeSensorConfiguration()
{
}


}
