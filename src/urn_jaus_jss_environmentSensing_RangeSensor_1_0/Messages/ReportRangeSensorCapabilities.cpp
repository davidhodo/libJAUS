#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/ReportRangeSensorCapabilities.h"

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

void ReportRangeSensorCapabilities::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCapabilities::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportRangeSensorCapabilities::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportRangeSensorCapabilities::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportRangeSensorCapabilities::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportRangeSensorCapabilities::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportRangeSensorCapabilities::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportRangeSensorCapabilities::AppHeader::HeaderRec &ReportRangeSensorCapabilities::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportRangeSensorCapabilities::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorCapabilities::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCapabilities::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4801;
}

ReportRangeSensorCapabilities::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4801;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportRangeSensorCapabilities::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportRangeSensorCapabilities::AppHeader::HeaderRec* const ReportRangeSensorCapabilities::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportRangeSensorCapabilities::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorCapabilities::AppHeader::setParentPresenceVector()
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
const unsigned int ReportRangeSensorCapabilities::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportRangeSensorCapabilities::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportRangeSensorCapabilities::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportRangeSensorCapabilities::AppHeader &ReportRangeSensorCapabilities::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportRangeSensorCapabilities::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportRangeSensorCapabilities::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCapabilities::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportRangeSensorCapabilities::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportRangeSensorCapabilities::AppHeader::~AppHeader()
{
}

ReportRangeSensorCapabilities::AppHeader* const ReportRangeSensorCapabilities::getAppHeader()
{
	return &m_AppHeader;
}

int ReportRangeSensorCapabilities::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setParent(RangeSensorCapabilitiesList* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedShortInteger)pvBitSet.to_ulong();
	return 0;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

jUnsignedShortInteger ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getSensorID()
{
	return m_SensorID;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jVariableLengthString ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getSensorName()
{
	return m_SensorName;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setSensorName(jVariableLengthString value)
{
	if ( value.length() > 255)
	{
		return 1;
	}
	
	m_SensorName = value;
	if (m_SensorName.length() < 0)
	{
		m_SensorName.resize(0);
	}
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::setParent(RangeSensorCapabilitiesRec* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setPresenceVector(0);
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::getActive()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 0; index <= 0; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::setActive(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 0; index <= 0; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::getStandby()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 1; index <= 1; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::setStandby(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 1; index <= 1; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::getOff()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 2; index <= 2; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::setOff(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 2; index <= 2; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
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
const unsigned int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	return size;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_SubFieldsTemp;
	
	m_SubFieldsTemp = JSIDL_v_1_0::correctEndianness(m_SubFields);
	memcpy(bytes + pos, &m_SubFieldsTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_SubFieldsTemp;
	
	memcpy(&m_SubFieldsTemp, bytes + pos, sizeof(jUnsignedByte));
	m_SubFields = JSIDL_v_1_0::correctEndianness(m_SubFieldsTemp);
	pos += sizeof(jUnsignedByte);
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates &ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::operator=(const SupportedStates &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::operator==(const SupportedStates &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::operator!=(const SupportedStates &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::SupportedStates()
{
	m_parent = NULL;
	m_SubFields = 0;
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::SupportedStates(const SupportedStates &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates::~SupportedStates()
{
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isSupportedStatesValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedStates* const ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getSupportedStates()
{
	return &m_SupportedStates;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setSupportedStates(const SupportedStates &value)
{
	m_SupportedStates = value;
	setPresenceVector(0);
	setParentPresenceVector();
	return 0;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isMinimumHorizontalFieldOfViewStartAngleValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getMinimumHorizontalFieldOfViewStartAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_MinimumHorizontalFieldOfViewStartAngle * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setMinimumHorizontalFieldOfViewStartAngle(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
		double bias = -3.141592653589793;
		
		m_MinimumHorizontalFieldOfViewStartAngle= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isMaximumHorizontalFieldOfViewStopAngleValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getMaximumHorizontalFieldOfViewStopAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_MaximumHorizontalFieldOfViewStopAngle * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setMaximumHorizontalFieldOfViewStopAngle(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
		double bias = -3.141592653589793;
		
		m_MaximumHorizontalFieldOfViewStopAngle= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(2);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isMinimumVerticalFieldOfViewStartAngleValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getMinimumVerticalFieldOfViewStartAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_MinimumVerticalFieldOfViewStartAngle * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setMinimumVerticalFieldOfViewStartAngle(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
		double bias = -3.141592653589793;
		
		m_MinimumVerticalFieldOfViewStartAngle= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isMaximumVerticalFieldOfViewStopAngleValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getMaximumVerticalFieldOfViewStopAngle()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_MaximumVerticalFieldOfViewStopAngle * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setMaximumVerticalFieldOfViewStopAngle(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
		double bias = -3.141592653589793;
		
		m_MaximumVerticalFieldOfViewStopAngle= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(4);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isMiniumumUpdateRateValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getMiniumumUpdateRate()
{
	double value;
	
	double scaleFactor = ( 1000 - 0 ) / 65535.0;
	double bias = 0;
	
	value = m_MiniumumUpdateRate * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setMiniumumUpdateRate(double value)
{
	if ((value >= 0) && (value <= 1000))
	{
		double scaleFactor = ( 1000 - 0 ) / 65535.0;
		double bias = 0;
		
		m_MiniumumUpdateRate= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(5);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isMaximumUpdateRateValid() const
{
	if (checkPresenceVector(6))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getMaximumUpdateRate()
{
	double value;
	
	double scaleFactor = ( 1000 - 0 ) / 65535.0;
	double bias = 0;
	
	value = m_MaximumUpdateRate * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setMaximumUpdateRate(double value)
{
	if ((value >= 0) && (value <= 1000))
	{
		double scaleFactor = ( 1000 - 0 ) / 65535.0;
		double bias = 0;
		
		m_MaximumUpdateRate= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(6);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isMinimumRangeValid() const
{
	if (checkPresenceVector(7))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getMinimumRange()
{
	double value;
	
	double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_MinimumRange * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setMinimumRange(double value)
{
	if ((value >= 0) && (value <= 1000000.0))
	{
		double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
		double bias = 0;
		
		m_MinimumRange= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(7);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isMaximumRangeValid() const
{
	if (checkPresenceVector(8))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getMaximumRange()
{
	double value;
	
	double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_MaximumRange * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setMaximumRange(double value)
{
	if ((value >= 0) && (value <= 1000000.0))
	{
		double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
		double bias = 0;
		
		m_MaximumRange= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(8);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::setParent(RangeSensorCapabilitiesRec* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setPresenceVector(9);
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::getNoCompression()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 0; index <= 0; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::setNoCompression(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 0; index <= 0; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::getDEFLATE()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 1; index <= 1; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::setDEFLATE(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 1; index <= 1; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::getBzip2()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 2; index <= 2; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::setBzip2(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 2; index <= 2; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::getLZMA()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 3; index <= 3; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::setLZMA(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 3; index <= 3; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
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
const unsigned int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	return size;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_SubFieldsTemp;
	
	m_SubFieldsTemp = JSIDL_v_1_0::correctEndianness(m_SubFields);
	memcpy(bytes + pos, &m_SubFieldsTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_SubFieldsTemp;
	
	memcpy(&m_SubFieldsTemp, bytes + pos, sizeof(jUnsignedByte));
	m_SubFields = JSIDL_v_1_0::correctEndianness(m_SubFieldsTemp);
	pos += sizeof(jUnsignedByte);
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression &ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::operator=(const SupportedCompression &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::operator==(const SupportedCompression &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::operator!=(const SupportedCompression &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::SupportedCompression()
{
	m_parent = NULL;
	m_SubFields = 0;
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::SupportedCompression(const SupportedCompression &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression::~SupportedCompression()
{
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isSupportedCompressionValid() const
{
	if (checkPresenceVector(9))
	{
		return true;
	}
	return false;
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::SupportedCompression* const ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getSupportedCompression()
{
	return &m_SupportedCompression;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setSupportedCompression(const SupportedCompression &value)
{
	m_SupportedCompression = value;
	setPresenceVector(9);
	setParentPresenceVector();
	return 0;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::isCoordinateTransformationSupportedValid() const
{
	if (checkPresenceVector(10))
	{
		return true;
	}
	return false;
}

jUnsignedByte ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getCoordinateTransformationSupported()
{
	return m_CoordinateTransformationSupported;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::setCoordinateTransformationSupported(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		m_CoordinateTransformationSupported = value;
		setPresenceVector(10);
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
const unsigned int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	size += m_SensorName.length();
	if (checkPresenceVector(0))
	{
		size += m_SupportedStates.getSize();
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
		size += sizeof(jUnsignedInteger);
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
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(8))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(9))
	{
		size += m_SupportedCompression.getSize();
	}
	if (checkPresenceVector(10))
	{
		size += sizeof(jUnsignedByte);
	}
	
	return size;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::encode(unsigned char *bytes)
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
	
	jUnsignedByte m_SensorNameLength = 0;
	m_SensorNameLength = JSIDL_v_1_0::correctEndianness(m_SensorName.length());
	memcpy(bytes+pos, (unsigned char*)&m_SensorNameLength, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
	
	memcpy(bytes+pos, m_SensorName.c_str(), m_SensorName.length());
	pos += m_SensorName.length();
	if (checkPresenceVector(0))
	{
		m_SupportedStates.encode(bytes + pos);
		pos += m_SupportedStates.getSize();
	}
	if (checkPresenceVector(1))
	{
		jUnsignedInteger m_MinimumHorizontalFieldOfViewStartAngleTemp;
		
		m_MinimumHorizontalFieldOfViewStartAngleTemp = JSIDL_v_1_0::correctEndianness(m_MinimumHorizontalFieldOfViewStartAngle);
		memcpy(bytes + pos, &m_MinimumHorizontalFieldOfViewStartAngleTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_MaximumHorizontalFieldOfViewStopAngleTemp;
		
		m_MaximumHorizontalFieldOfViewStopAngleTemp = JSIDL_v_1_0::correctEndianness(m_MaximumHorizontalFieldOfViewStopAngle);
		memcpy(bytes + pos, &m_MaximumHorizontalFieldOfViewStopAngleTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedInteger m_MinimumVerticalFieldOfViewStartAngleTemp;
		
		m_MinimumVerticalFieldOfViewStartAngleTemp = JSIDL_v_1_0::correctEndianness(m_MinimumVerticalFieldOfViewStartAngle);
		memcpy(bytes + pos, &m_MinimumVerticalFieldOfViewStartAngleTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedInteger m_MaximumVerticalFieldOfViewStopAngleTemp;
		
		m_MaximumVerticalFieldOfViewStopAngleTemp = JSIDL_v_1_0::correctEndianness(m_MaximumVerticalFieldOfViewStopAngle);
		memcpy(bytes + pos, &m_MaximumVerticalFieldOfViewStopAngleTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedShortInteger m_MiniumumUpdateRateTemp;
		
		m_MiniumumUpdateRateTemp = JSIDL_v_1_0::correctEndianness(m_MiniumumUpdateRate);
		memcpy(bytes + pos, &m_MiniumumUpdateRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedShortInteger m_MaximumUpdateRateTemp;
		
		m_MaximumUpdateRateTemp = JSIDL_v_1_0::correctEndianness(m_MaximumUpdateRate);
		memcpy(bytes + pos, &m_MaximumUpdateRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedInteger m_MinimumRangeTemp;
		
		m_MinimumRangeTemp = JSIDL_v_1_0::correctEndianness(m_MinimumRange);
		memcpy(bytes + pos, &m_MinimumRangeTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(8))
	{
		jUnsignedInteger m_MaximumRangeTemp;
		
		m_MaximumRangeTemp = JSIDL_v_1_0::correctEndianness(m_MaximumRange);
		memcpy(bytes + pos, &m_MaximumRangeTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(9))
	{
		m_SupportedCompression.encode(bytes + pos);
		pos += m_SupportedCompression.getSize();
	}
	if (checkPresenceVector(10))
	{
		jUnsignedByte m_CoordinateTransformationSupportedTemp;
		
		m_CoordinateTransformationSupportedTemp = JSIDL_v_1_0::correctEndianness(m_CoordinateTransformationSupported);
		memcpy(bytes + pos, &m_CoordinateTransformationSupportedTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::decode(const unsigned char *bytes)
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
	
	jUnsignedByte m_SensorNameLength = 0;
	memcpy((unsigned char*)&m_SensorNameLength, bytes+pos, sizeof( m_SensorNameLength ));
	m_SensorNameLength = JSIDL_v_1_0::correctEndianness(m_SensorNameLength);
	pos += sizeof( m_SensorNameLength );
	
	char* m_SensorNameTemp = new char[m_SensorNameLength+1];
	memcpy(m_SensorNameTemp, bytes+pos, m_SensorNameLength );
	m_SensorNameTemp[m_SensorNameLength] = '\0';
	m_SensorName = m_SensorNameTemp;
	pos += m_SensorNameLength ;
	delete m_SensorNameTemp;
	if (checkPresenceVector(0))
	{
		m_SupportedStates.decode(bytes + pos);
		pos += m_SupportedStates.getSize();
	}
	if (checkPresenceVector(1))
	{
		jUnsignedInteger m_MinimumHorizontalFieldOfViewStartAngleTemp;
		
		memcpy(&m_MinimumHorizontalFieldOfViewStartAngleTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_MinimumHorizontalFieldOfViewStartAngle = JSIDL_v_1_0::correctEndianness(m_MinimumHorizontalFieldOfViewStartAngleTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_MaximumHorizontalFieldOfViewStopAngleTemp;
		
		memcpy(&m_MaximumHorizontalFieldOfViewStopAngleTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_MaximumHorizontalFieldOfViewStopAngle = JSIDL_v_1_0::correctEndianness(m_MaximumHorizontalFieldOfViewStopAngleTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedInteger m_MinimumVerticalFieldOfViewStartAngleTemp;
		
		memcpy(&m_MinimumVerticalFieldOfViewStartAngleTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_MinimumVerticalFieldOfViewStartAngle = JSIDL_v_1_0::correctEndianness(m_MinimumVerticalFieldOfViewStartAngleTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedInteger m_MaximumVerticalFieldOfViewStopAngleTemp;
		
		memcpy(&m_MaximumVerticalFieldOfViewStopAngleTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_MaximumVerticalFieldOfViewStopAngle = JSIDL_v_1_0::correctEndianness(m_MaximumVerticalFieldOfViewStopAngleTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedShortInteger m_MiniumumUpdateRateTemp;
		
		memcpy(&m_MiniumumUpdateRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_MiniumumUpdateRate = JSIDL_v_1_0::correctEndianness(m_MiniumumUpdateRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedShortInteger m_MaximumUpdateRateTemp;
		
		memcpy(&m_MaximumUpdateRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_MaximumUpdateRate = JSIDL_v_1_0::correctEndianness(m_MaximumUpdateRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedInteger m_MinimumRangeTemp;
		
		memcpy(&m_MinimumRangeTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_MinimumRange = JSIDL_v_1_0::correctEndianness(m_MinimumRangeTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(8))
	{
		jUnsignedInteger m_MaximumRangeTemp;
		
		memcpy(&m_MaximumRangeTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_MaximumRange = JSIDL_v_1_0::correctEndianness(m_MaximumRangeTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(9))
	{
		m_SupportedCompression.decode(bytes + pos);
		pos += m_SupportedCompression.getSize();
	}
	if (checkPresenceVector(10))
	{
		jUnsignedByte m_CoordinateTransformationSupportedTemp;
		
		memcpy(&m_CoordinateTransformationSupportedTemp, bytes + pos, sizeof(jUnsignedByte));
		m_CoordinateTransformationSupported = JSIDL_v_1_0::correctEndianness(m_CoordinateTransformationSupportedTemp);
		pos += sizeof(jUnsignedByte);
	}
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec &ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::operator=(const RangeSensorCapabilitiesRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_SensorID = value.m_SensorID;
	m_SensorName = value.m_SensorName;
	m_SupportedStates = value.m_SupportedStates;
	m_MinimumHorizontalFieldOfViewStartAngle = value.m_MinimumHorizontalFieldOfViewStartAngle;
	m_MaximumHorizontalFieldOfViewStopAngle = value.m_MaximumHorizontalFieldOfViewStopAngle;
	m_MinimumVerticalFieldOfViewStartAngle = value.m_MinimumVerticalFieldOfViewStartAngle;
	m_MaximumVerticalFieldOfViewStopAngle = value.m_MaximumVerticalFieldOfViewStopAngle;
	m_MiniumumUpdateRate = value.m_MiniumumUpdateRate;
	m_MaximumUpdateRate = value.m_MaximumUpdateRate;
	m_MinimumRange = value.m_MinimumRange;
	m_MaximumRange = value.m_MaximumRange;
	m_SupportedCompression = value.m_SupportedCompression;
	m_CoordinateTransformationSupported = value.m_CoordinateTransformationSupported;
	
	return *this;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::operator==(const RangeSensorCapabilitiesRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_SensorID != value.m_SensorID)
	{
		return false;
	}
	if ((m_SensorName.length() != value.m_SensorName.length()) || (m_SensorName.compare(value.m_SensorName) != 0))
	{
		return false;
	}
	
	if (m_SupportedStates != value.m_SupportedStates)
	{
		return false;
	}
	if (m_MinimumHorizontalFieldOfViewStartAngle != value.m_MinimumHorizontalFieldOfViewStartAngle)
	{
		return false;
	}
	if (m_MaximumHorizontalFieldOfViewStopAngle != value.m_MaximumHorizontalFieldOfViewStopAngle)
	{
		return false;
	}
	if (m_MinimumVerticalFieldOfViewStartAngle != value.m_MinimumVerticalFieldOfViewStartAngle)
	{
		return false;
	}
	if (m_MaximumVerticalFieldOfViewStopAngle != value.m_MaximumVerticalFieldOfViewStopAngle)
	{
		return false;
	}
	if (m_MiniumumUpdateRate != value.m_MiniumumUpdateRate)
	{
		return false;
	}
	if (m_MaximumUpdateRate != value.m_MaximumUpdateRate)
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
	
	if (m_SupportedCompression != value.m_SupportedCompression)
	{
		return false;
	}
	if (m_CoordinateTransformationSupported != value.m_CoordinateTransformationSupported)
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::operator!=(const RangeSensorCapabilitiesRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::RangeSensorCapabilitiesRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_SensorID = 0;
	m_SupportedStates.setParent(this);
	m_MinimumHorizontalFieldOfViewStartAngle = 0;
	m_MaximumHorizontalFieldOfViewStopAngle = 0;
	m_MinimumVerticalFieldOfViewStartAngle = 0;
	m_MaximumVerticalFieldOfViewStopAngle = 0;
	m_MiniumumUpdateRate = 0;
	m_MaximumUpdateRate = 0;
	m_MinimumRange = 0;
	m_MaximumRange = 0;
	m_SupportedCompression.setParent(this);
	m_CoordinateTransformationSupported = 0;
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::RangeSensorCapabilitiesRec(const RangeSensorCapabilitiesRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_SensorID = 0;
	m_SupportedStates.setParent(this);
	m_MinimumHorizontalFieldOfViewStartAngle = 0;
	m_MaximumHorizontalFieldOfViewStopAngle = 0;
	m_MinimumVerticalFieldOfViewStartAngle = 0;
	m_MaximumVerticalFieldOfViewStopAngle = 0;
	m_MiniumumUpdateRate = 0;
	m_MaximumUpdateRate = 0;
	m_MinimumRange = 0;
	m_MaximumRange = 0;
	m_SupportedCompression.setParent(this);
	m_CoordinateTransformationSupported = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_SensorID = value.m_SensorID;
	m_SensorName = value.m_SensorName;
	m_SupportedStates = value.m_SupportedStates;
	m_MinimumHorizontalFieldOfViewStartAngle = value.m_MinimumHorizontalFieldOfViewStartAngle;
	m_MaximumHorizontalFieldOfViewStopAngle = value.m_MaximumHorizontalFieldOfViewStopAngle;
	m_MinimumVerticalFieldOfViewStartAngle = value.m_MinimumVerticalFieldOfViewStartAngle;
	m_MaximumVerticalFieldOfViewStopAngle = value.m_MaximumVerticalFieldOfViewStopAngle;
	m_MiniumumUpdateRate = value.m_MiniumumUpdateRate;
	m_MaximumUpdateRate = value.m_MaximumUpdateRate;
	m_MinimumRange = value.m_MinimumRange;
	m_MaximumRange = value.m_MaximumRange;
	m_SupportedCompression = value.m_SupportedCompression;
	m_CoordinateTransformationSupported = value.m_CoordinateTransformationSupported;
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec::~RangeSensorCapabilitiesRec()
{
}

unsigned int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::getNumberOfElements() const
{
	return (unsigned int) m_RangeSensorCapabilitiesRec.size();
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesRec* const ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::getElement(unsigned int index)
{
	return &m_RangeSensorCapabilitiesRec.at(index);
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::setElement(unsigned int index, const RangeSensorCapabilitiesRec &value)
{
	if(m_RangeSensorCapabilitiesRec.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorCapabilitiesRec.at(index) = value;
	m_RangeSensorCapabilitiesRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::addElement(const RangeSensorCapabilitiesRec &value)
{
	m_RangeSensorCapabilitiesRec.push_back(value);
	m_RangeSensorCapabilitiesRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::deleteElement(unsigned int index)
{
	if(m_RangeSensorCapabilitiesRec.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorCapabilitiesRec.erase(m_RangeSensorCapabilitiesRec.begin()+index);
	return 0;
}

int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::deleteLastElement()
{
	m_RangeSensorCapabilitiesRec.pop_back();
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
const unsigned int ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_RangeSensorCapabilitiesRec.size(); i++)
	{
		size += m_RangeSensorCapabilitiesRec[i].getSize();
	}
	
	return size;
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_RangeSensorCapabilitiesRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_RangeSensorCapabilitiesRec.size(); i++)
	{
		m_RangeSensorCapabilitiesRec[i].encode(bytes + pos);
		pos += m_RangeSensorCapabilitiesRec[i].getSize();
	}
}

void ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_RangeSensorCapabilitiesRec.resize(size);
	for (int i = 0; i < m_RangeSensorCapabilitiesRec.size(); i++)
	{
		m_RangeSensorCapabilitiesRec[i].decode(bytes + pos);
		pos += m_RangeSensorCapabilitiesRec[i].getSize();
	}
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList &ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::operator=(const RangeSensorCapabilitiesList &value)
{
	m_RangeSensorCapabilitiesRec.clear();
	
	for (int i = 0; i < value.m_RangeSensorCapabilitiesRec.size(); i++)
	{
		m_RangeSensorCapabilitiesRec.push_back(value.m_RangeSensorCapabilitiesRec[i]);
		m_RangeSensorCapabilitiesRec[i].setParent(this);
	}
	
	return *this;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::operator==(const RangeSensorCapabilitiesList &value) const
{
	for (int i = 0; i < m_RangeSensorCapabilitiesRec.size(); i++)
	{
		if (m_RangeSensorCapabilitiesRec[i] !=  value.m_RangeSensorCapabilitiesRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::operator!=(const RangeSensorCapabilitiesList &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorCapabilitiesRec.size(); i++)
	{
		m_RangeSensorCapabilitiesRec[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorCapabilitiesRec necessary.
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesList(const RangeSensorCapabilitiesList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorCapabilitiesRec.size(); i++)
	{
		m_RangeSensorCapabilitiesRec[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorCapabilitiesRec necessary.
	
	/// Copy the values
	m_RangeSensorCapabilitiesRec.clear();
	
	for (int i = 0; i < value.m_RangeSensorCapabilitiesRec.size(); i++)
	{
		m_RangeSensorCapabilitiesRec.push_back(value.m_RangeSensorCapabilitiesRec[i]);
		m_RangeSensorCapabilitiesRec[i].setParent(this);
	}
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::~RangeSensorCapabilitiesList()
{
}

ReportRangeSensorCapabilities::Body::RangeSensorCapabilitiesList* const ReportRangeSensorCapabilities::Body::getRangeSensorCapabilitiesList()
{
	return &m_RangeSensorCapabilitiesList;
}

int ReportRangeSensorCapabilities::Body::setRangeSensorCapabilitiesList(const RangeSensorCapabilitiesList &value)
{
	m_RangeSensorCapabilitiesList = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorCapabilities::Body::setParentPresenceVector()
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
const unsigned int ReportRangeSensorCapabilities::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_RangeSensorCapabilitiesList.getSize();
	
	return size;
}

void ReportRangeSensorCapabilities::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorCapabilitiesList.encode(bytes + pos);
	pos += m_RangeSensorCapabilitiesList.getSize();
}

void ReportRangeSensorCapabilities::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorCapabilitiesList.decode(bytes + pos);
	pos += m_RangeSensorCapabilitiesList.getSize();
}

ReportRangeSensorCapabilities::Body &ReportRangeSensorCapabilities::Body::operator=(const Body &value)
{
	m_RangeSensorCapabilitiesList = value.m_RangeSensorCapabilitiesList;
	m_RangeSensorCapabilitiesList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportRangeSensorCapabilities::Body::operator==(const Body &value) const
{
	if (m_RangeSensorCapabilitiesList != value.m_RangeSensorCapabilitiesList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportRangeSensorCapabilities::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCapabilities::Body::Body()
{
	m_RangeSensorCapabilitiesList.setParent(this);
	/// No Initialization of m_RangeSensorCapabilitiesList necessary.
}

ReportRangeSensorCapabilities::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_RangeSensorCapabilitiesList.setParent(this);
	/// No Initialization of m_RangeSensorCapabilitiesList necessary.
	
	/// Copy the values
	m_RangeSensorCapabilitiesList = value.m_RangeSensorCapabilitiesList;
	m_RangeSensorCapabilitiesList.setParent(this);
	/// This code is currently not supported
}

ReportRangeSensorCapabilities::Body::~Body()
{
}

ReportRangeSensorCapabilities::Body* const ReportRangeSensorCapabilities::getBody()
{
	return &m_Body;
}

int ReportRangeSensorCapabilities::setBody(const Body &value)
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
const unsigned int ReportRangeSensorCapabilities::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportRangeSensorCapabilities::encode(unsigned char *bytes)
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

void ReportRangeSensorCapabilities::decode(const unsigned char *bytes)
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

ReportRangeSensorCapabilities &ReportRangeSensorCapabilities::operator=(const ReportRangeSensorCapabilities &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportRangeSensorCapabilities::operator==(const ReportRangeSensorCapabilities &value) const
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

bool ReportRangeSensorCapabilities::operator!=(const ReportRangeSensorCapabilities &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCapabilities::ReportRangeSensorCapabilities()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportRangeSensorCapabilities::ReportRangeSensorCapabilities(const ReportRangeSensorCapabilities &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportRangeSensorCapabilities::~ReportRangeSensorCapabilities()
{
}


}
