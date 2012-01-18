#include "urn_jaus_jss_environmentSensing_DigitalVideo_1_0/Messages/ReportDigitalVideoSensorConfiguration.h"

namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

void ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec &ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4809;
}

ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4809;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportDigitalVideoSensorConfiguration::AppHeader::HeaderRec* const ReportDigitalVideoSensorConfiguration::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportDigitalVideoSensorConfiguration::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportDigitalVideoSensorConfiguration::AppHeader::setParentPresenceVector()
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
const unsigned int ReportDigitalVideoSensorConfiguration::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportDigitalVideoSensorConfiguration::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportDigitalVideoSensorConfiguration::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportDigitalVideoSensorConfiguration::AppHeader &ReportDigitalVideoSensorConfiguration::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportDigitalVideoSensorConfiguration::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportDigitalVideoSensorConfiguration::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorConfiguration::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportDigitalVideoSensorConfiguration::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportDigitalVideoSensorConfiguration::AppHeader::~AppHeader()
{
}

ReportDigitalVideoSensorConfiguration::AppHeader* const ReportDigitalVideoSensorConfiguration::getAppHeader()
{
	return &m_AppHeader;
}

int ReportDigitalVideoSensorConfiguration::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::setParent(DigitalVideoSensorConfigurationList* parent)
{
	m_parent = parent;
}

void ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedByte)pvBitSet.to_ulong();
	return 0;
}

bool ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

jUnsignedShortInteger ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::getSensorID()
{
	return m_SensorID;
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

bool ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::isMinimumBitRateValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

jUnsignedShortInteger ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::getMinimumBitRate()
{
	return m_MinimumBitRate;
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::setMinimumBitRate(jUnsignedShortInteger value)
{
	m_MinimumBitRate = value;
	setPresenceVector(0);
	setParentPresenceVector();
	return 0;
}

bool ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::isMaximumBitRateValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

jUnsignedShortInteger ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::getMaximumBitRate()
{
	return m_MaximumBitRate;
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::setMaximumBitRate(jUnsignedShortInteger value)
{
	m_MaximumBitRate = value;
	setPresenceVector(1);
	setParentPresenceVector();
	return 0;
}

bool ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::isFrameRateValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

jUnsignedByte ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::getFrameRate()
{
	return m_FrameRate;
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::setFrameRate(jUnsignedByte value)
{
	m_FrameRate = value;
	setPresenceVector(2);
	setParentPresenceVector();
	return 0;
}

bool ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::isFrameSizeValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

jUnsignedByte ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::getFrameSize()
{
	return m_FrameSize;
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::setFrameSize(jUnsignedByte value)
{
	if ((value == 25) || (value == 26) || (value == 27) || (value == 28) || (value == 0) || (value == 1) || (value == 2) || (value == 3) || (value == 4) || (value == 5) || (value == 6) || (value == 7) || (value == 8) || (value == 9) || (value == 10) || (value == 11) || (value == 12) || (value == 13) || (value == 14) || (value == 15) || (value == 16) || (value == 17) || (value == 18) || (value == 19) || (value == 20) || (value == 21) || (value == 22) || (value == 23) || (value == 24))
	{
		m_FrameSize = value;
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::isDigitalFormatValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

jUnsignedByte ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::getDigitalFormat()
{
	return m_DigitalFormat;
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::setDigitalFormat(jUnsignedByte value)
{
	if ((value == 2) || (value == 3) || (value == 4) || (value == 5) || (value == 6) || (value == 0) || (value == 1))
	{
		m_DigitalFormat = value;
		setPresenceVector(4);
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
const unsigned int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	size += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(1))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(3))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(4))
	{
		size += sizeof(jUnsignedByte);
	}
	
	return size;
}

void ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::encode(unsigned char *bytes)
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
	jUnsignedShortInteger m_SensorIDTemp;
	
	m_SensorIDTemp = JSIDL_v_1_0::correctEndianness(m_SensorID);
	memcpy(bytes + pos, &m_SensorIDTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedShortInteger m_MinimumBitRateTemp;
		
		m_MinimumBitRateTemp = JSIDL_v_1_0::correctEndianness(m_MinimumBitRate);
		memcpy(bytes + pos, &m_MinimumBitRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_MaximumBitRateTemp;
		
		m_MaximumBitRateTemp = JSIDL_v_1_0::correctEndianness(m_MaximumBitRate);
		memcpy(bytes + pos, &m_MaximumBitRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedByte m_FrameRateTemp;
		
		m_FrameRateTemp = JSIDL_v_1_0::correctEndianness(m_FrameRate);
		memcpy(bytes + pos, &m_FrameRateTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedByte m_FrameSizeTemp;
		
		m_FrameSizeTemp = JSIDL_v_1_0::correctEndianness(m_FrameSize);
		memcpy(bytes + pos, &m_FrameSizeTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedByte m_DigitalFormatTemp;
		
		m_DigitalFormatTemp = JSIDL_v_1_0::correctEndianness(m_DigitalFormat);
		memcpy(bytes + pos, &m_DigitalFormatTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
}

void ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::decode(const unsigned char *bytes)
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
	jUnsignedShortInteger m_SensorIDTemp;
	
	memcpy(&m_SensorIDTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_SensorID = JSIDL_v_1_0::correctEndianness(m_SensorIDTemp);
	pos += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedShortInteger m_MinimumBitRateTemp;
		
		memcpy(&m_MinimumBitRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_MinimumBitRate = JSIDL_v_1_0::correctEndianness(m_MinimumBitRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_MaximumBitRateTemp;
		
		memcpy(&m_MaximumBitRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_MaximumBitRate = JSIDL_v_1_0::correctEndianness(m_MaximumBitRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedByte m_FrameRateTemp;
		
		memcpy(&m_FrameRateTemp, bytes + pos, sizeof(jUnsignedByte));
		m_FrameRate = JSIDL_v_1_0::correctEndianness(m_FrameRateTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedByte m_FrameSizeTemp;
		
		memcpy(&m_FrameSizeTemp, bytes + pos, sizeof(jUnsignedByte));
		m_FrameSize = JSIDL_v_1_0::correctEndianness(m_FrameSizeTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedByte m_DigitalFormatTemp;
		
		memcpy(&m_DigitalFormatTemp, bytes + pos, sizeof(jUnsignedByte));
		m_DigitalFormat = JSIDL_v_1_0::correctEndianness(m_DigitalFormatTemp);
		pos += sizeof(jUnsignedByte);
	}
}

ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec &ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::operator=(const DigitalVideoSensorConfigurationRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_SensorID = value.m_SensorID;
	m_MinimumBitRate = value.m_MinimumBitRate;
	m_MaximumBitRate = value.m_MaximumBitRate;
	m_FrameRate = value.m_FrameRate;
	m_FrameSize = value.m_FrameSize;
	m_DigitalFormat = value.m_DigitalFormat;
	
	return *this;
}

bool ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::operator==(const DigitalVideoSensorConfigurationRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_SensorID != value.m_SensorID)
	{
		return false;
	}
	if (m_MinimumBitRate != value.m_MinimumBitRate)
	{
		return false;
	}
	if (m_MaximumBitRate != value.m_MaximumBitRate)
	{
		return false;
	}
	if (m_FrameRate != value.m_FrameRate)
	{
		return false;
	}
	if (m_FrameSize != value.m_FrameSize)
	{
		return false;
	}
	if (m_DigitalFormat != value.m_DigitalFormat)
	{
		return false;
	}
	
	return true;
}

bool ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::operator!=(const DigitalVideoSensorConfigurationRec &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::DigitalVideoSensorConfigurationRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_SensorID = 0;
	m_MinimumBitRate = 0;
	m_MaximumBitRate = 0;
	m_FrameRate = 0;
	m_FrameSize = 0;
	m_DigitalFormat = 0;
}

ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::DigitalVideoSensorConfigurationRec(const DigitalVideoSensorConfigurationRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_SensorID = 0;
	m_MinimumBitRate = 0;
	m_MaximumBitRate = 0;
	m_FrameRate = 0;
	m_FrameSize = 0;
	m_DigitalFormat = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_SensorID = value.m_SensorID;
	m_MinimumBitRate = value.m_MinimumBitRate;
	m_MaximumBitRate = value.m_MaximumBitRate;
	m_FrameRate = value.m_FrameRate;
	m_FrameSize = value.m_FrameSize;
	m_DigitalFormat = value.m_DigitalFormat;
}

ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec::~DigitalVideoSensorConfigurationRec()
{
}

unsigned int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::getNumberOfElements() const
{
	return (unsigned int) m_DigitalVideoSensorConfigurationRec.size();
}

ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationRec* const ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::getElement(unsigned int index)
{
	return &m_DigitalVideoSensorConfigurationRec.at(index);
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::setElement(unsigned int index, const DigitalVideoSensorConfigurationRec &value)
{
	if(m_DigitalVideoSensorConfigurationRec.size()-1 < index)
	{
		return 1;
	}
	
	m_DigitalVideoSensorConfigurationRec.at(index) = value;
	m_DigitalVideoSensorConfigurationRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::addElement(const DigitalVideoSensorConfigurationRec &value)
{
	m_DigitalVideoSensorConfigurationRec.push_back(value);
	m_DigitalVideoSensorConfigurationRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::deleteElement(unsigned int index)
{
	if(m_DigitalVideoSensorConfigurationRec.size()-1 < index)
	{
		return 1;
	}
	
	m_DigitalVideoSensorConfigurationRec.erase(m_DigitalVideoSensorConfigurationRec.begin()+index);
	return 0;
}

int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::deleteLastElement()
{
	m_DigitalVideoSensorConfigurationRec.pop_back();
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
const unsigned int ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		size += m_DigitalVideoSensorConfigurationRec[i].getSize();
	}
	
	return size;
}

void ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_DigitalVideoSensorConfigurationRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		m_DigitalVideoSensorConfigurationRec[i].encode(bytes + pos);
		pos += m_DigitalVideoSensorConfigurationRec[i].getSize();
	}
}

void ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_DigitalVideoSensorConfigurationRec.resize(size);
	for (int i = 0; i < m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		m_DigitalVideoSensorConfigurationRec[i].decode(bytes + pos);
		pos += m_DigitalVideoSensorConfigurationRec[i].getSize();
	}
}

ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList &ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::operator=(const DigitalVideoSensorConfigurationList &value)
{
	m_DigitalVideoSensorConfigurationRec.clear();
	
	for (int i = 0; i < value.m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		m_DigitalVideoSensorConfigurationRec.push_back(value.m_DigitalVideoSensorConfigurationRec[i]);
		m_DigitalVideoSensorConfigurationRec[i].setParent(this);
	}
	
	return *this;
}

bool ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::operator==(const DigitalVideoSensorConfigurationList &value) const
{
	for (int i = 0; i < m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		if (m_DigitalVideoSensorConfigurationRec[i] !=  value.m_DigitalVideoSensorConfigurationRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::operator!=(const DigitalVideoSensorConfigurationList &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		m_DigitalVideoSensorConfigurationRec[i].setParent(this);
	}
	/// No Initialization of m_DigitalVideoSensorConfigurationRec necessary.
}

ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::DigitalVideoSensorConfigurationList(const DigitalVideoSensorConfigurationList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		m_DigitalVideoSensorConfigurationRec[i].setParent(this);
	}
	/// No Initialization of m_DigitalVideoSensorConfigurationRec necessary.
	
	/// Copy the values
	m_DigitalVideoSensorConfigurationRec.clear();
	
	for (int i = 0; i < value.m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		m_DigitalVideoSensorConfigurationRec.push_back(value.m_DigitalVideoSensorConfigurationRec[i]);
		m_DigitalVideoSensorConfigurationRec[i].setParent(this);
	}
}

ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList::~DigitalVideoSensorConfigurationList()
{
}

ReportDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationList* const ReportDigitalVideoSensorConfiguration::Body::getDigitalVideoSensorConfigurationList()
{
	return &m_DigitalVideoSensorConfigurationList;
}

int ReportDigitalVideoSensorConfiguration::Body::setDigitalVideoSensorConfigurationList(const DigitalVideoSensorConfigurationList &value)
{
	m_DigitalVideoSensorConfigurationList = value;
	setParentPresenceVector();
	return 0;
}

void ReportDigitalVideoSensorConfiguration::Body::setParentPresenceVector()
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
const unsigned int ReportDigitalVideoSensorConfiguration::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_DigitalVideoSensorConfigurationList.getSize();
	
	return size;
}

void ReportDigitalVideoSensorConfiguration::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DigitalVideoSensorConfigurationList.encode(bytes + pos);
	pos += m_DigitalVideoSensorConfigurationList.getSize();
}

void ReportDigitalVideoSensorConfiguration::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DigitalVideoSensorConfigurationList.decode(bytes + pos);
	pos += m_DigitalVideoSensorConfigurationList.getSize();
}

ReportDigitalVideoSensorConfiguration::Body &ReportDigitalVideoSensorConfiguration::Body::operator=(const Body &value)
{
	m_DigitalVideoSensorConfigurationList = value.m_DigitalVideoSensorConfigurationList;
	m_DigitalVideoSensorConfigurationList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportDigitalVideoSensorConfiguration::Body::operator==(const Body &value) const
{
	if (m_DigitalVideoSensorConfigurationList != value.m_DigitalVideoSensorConfigurationList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportDigitalVideoSensorConfiguration::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorConfiguration::Body::Body()
{
	m_DigitalVideoSensorConfigurationList.setParent(this);
	/// No Initialization of m_DigitalVideoSensorConfigurationList necessary.
}

ReportDigitalVideoSensorConfiguration::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_DigitalVideoSensorConfigurationList.setParent(this);
	/// No Initialization of m_DigitalVideoSensorConfigurationList necessary.
	
	/// Copy the values
	m_DigitalVideoSensorConfigurationList = value.m_DigitalVideoSensorConfigurationList;
	m_DigitalVideoSensorConfigurationList.setParent(this);
	/// This code is currently not supported
}

ReportDigitalVideoSensorConfiguration::Body::~Body()
{
}

ReportDigitalVideoSensorConfiguration::Body* const ReportDigitalVideoSensorConfiguration::getBody()
{
	return &m_Body;
}

int ReportDigitalVideoSensorConfiguration::setBody(const Body &value)
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
const unsigned int ReportDigitalVideoSensorConfiguration::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportDigitalVideoSensorConfiguration::encode(unsigned char *bytes)
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

void ReportDigitalVideoSensorConfiguration::decode(const unsigned char *bytes)
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

ReportDigitalVideoSensorConfiguration &ReportDigitalVideoSensorConfiguration::operator=(const ReportDigitalVideoSensorConfiguration &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportDigitalVideoSensorConfiguration::operator==(const ReportDigitalVideoSensorConfiguration &value) const
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

bool ReportDigitalVideoSensorConfiguration::operator!=(const ReportDigitalVideoSensorConfiguration &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorConfiguration::ReportDigitalVideoSensorConfiguration()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportDigitalVideoSensorConfiguration::ReportDigitalVideoSensorConfiguration(const ReportDigitalVideoSensorConfiguration &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportDigitalVideoSensorConfiguration::~ReportDigitalVideoSensorConfiguration()
{
}


}
