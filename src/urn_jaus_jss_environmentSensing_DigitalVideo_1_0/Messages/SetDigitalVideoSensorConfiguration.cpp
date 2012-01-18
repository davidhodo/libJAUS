#include "urn_jaus_jss_environmentSensing_DigitalVideo_1_0/Messages/SetDigitalVideoSensorConfiguration.h"

namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

void SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec &SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x0804;
}

SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x0804;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec::~HeaderRec()
{
}

SetDigitalVideoSensorConfiguration::AppHeader::HeaderRec* const SetDigitalVideoSensorConfiguration::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int SetDigitalVideoSensorConfiguration::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void SetDigitalVideoSensorConfiguration::AppHeader::setParentPresenceVector()
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
const unsigned int SetDigitalVideoSensorConfiguration::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void SetDigitalVideoSensorConfiguration::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void SetDigitalVideoSensorConfiguration::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

SetDigitalVideoSensorConfiguration::AppHeader &SetDigitalVideoSensorConfiguration::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool SetDigitalVideoSensorConfiguration::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool SetDigitalVideoSensorConfiguration::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

SetDigitalVideoSensorConfiguration::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

SetDigitalVideoSensorConfiguration::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

SetDigitalVideoSensorConfiguration::AppHeader::~AppHeader()
{
}

SetDigitalVideoSensorConfiguration::AppHeader* const SetDigitalVideoSensorConfiguration::getAppHeader()
{
	return &m_AppHeader;
}

int SetDigitalVideoSensorConfiguration::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::setParent(Body* parent)
{
	m_parent = parent;
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::setParent(DigitalVideoSensorConfigurationSequence* parent)
{
	m_parent = parent;
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::getRequestID()
{
	return m_RequestID;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::setRequestID(jUnsignedByte value)
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
const unsigned int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	return size;
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::encode(unsigned char *bytes)
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

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::decode(const unsigned char *bytes)
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

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec &SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::operator=(const RequestIdRec &value)
{
	m_RequestID = value.m_RequestID;
	
	return *this;
}

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::operator==(const RequestIdRec &value) const
{
	if (m_RequestID != value.m_RequestID)
	{
		return false;
	}
	
	return true;
}

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::operator!=(const RequestIdRec &value) const
{
	return !((*this) == value);
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::RequestIdRec()
{
	m_parent = NULL;
	m_RequestID = 0;
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::RequestIdRec(const RequestIdRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_RequestID = 0;
	
	/// Copy the values
	m_RequestID = value.m_RequestID;
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec::~RequestIdRec()
{
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::RequestIdRec* const SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::getRequestIdRec()
{
	return &m_RequestIdRec;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::setRequestIdRec(const RequestIdRec &value)
{
	m_RequestIdRec = value;
	setParentPresenceVector();
	return 0;
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::setParent(DigitalVideoSensorConfigurationSequence* parent)
{
	m_parent = parent;
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::setParent(DigitalVideoSensorList* parent)
{
	m_parent = parent;
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::getPresenceVector()
{
	return m_PresenceVector;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedByte)pvBitSet.to_ulong();
	return 0;
}

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

jUnsignedShortInteger SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::getSensorID()
{
	return m_SensorID;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::isMinimumBitRateValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

jUnsignedShortInteger SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::getMinimumBitRate()
{
	return m_MinimumBitRate;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::setMinimumBitRate(jUnsignedShortInteger value)
{
	m_MinimumBitRate = value;
	setPresenceVector(0);
	setParentPresenceVector();
	return 0;
}

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::isMaximumBitRateValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

jUnsignedShortInteger SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::getMaximumBitRate()
{
	return m_MaximumBitRate;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::setMaximumBitRate(jUnsignedShortInteger value)
{
	m_MaximumBitRate = value;
	setPresenceVector(1);
	setParentPresenceVector();
	return 0;
}

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::isFrameRateValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

jUnsignedByte SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::getFrameRate()
{
	return m_FrameRate;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::setFrameRate(jUnsignedByte value)
{
	m_FrameRate = value;
	setPresenceVector(2);
	setParentPresenceVector();
	return 0;
}

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::isFrameSizeValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

jUnsignedByte SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::getFrameSize()
{
	return m_FrameSize;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::setFrameSize(jUnsignedByte value)
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

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::isDigitalFormatValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

jUnsignedByte SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::getDigitalFormat()
{
	return m_DigitalFormat;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::setDigitalFormat(jUnsignedByte value)
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
const unsigned int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::getSize()
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

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::encode(unsigned char *bytes)
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

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::decode(const unsigned char *bytes)
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

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec &SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::operator=(const DigitalVideoSensorConfigurationRec &value)
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

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::operator==(const DigitalVideoSensorConfigurationRec &value) const
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

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::operator!=(const DigitalVideoSensorConfigurationRec &value) const
{
	return !((*this) == value);
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::DigitalVideoSensorConfigurationRec()
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

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::DigitalVideoSensorConfigurationRec(const DigitalVideoSensorConfigurationRec &value)
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

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec::~DigitalVideoSensorConfigurationRec()
{
}

unsigned int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::getNumberOfElements() const
{
	return (unsigned int) m_DigitalVideoSensorConfigurationRec.size();
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorConfigurationRec* const SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::getElement(unsigned int index)
{
	return &m_DigitalVideoSensorConfigurationRec.at(index);
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::setElement(unsigned int index, const DigitalVideoSensorConfigurationRec &value)
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

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::addElement(const DigitalVideoSensorConfigurationRec &value)
{
	m_DigitalVideoSensorConfigurationRec.push_back(value);
	m_DigitalVideoSensorConfigurationRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::deleteElement(unsigned int index)
{
	if(m_DigitalVideoSensorConfigurationRec.size()-1 < index)
	{
		return 1;
	}
	
	m_DigitalVideoSensorConfigurationRec.erase(m_DigitalVideoSensorConfigurationRec.begin()+index);
	return 0;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::deleteLastElement()
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
const unsigned int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		size += m_DigitalVideoSensorConfigurationRec[i].getSize();
	}
	
	return size;
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::encode(unsigned char *bytes)
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

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::decode(const unsigned char *bytes)
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

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList &SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::operator=(const DigitalVideoSensorList &value)
{
	m_DigitalVideoSensorConfigurationRec.clear();
	
	for (int i = 0; i < value.m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		m_DigitalVideoSensorConfigurationRec.push_back(value.m_DigitalVideoSensorConfigurationRec[i]);
		m_DigitalVideoSensorConfigurationRec[i].setParent(this);
	}
	
	return *this;
}

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::operator==(const DigitalVideoSensorList &value) const
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

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::operator!=(const DigitalVideoSensorList &value) const
{
	return !((*this) == value);
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_DigitalVideoSensorConfigurationRec.size(); i++)
	{
		m_DigitalVideoSensorConfigurationRec[i].setParent(this);
	}
	/// No Initialization of m_DigitalVideoSensorConfigurationRec necessary.
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::DigitalVideoSensorList(const DigitalVideoSensorList &value)
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

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList::~DigitalVideoSensorList()
{
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorList* const SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::getDigitalVideoSensorList()
{
	return &m_DigitalVideoSensorList;
}

int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::setDigitalVideoSensorList(const DigitalVideoSensorList &value)
{
	m_DigitalVideoSensorList = value;
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
const unsigned int SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::getSize()
{
	unsigned int size = 0;
	
	size += m_RequestIdRec.getSize();
	size += m_DigitalVideoSensorList.getSize();
	
	return size;
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RequestIdRec.encode(bytes + pos);
	pos += m_RequestIdRec.getSize();
	m_DigitalVideoSensorList.encode(bytes + pos);
	pos += m_DigitalVideoSensorList.getSize();
}

void SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RequestIdRec.decode(bytes + pos);
	pos += m_RequestIdRec.getSize();
	m_DigitalVideoSensorList.decode(bytes + pos);
	pos += m_DigitalVideoSensorList.getSize();
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence &SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::operator=(const DigitalVideoSensorConfigurationSequence &value)
{
	m_RequestIdRec = value.m_RequestIdRec;
	m_RequestIdRec.setParent(this);
	m_RequestIdRec = value.m_RequestIdRec;
	m_DigitalVideoSensorList = value.m_DigitalVideoSensorList;
	m_DigitalVideoSensorList.setParent(this);
	m_DigitalVideoSensorList = value.m_DigitalVideoSensorList;
	
	return *this;
}

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::operator==(const DigitalVideoSensorConfigurationSequence &value) const
{
	if (m_RequestIdRec != value.m_RequestIdRec)
	{
		return false;
	}
	
	if (m_RequestIdRec != value.m_RequestIdRec)
	{
		return false;
	}
	if (m_DigitalVideoSensorList != value.m_DigitalVideoSensorList)
	{
		return false;
	}
	
	if (m_DigitalVideoSensorList != value.m_DigitalVideoSensorList)
	{
		return false;
	}
	
	return true;
}

bool SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::operator!=(const DigitalVideoSensorConfigurationSequence &value) const
{
	return !((*this) == value);
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorConfigurationSequence()
{
	m_parent = NULL;
	m_RequestIdRec.setParent(this);
	/// No Initialization of m_RequestIdRec necessary.
	m_DigitalVideoSensorList.setParent(this);
	/// No Initialization of m_DigitalVideoSensorList necessary.
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::DigitalVideoSensorConfigurationSequence(const DigitalVideoSensorConfigurationSequence &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_RequestIdRec.setParent(this);
	/// No Initialization of m_RequestIdRec necessary.
	m_DigitalVideoSensorList.setParent(this);
	/// No Initialization of m_DigitalVideoSensorList necessary.
	
	/// Copy the values
	m_RequestIdRec = value.m_RequestIdRec;
	m_RequestIdRec.setParent(this);
	m_RequestIdRec = value.m_RequestIdRec;
	m_DigitalVideoSensorList = value.m_DigitalVideoSensorList;
	m_DigitalVideoSensorList.setParent(this);
	m_DigitalVideoSensorList = value.m_DigitalVideoSensorList;
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence::~DigitalVideoSensorConfigurationSequence()
{
}

SetDigitalVideoSensorConfiguration::Body::DigitalVideoSensorConfigurationSequence* const SetDigitalVideoSensorConfiguration::Body::getDigitalVideoSensorConfigurationSequence()
{
	return &m_DigitalVideoSensorConfigurationSequence;
}

int SetDigitalVideoSensorConfiguration::Body::setDigitalVideoSensorConfigurationSequence(const DigitalVideoSensorConfigurationSequence &value)
{
	m_DigitalVideoSensorConfigurationSequence = value;
	setParentPresenceVector();
	return 0;
}

void SetDigitalVideoSensorConfiguration::Body::setParentPresenceVector()
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
const unsigned int SetDigitalVideoSensorConfiguration::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_DigitalVideoSensorConfigurationSequence.getSize();
	
	return size;
}

void SetDigitalVideoSensorConfiguration::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DigitalVideoSensorConfigurationSequence.encode(bytes + pos);
	pos += m_DigitalVideoSensorConfigurationSequence.getSize();
}

void SetDigitalVideoSensorConfiguration::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DigitalVideoSensorConfigurationSequence.decode(bytes + pos);
	pos += m_DigitalVideoSensorConfigurationSequence.getSize();
}

SetDigitalVideoSensorConfiguration::Body &SetDigitalVideoSensorConfiguration::Body::operator=(const Body &value)
{
	m_DigitalVideoSensorConfigurationSequence = value.m_DigitalVideoSensorConfigurationSequence;
	m_DigitalVideoSensorConfigurationSequence.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool SetDigitalVideoSensorConfiguration::Body::operator==(const Body &value) const
{
	if (m_DigitalVideoSensorConfigurationSequence != value.m_DigitalVideoSensorConfigurationSequence)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool SetDigitalVideoSensorConfiguration::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

SetDigitalVideoSensorConfiguration::Body::Body()
{
	m_DigitalVideoSensorConfigurationSequence.setParent(this);
	/// No Initialization of m_DigitalVideoSensorConfigurationSequence necessary.
}

SetDigitalVideoSensorConfiguration::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_DigitalVideoSensorConfigurationSequence.setParent(this);
	/// No Initialization of m_DigitalVideoSensorConfigurationSequence necessary.
	
	/// Copy the values
	m_DigitalVideoSensorConfigurationSequence = value.m_DigitalVideoSensorConfigurationSequence;
	m_DigitalVideoSensorConfigurationSequence.setParent(this);
	/// This code is currently not supported
}

SetDigitalVideoSensorConfiguration::Body::~Body()
{
}

SetDigitalVideoSensorConfiguration::Body* const SetDigitalVideoSensorConfiguration::getBody()
{
	return &m_Body;
}

int SetDigitalVideoSensorConfiguration::setBody(const Body &value)
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
const unsigned int SetDigitalVideoSensorConfiguration::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void SetDigitalVideoSensorConfiguration::encode(unsigned char *bytes)
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

void SetDigitalVideoSensorConfiguration::decode(const unsigned char *bytes)
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

SetDigitalVideoSensorConfiguration &SetDigitalVideoSensorConfiguration::operator=(const SetDigitalVideoSensorConfiguration &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool SetDigitalVideoSensorConfiguration::operator==(const SetDigitalVideoSensorConfiguration &value) const
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

bool SetDigitalVideoSensorConfiguration::operator!=(const SetDigitalVideoSensorConfiguration &value) const
{
	return !((*this) == value);
}

SetDigitalVideoSensorConfiguration::SetDigitalVideoSensorConfiguration()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

SetDigitalVideoSensorConfiguration::SetDigitalVideoSensorConfiguration(const SetDigitalVideoSensorConfiguration &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

SetDigitalVideoSensorConfiguration::~SetDigitalVideoSensorConfiguration()
{
}


}
