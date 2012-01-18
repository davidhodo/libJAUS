#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/ReportRangeSensorCompressedData.h"

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

void ReportRangeSensorCompressedData::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCompressedData::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportRangeSensorCompressedData::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportRangeSensorCompressedData::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportRangeSensorCompressedData::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportRangeSensorCompressedData::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportRangeSensorCompressedData::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportRangeSensorCompressedData::AppHeader::HeaderRec &ReportRangeSensorCompressedData::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportRangeSensorCompressedData::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorCompressedData::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCompressedData::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4804;
}

ReportRangeSensorCompressedData::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4804;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportRangeSensorCompressedData::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportRangeSensorCompressedData::AppHeader::HeaderRec* const ReportRangeSensorCompressedData::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportRangeSensorCompressedData::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorCompressedData::AppHeader::setParentPresenceVector()
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
const unsigned int ReportRangeSensorCompressedData::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportRangeSensorCompressedData::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportRangeSensorCompressedData::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportRangeSensorCompressedData::AppHeader &ReportRangeSensorCompressedData::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportRangeSensorCompressedData::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportRangeSensorCompressedData::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCompressedData::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportRangeSensorCompressedData::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportRangeSensorCompressedData::AppHeader::~AppHeader()
{
}

ReportRangeSensorCompressedData::AppHeader* const ReportRangeSensorCompressedData::getAppHeader()
{
	return &m_AppHeader;
}

int ReportRangeSensorCompressedData::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::setParent(RangeSensorCompressedDataList* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::setParent(RangeSensorCompressedDataVariant* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::getSensorID()
{
	return m_SensorID;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::getDataErrorCode()
{
	return m_DataErrorCode;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::setDataErrorCode(jUnsignedByte value)
{
	if ((value == 0) || (value == 1) || (value == 255))
	{
		m_DataErrorCode = value;
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jVariableLengthString ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::getErrorMessage()
{
	return m_ErrorMessage;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::setErrorMessage(jVariableLengthString value)
{
	if ( value.length() > 255)
	{
		return 1;
	}
	
	m_ErrorMessage = value;
	if (m_ErrorMessage.length() < 0)
	{
		m_ErrorMessage.resize(0);
	}
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
const unsigned int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	size += sizeof(jUnsignedByte);
	size += m_ErrorMessage.length();
	
	return size;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_SensorIDTemp;
	
	m_SensorIDTemp = JSIDL_v_1_0::correctEndianness(m_SensorID);
	memcpy(bytes + pos, &m_SensorIDTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
	jUnsignedByte m_DataErrorCodeTemp;
	
	m_DataErrorCodeTemp = JSIDL_v_1_0::correctEndianness(m_DataErrorCode);
	memcpy(bytes + pos, &m_DataErrorCodeTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
	
	jUnsignedByte m_ErrorMessageLength = 0;
	m_ErrorMessageLength = JSIDL_v_1_0::correctEndianness(m_ErrorMessage.length());
	memcpy(bytes+pos, (unsigned char*)&m_ErrorMessageLength, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
	
	memcpy(bytes+pos, m_ErrorMessage.c_str(), m_ErrorMessage.length());
	pos += m_ErrorMessage.length();
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_SensorIDTemp;
	
	memcpy(&m_SensorIDTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_SensorID = JSIDL_v_1_0::correctEndianness(m_SensorIDTemp);
	pos += sizeof(jUnsignedShortInteger);
	jUnsignedByte m_DataErrorCodeTemp;
	
	memcpy(&m_DataErrorCodeTemp, bytes + pos, sizeof(jUnsignedByte));
	m_DataErrorCode = JSIDL_v_1_0::correctEndianness(m_DataErrorCodeTemp);
	pos += sizeof(jUnsignedByte);
	
	jUnsignedByte m_ErrorMessageLength = 0;
	memcpy((unsigned char*)&m_ErrorMessageLength, bytes+pos, sizeof( m_ErrorMessageLength ));
	m_ErrorMessageLength = JSIDL_v_1_0::correctEndianness(m_ErrorMessageLength);
	pos += sizeof( m_ErrorMessageLength );
	
	char* m_ErrorMessageTemp = new char[m_ErrorMessageLength+1];
	memcpy(m_ErrorMessageTemp, bytes+pos, m_ErrorMessageLength );
	m_ErrorMessageTemp[m_ErrorMessageLength] = '\0';
	m_ErrorMessage = m_ErrorMessageTemp;
	pos += m_ErrorMessageLength ;
	delete m_ErrorMessageTemp;
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec &ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::operator=(const RangeSensorDataErrorRec &value)
{
	m_SensorID = value.m_SensorID;
	m_DataErrorCode = value.m_DataErrorCode;
	m_ErrorMessage = value.m_ErrorMessage;
	
	return *this;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::operator==(const RangeSensorDataErrorRec &value) const
{
	if (m_SensorID != value.m_SensorID)
	{
		return false;
	}
	if (m_DataErrorCode != value.m_DataErrorCode)
	{
		return false;
	}
	if ((m_ErrorMessage.length() != value.m_ErrorMessage.length()) || (m_ErrorMessage.compare(value.m_ErrorMessage) != 0))
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::operator!=(const RangeSensorDataErrorRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::RangeSensorDataErrorRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_DataErrorCode = 0;
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::RangeSensorDataErrorRec(const RangeSensorDataErrorRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SensorID = 0;
	m_DataErrorCode = 0;
	
	/// Copy the values
	m_SensorID = value.m_SensorID;
	m_DataErrorCode = value.m_DataErrorCode;
	m_ErrorMessage = value.m_ErrorMessage;
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec::~RangeSensorDataErrorRec()
{
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorDataErrorRec* const ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::getRangeSensorDataErrorRec()
{
	return &m_RangeSensorDataErrorRec;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::setRangeSensorDataErrorRec(const RangeSensorDataErrorRec &value)
{
	m_RangeSensorDataErrorRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::setParent(RangeSensorCompressedDataVariant* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::getSensorID()
{
	return m_SensorID;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::getReportCoordinateSystem()
{
	return m_ReportCoordinateSystem;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::setReportCoordinateSystem(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		m_ReportCoordinateSystem = value;
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::setParent(RangeSensorCompressedDataRec* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedInteger ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::getMilliseconds()
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

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::setMilliseconds(jUnsignedInteger value)
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

jUnsignedInteger ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::getSeconds()
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

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::setSeconds(jUnsignedInteger value)
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

jUnsignedInteger ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::getMinutes()
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

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::setMinutes(jUnsignedInteger value)
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

jUnsignedInteger ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::getHour()
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

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::setHour(jUnsignedInteger value)
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

jUnsignedInteger ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::getDay()
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

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::setDay(jUnsignedInteger value)
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

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedInteger);
	
	return size;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::encode(unsigned char *bytes)
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

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::decode(const unsigned char *bytes)
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

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp &ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::operator=(const TimeStamp &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::operator==(const TimeStamp &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::operator!=(const TimeStamp &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::TimeStamp()
{
	m_parent = NULL;
	m_SubFields = 0;
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::TimeStamp(const TimeStamp &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp::~TimeStamp()
{
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::TimeStamp* const ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::getTimeStamp()
{
	return &m_TimeStamp;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::setTimeStamp(const TimeStamp &value)
{
	m_TimeStamp = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::getDataCompression()
{
	return m_DataCompression;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::setDataCompression(jUnsignedByte value)
{
	if ((value == 0) || (value == 1) || (value == 2) || (value == 3))
	{
		m_DataCompression = value;
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::setParent(RangeSensorCompressedDataRec* parent)
{
	m_parent = parent;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

const jUnsignedInteger ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::getLength() const
{
	return m_Length;
}

const unsigned char *ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::getData() const
{
	return m_Data;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::set(const jUnsignedInteger &length, const unsigned char *data)
{
	m_Length = length;
	
	delete[] m_Data;
	m_Data = NULL;
	
	if (m_Length > 0)
	{
		m_Data = new unsigned char[length];
		memcpy(m_Data, data, length);
	}
	
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
const unsigned int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedInteger);
	size += m_Length;
	
	return size;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedInteger m_LengthTemp;
	
	m_LengthTemp = JSIDL_v_1_0::correctEndianness(m_Length);
	memcpy(bytes+pos, &m_LengthTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	
	memcpy(bytes+pos, m_Data, m_Length);
	pos += m_Length;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedInteger m_LengthTemp;
	
	memcpy(&m_LengthTemp, bytes+pos, sizeof(jUnsignedInteger));
	m_Length = JSIDL_v_1_0::correctEndianness(m_LengthTemp);
	pos += sizeof(jUnsignedInteger);
	
	delete[] m_Data;
	m_Data = NULL;
	
	if (m_Length > 0)
	{
		m_Data = new unsigned char[m_Length];
		memcpy(m_Data, bytes+pos, m_Length);
		pos += m_Length;
	}
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData &ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::operator=(const CompressedData &value)
{
	this->m_Length = value.m_Length;
	
	delete[] m_Data;
	m_Data = NULL;
	
	if (m_Length > 0)
	{
		m_Data = new unsigned char[this->m_Length];
		memcpy(this->m_Data, value.m_Data, this->m_Length);
	}
	
	return *this;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::operator==(const CompressedData &value) const
{
	if (this->m_Length != value.m_Length)
	{
		return false;
	}
	
	if ((this->m_Data != NULL) && (value.m_Data!= NULL))
	{
		if (memcmp(this->m_Data, value.m_Data, this->m_Length) != 0)
		{
			return false;
		}
	}
	// This case should never be true since it should not be possible
	// for the two variables to have equal lengths but one has no data.
	// This check is placed here as a secondary check.
	else if ((this->m_Data != NULL) || (value.m_Data != NULL))
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::operator!=(const CompressedData &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::CompressedData()
{
	m_parent = NULL;
	m_Length = 0;
	m_Data = NULL;
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::CompressedData(const CompressedData &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_Length = 0;
	m_Data = NULL;
	
	/// Copy the values
	this->m_Length = value.m_Length;
	
	delete[] m_Data;
	m_Data = NULL;
	
	if (m_Length > 0)
	{
		m_Data = new unsigned char[this->m_Length];
		memcpy(this->m_Data, value.m_Data, this->m_Length);
	}
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData::~CompressedData()
{
	delete[] m_Data;
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::CompressedData* const ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::getCompressedData()
{
	return &m_CompressedData;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::setCompressedData(const CompressedData &value)
{
	m_CompressedData = value;
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
const unsigned int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	size += m_TimeStamp.getSize();
	size += sizeof(jUnsignedByte);
	size += m_CompressedData.getSize();
	
	return size;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_SensorIDTemp;
	
	m_SensorIDTemp = JSIDL_v_1_0::correctEndianness(m_SensorID);
	memcpy(bytes + pos, &m_SensorIDTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
	jUnsignedByte m_ReportCoordinateSystemTemp;
	
	m_ReportCoordinateSystemTemp = JSIDL_v_1_0::correctEndianness(m_ReportCoordinateSystem);
	memcpy(bytes + pos, &m_ReportCoordinateSystemTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
	m_TimeStamp.encode(bytes + pos);
	pos += m_TimeStamp.getSize();
	jUnsignedByte m_DataCompressionTemp;
	
	m_DataCompressionTemp = JSIDL_v_1_0::correctEndianness(m_DataCompression);
	memcpy(bytes + pos, &m_DataCompressionTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
	m_CompressedData.encode(bytes + pos);
	pos += m_CompressedData.getSize();
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_SensorIDTemp;
	
	memcpy(&m_SensorIDTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_SensorID = JSIDL_v_1_0::correctEndianness(m_SensorIDTemp);
	pos += sizeof(jUnsignedShortInteger);
	jUnsignedByte m_ReportCoordinateSystemTemp;
	
	memcpy(&m_ReportCoordinateSystemTemp, bytes + pos, sizeof(jUnsignedByte));
	m_ReportCoordinateSystem = JSIDL_v_1_0::correctEndianness(m_ReportCoordinateSystemTemp);
	pos += sizeof(jUnsignedByte);
	m_TimeStamp.decode(bytes + pos);
	pos += m_TimeStamp.getSize();
	jUnsignedByte m_DataCompressionTemp;
	
	memcpy(&m_DataCompressionTemp, bytes + pos, sizeof(jUnsignedByte));
	m_DataCompression = JSIDL_v_1_0::correctEndianness(m_DataCompressionTemp);
	pos += sizeof(jUnsignedByte);
	m_CompressedData.decode(bytes + pos);
	pos += m_CompressedData.getSize();
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec &ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::operator=(const RangeSensorCompressedDataRec &value)
{
	m_SensorID = value.m_SensorID;
	m_ReportCoordinateSystem = value.m_ReportCoordinateSystem;
	m_TimeStamp = value.m_TimeStamp;
	m_DataCompression = value.m_DataCompression;
	m_CompressedData = value.m_CompressedData;
	
	return *this;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::operator==(const RangeSensorCompressedDataRec &value) const
{
	if (m_SensorID != value.m_SensorID)
	{
		return false;
	}
	if (m_ReportCoordinateSystem != value.m_ReportCoordinateSystem)
	{
		return false;
	}
	
	if (m_TimeStamp != value.m_TimeStamp)
	{
		return false;
	}
	if (m_DataCompression != value.m_DataCompression)
	{
		return false;
	}
	
	if (m_CompressedData != value.m_CompressedData)
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::operator!=(const RangeSensorCompressedDataRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::RangeSensorCompressedDataRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_ReportCoordinateSystem = 0;
	m_TimeStamp.setParent(this);
	m_DataCompression = 0;
	m_CompressedData.setParent(this);
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::RangeSensorCompressedDataRec(const RangeSensorCompressedDataRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SensorID = 0;
	m_ReportCoordinateSystem = 0;
	m_TimeStamp.setParent(this);
	m_DataCompression = 0;
	m_CompressedData.setParent(this);
	
	/// Copy the values
	m_SensorID = value.m_SensorID;
	m_ReportCoordinateSystem = value.m_ReportCoordinateSystem;
	m_TimeStamp = value.m_TimeStamp;
	m_DataCompression = value.m_DataCompression;
	m_CompressedData = value.m_CompressedData;
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec::~RangeSensorCompressedDataRec()
{
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataRec* const ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::getRangeSensorCompressedDataRec()
{
	return &m_RangeSensorCompressedDataRec;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::setRangeSensorCompressedDataRec(const RangeSensorCompressedDataRec &value)
{
	m_RangeSensorCompressedDataRec = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::getFieldValue() const
{
	return m_FieldValue;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::setFieldValue(jUnsignedByte fieldValue)
{
	if(fieldValue > 1)
	{
		return 1;
	}
	
	m_FieldValue = fieldValue;
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
const unsigned int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	switch(m_FieldValue)
	{
		case 0:
			size += m_RangeSensorDataErrorRec.getSize();
			break;
		case 1:
			size += m_RangeSensorCompressedDataRec.getSize();
			break;
	}
	
	return size;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_FieldValueTemp;
	
	m_FieldValueTemp = JSIDL_v_1_0::correctEndianness(m_FieldValue);
	memcpy(bytes + pos, &m_FieldValueTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
	
	switch(m_FieldValue)
	{
		case 0:
			m_RangeSensorDataErrorRec.encode(bytes + pos);
			pos += m_RangeSensorDataErrorRec.getSize();
			break;
		case 1:
			m_RangeSensorCompressedDataRec.encode(bytes + pos);
			pos += m_RangeSensorCompressedDataRec.getSize();
			break;
	}
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_FieldValueTemp;
	
	memcpy(&m_FieldValueTemp, bytes + pos, sizeof(jUnsignedByte));
	m_FieldValue = JSIDL_v_1_0::correctEndianness(m_FieldValueTemp);
	pos += sizeof(jUnsignedByte);
	
	switch(m_FieldValue)
	{
		case 0:
			m_RangeSensorDataErrorRec.decode(bytes + pos);
			pos += m_RangeSensorDataErrorRec.getSize();
			break;
		case 1:
			m_RangeSensorCompressedDataRec.decode(bytes + pos);
			pos += m_RangeSensorCompressedDataRec.getSize();
			break;
	}
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant &ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::operator=(const RangeSensorCompressedDataVariant &value)
{
	m_FieldValue = value.m_FieldValue;
	m_RangeSensorDataErrorRec = value.m_RangeSensorDataErrorRec;
	m_RangeSensorDataErrorRec.setParent(this);
	m_RangeSensorCompressedDataRec = value.m_RangeSensorCompressedDataRec;
	m_RangeSensorCompressedDataRec.setParent(this);
	
	return *this;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::operator==(const RangeSensorCompressedDataVariant &value) const
{
	if (m_FieldValue != value.m_FieldValue)
	{
		return false;
	}
	if (m_RangeSensorDataErrorRec != value.m_RangeSensorDataErrorRec)
	{
		return false;
	}
	if (m_RangeSensorCompressedDataRec != value.m_RangeSensorCompressedDataRec)
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::operator!=(const RangeSensorCompressedDataVariant &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataVariant()
{
	m_parent = NULL;
	m_FieldValue = 0;
	m_RangeSensorDataErrorRec.setParent(this);
	/// No Initialization of m_RangeSensorDataErrorRec necessary.
	m_RangeSensorCompressedDataRec.setParent(this);
	/// No Initialization of m_RangeSensorCompressedDataRec necessary.
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::RangeSensorCompressedDataVariant(const RangeSensorCompressedDataVariant &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_FieldValue = 0;
	m_RangeSensorDataErrorRec.setParent(this);
	/// No Initialization of m_RangeSensorDataErrorRec necessary.
	m_RangeSensorCompressedDataRec.setParent(this);
	/// No Initialization of m_RangeSensorCompressedDataRec necessary.
	
	/// Copy the values
	m_FieldValue = value.m_FieldValue;
	m_RangeSensorDataErrorRec = value.m_RangeSensorDataErrorRec;
	m_RangeSensorDataErrorRec.setParent(this);
	m_RangeSensorCompressedDataRec = value.m_RangeSensorCompressedDataRec;
	m_RangeSensorCompressedDataRec.setParent(this);
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant::~RangeSensorCompressedDataVariant()
{
}

unsigned int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::getNumberOfElements() const
{
	return (unsigned int) m_RangeSensorCompressedDataVariant.size();
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataVariant* const ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::getElement(unsigned int index)
{
	return &m_RangeSensorCompressedDataVariant.at(index);
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::setElement(unsigned int index, const RangeSensorCompressedDataVariant &value)
{
	if(m_RangeSensorCompressedDataVariant.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorCompressedDataVariant.at(index) = value;
	m_RangeSensorCompressedDataVariant.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::addElement(const RangeSensorCompressedDataVariant &value)
{
	m_RangeSensorCompressedDataVariant.push_back(value);
	m_RangeSensorCompressedDataVariant.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::deleteElement(unsigned int index)
{
	if(m_RangeSensorCompressedDataVariant.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorCompressedDataVariant.erase(m_RangeSensorCompressedDataVariant.begin()+index);
	return 0;
}

int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::deleteLastElement()
{
	m_RangeSensorCompressedDataVariant.pop_back();
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
const unsigned int ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_RangeSensorCompressedDataVariant.size(); i++)
	{
		size += m_RangeSensorCompressedDataVariant[i].getSize();
	}
	
	return size;
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_RangeSensorCompressedDataVariant.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_RangeSensorCompressedDataVariant.size(); i++)
	{
		m_RangeSensorCompressedDataVariant[i].encode(bytes + pos);
		pos += m_RangeSensorCompressedDataVariant[i].getSize();
	}
}

void ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_RangeSensorCompressedDataVariant.resize(size);
	for (int i = 0; i < m_RangeSensorCompressedDataVariant.size(); i++)
	{
		m_RangeSensorCompressedDataVariant[i].decode(bytes + pos);
		pos += m_RangeSensorCompressedDataVariant[i].getSize();
	}
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList &ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::operator=(const RangeSensorCompressedDataList &value)
{
	m_RangeSensorCompressedDataVariant.clear();
	
	for (int i = 0; i < value.m_RangeSensorCompressedDataVariant.size(); i++)
	{
		m_RangeSensorCompressedDataVariant.push_back(value.m_RangeSensorCompressedDataVariant[i]);
		m_RangeSensorCompressedDataVariant[i].setParent(this);
	}
	
	return *this;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::operator==(const RangeSensorCompressedDataList &value) const
{
	for (int i = 0; i < m_RangeSensorCompressedDataVariant.size(); i++)
	{
		if (m_RangeSensorCompressedDataVariant[i] != value.m_RangeSensorCompressedDataVariant[i])
		{
			return false;
		}
	}
	
	return true;
}

bool ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::operator!=(const RangeSensorCompressedDataList &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorCompressedDataVariant.size(); i++)
	{
		m_RangeSensorCompressedDataVariant[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorCompressedDataVariant necessary.
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::RangeSensorCompressedDataList(const RangeSensorCompressedDataList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorCompressedDataVariant.size(); i++)
	{
		m_RangeSensorCompressedDataVariant[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorCompressedDataVariant necessary.
	
	/// Copy the values
	m_RangeSensorCompressedDataVariant.clear();
	
	for (int i = 0; i < value.m_RangeSensorCompressedDataVariant.size(); i++)
	{
		m_RangeSensorCompressedDataVariant.push_back(value.m_RangeSensorCompressedDataVariant[i]);
		m_RangeSensorCompressedDataVariant[i].setParent(this);
	}
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList::~RangeSensorCompressedDataList()
{
}

ReportRangeSensorCompressedData::Body::RangeSensorCompressedDataList* const ReportRangeSensorCompressedData::Body::getRangeSensorCompressedDataList()
{
	return &m_RangeSensorCompressedDataList;
}

int ReportRangeSensorCompressedData::Body::setRangeSensorCompressedDataList(const RangeSensorCompressedDataList &value)
{
	m_RangeSensorCompressedDataList = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorCompressedData::Body::setParentPresenceVector()
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
const unsigned int ReportRangeSensorCompressedData::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_RangeSensorCompressedDataList.getSize();
	
	return size;
}

void ReportRangeSensorCompressedData::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorCompressedDataList.encode(bytes + pos);
	pos += m_RangeSensorCompressedDataList.getSize();
}

void ReportRangeSensorCompressedData::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorCompressedDataList.decode(bytes + pos);
	pos += m_RangeSensorCompressedDataList.getSize();
}

ReportRangeSensorCompressedData::Body &ReportRangeSensorCompressedData::Body::operator=(const Body &value)
{
	m_RangeSensorCompressedDataList = value.m_RangeSensorCompressedDataList;
	m_RangeSensorCompressedDataList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportRangeSensorCompressedData::Body::operator==(const Body &value) const
{
	if (m_RangeSensorCompressedDataList != value.m_RangeSensorCompressedDataList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportRangeSensorCompressedData::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCompressedData::Body::Body()
{
	m_RangeSensorCompressedDataList.setParent(this);
	/// No Initialization of m_RangeSensorCompressedDataList necessary.
}

ReportRangeSensorCompressedData::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_RangeSensorCompressedDataList.setParent(this);
	/// No Initialization of m_RangeSensorCompressedDataList necessary.
	
	/// Copy the values
	m_RangeSensorCompressedDataList = value.m_RangeSensorCompressedDataList;
	m_RangeSensorCompressedDataList.setParent(this);
	/// This code is currently not supported
}

ReportRangeSensorCompressedData::Body::~Body()
{
}

ReportRangeSensorCompressedData::Body* const ReportRangeSensorCompressedData::getBody()
{
	return &m_Body;
}

int ReportRangeSensorCompressedData::setBody(const Body &value)
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
const unsigned int ReportRangeSensorCompressedData::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportRangeSensorCompressedData::encode(unsigned char *bytes)
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

void ReportRangeSensorCompressedData::decode(const unsigned char *bytes)
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

ReportRangeSensorCompressedData &ReportRangeSensorCompressedData::operator=(const ReportRangeSensorCompressedData &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportRangeSensorCompressedData::operator==(const ReportRangeSensorCompressedData &value) const
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

bool ReportRangeSensorCompressedData::operator!=(const ReportRangeSensorCompressedData &value) const
{
	return !((*this) == value);
}

ReportRangeSensorCompressedData::ReportRangeSensorCompressedData()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportRangeSensorCompressedData::ReportRangeSensorCompressedData(const ReportRangeSensorCompressedData &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportRangeSensorCompressedData::~ReportRangeSensorCompressedData()
{
}


}
