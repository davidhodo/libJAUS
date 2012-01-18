#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/ReportRangeSensorData.h"

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

void ReportRangeSensorData::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportRangeSensorData::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportRangeSensorData::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportRangeSensorData::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportRangeSensorData::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportRangeSensorData::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportRangeSensorData::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportRangeSensorData::AppHeader::HeaderRec &ReportRangeSensorData::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportRangeSensorData::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorData::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4803;
}

ReportRangeSensorData::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4803;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportRangeSensorData::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportRangeSensorData::AppHeader::HeaderRec* const ReportRangeSensorData::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportRangeSensorData::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorData::AppHeader::setParentPresenceVector()
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
const unsigned int ReportRangeSensorData::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportRangeSensorData::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportRangeSensorData::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportRangeSensorData::AppHeader &ReportRangeSensorData::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportRangeSensorData::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportRangeSensorData::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportRangeSensorData::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportRangeSensorData::AppHeader::~AppHeader()
{
}

ReportRangeSensorData::AppHeader* const ReportRangeSensorData::getAppHeader()
{
	return &m_AppHeader;
}

int ReportRangeSensorData::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportRangeSensorData::Body::RangeSensorDataList::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportRangeSensorData::Body::RangeSensorDataList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::setParent(RangeSensorDataList* parent)
{
	m_parent = parent;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::setParent(RangeSensorDataVariant* parent)
{
	m_parent = parent;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::getSensorID()
{
	return m_SensorID;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::getDataErrorCode()
{
	return m_DataErrorCode;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::setDataErrorCode(jUnsignedByte value)
{
	if ((value == 0) || (value == 1) || (value == 255))
	{
		m_DataErrorCode = value;
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jVariableLengthString ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::getErrorMessage()
{
	return m_ErrorMessage;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::setErrorMessage(jVariableLengthString value)
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
const unsigned int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	size += sizeof(jUnsignedByte);
	size += m_ErrorMessage.length();
	
	return size;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::encode(unsigned char *bytes)
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

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::decode(const unsigned char *bytes)
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

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec &ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::operator=(const RangeSensorDataErrorRec &value)
{
	m_SensorID = value.m_SensorID;
	m_DataErrorCode = value.m_DataErrorCode;
	m_ErrorMessage = value.m_ErrorMessage;
	
	return *this;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::operator==(const RangeSensorDataErrorRec &value) const
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

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::operator!=(const RangeSensorDataErrorRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::RangeSensorDataErrorRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_DataErrorCode = 0;
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::RangeSensorDataErrorRec(const RangeSensorDataErrorRec &value)
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

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec::~RangeSensorDataErrorRec()
{
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataErrorRec* const ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::getRangeSensorDataErrorRec()
{
	return &m_RangeSensorDataErrorRec;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::setRangeSensorDataErrorRec(const RangeSensorDataErrorRec &value)
{
	m_RangeSensorDataErrorRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::setParent(RangeSensorDataVariant* parent)
{
	m_parent = parent;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::setParent(RangeSensorDataSeq* parent)
{
	m_parent = parent;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::getSensorID()
{
	return m_SensorID;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::getReportCoordinateSystem()
{
	return m_ReportCoordinateSystem;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::setReportCoordinateSystem(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		m_ReportCoordinateSystem = value;
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::setParent(RangeSensorDataRec* parent)
{
	m_parent = parent;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedInteger ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::getMilliseconds()
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

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::setMilliseconds(jUnsignedInteger value)
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

jUnsignedInteger ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::getSeconds()
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

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::setSeconds(jUnsignedInteger value)
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

jUnsignedInteger ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::getMinutes()
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

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::setMinutes(jUnsignedInteger value)
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

jUnsignedInteger ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::getHour()
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

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::setHour(jUnsignedInteger value)
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

jUnsignedInteger ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::getDay()
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

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::setDay(jUnsignedInteger value)
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
const unsigned int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedInteger);
	
	return size;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::encode(unsigned char *bytes)
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

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::decode(const unsigned char *bytes)
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

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp &ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::operator=(const TimeStamp &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::operator==(const TimeStamp &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::operator!=(const TimeStamp &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::TimeStamp()
{
	m_parent = NULL;
	m_SubFields = 0;
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::TimeStamp(const TimeStamp &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp::~TimeStamp()
{
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::TimeStamp* const ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::getTimeStamp()
{
	return &m_TimeStamp;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::setTimeStamp(const TimeStamp &value)
{
	m_TimeStamp = value;
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
const unsigned int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	size += m_TimeStamp.getSize();
	
	return size;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::encode(unsigned char *bytes)
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
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::decode(const unsigned char *bytes)
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
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec &ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::operator=(const RangeSensorDataRec &value)
{
	m_SensorID = value.m_SensorID;
	m_ReportCoordinateSystem = value.m_ReportCoordinateSystem;
	m_TimeStamp = value.m_TimeStamp;
	
	return *this;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::operator==(const RangeSensorDataRec &value) const
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
	
	return true;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::operator!=(const RangeSensorDataRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::RangeSensorDataRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_ReportCoordinateSystem = 0;
	m_TimeStamp.setParent(this);
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::RangeSensorDataRec(const RangeSensorDataRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SensorID = 0;
	m_ReportCoordinateSystem = 0;
	m_TimeStamp.setParent(this);
	
	/// Copy the values
	m_SensorID = value.m_SensorID;
	m_ReportCoordinateSystem = value.m_ReportCoordinateSystem;
	m_TimeStamp = value.m_TimeStamp;
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec::~RangeSensorDataRec()
{
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataRec* const ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::getRangeSensorDataRec()
{
	return &m_RangeSensorDataRec;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::setRangeSensorDataRec(const RangeSensorDataRec &value)
{
	m_RangeSensorDataRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::setParent(RangeSensorDataSeq* parent)
{
	m_parent = parent;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setParent(RangeSensorDataPointList* parent)
{
	m_parent = parent;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedByte)pvBitSet.to_ulong();
	return 0;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::isPointIDValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

jUnsignedInteger ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getPointID()
{
	return m_PointID;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setPointID(jUnsignedInteger value)
{
	m_PointID = value;
	setPresenceVector(0);
	setParentPresenceVector();
	return 0;
}

double ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getRange()
{
	double value;
	
	double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_Range * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setRange(double value)
{
	if ((value >= 0) && (value <= 1000000.0))
	{
		double scaleFactor = ( 1000000.0 - 0 ) / 4.294967295E9;
		double bias = 0;
		
		m_Range= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::isRangeValidityValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

jUnsignedByte ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getRangeValidity()
{
	return m_RangeValidity;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setRangeValidity(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		m_RangeValidity = value;
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::isRangeErrorRMSValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getRangeErrorRMS()
{
	double value;
	
	double scaleFactor = ( 100000.0 - 0.0 ) / 4.294967295E9;
	double bias = 0.0;
	
	value = m_RangeErrorRMS * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setRangeErrorRMS(double value)
{
	if ((value >= 0.0) && (value <= 100000.0))
	{
		double scaleFactor = ( 100000.0 - 0.0 ) / 4.294967295E9;
		double bias = 0.0;
		
		m_RangeErrorRMS= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(2);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getBearing()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_Bearing * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setBearing(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
		double bias = -3.141592653589793;
		
		m_Bearing= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::isBearingValidityValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

jUnsignedByte ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getBearingValidity()
{
	return m_BearingValidity;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setBearingValidity(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		m_BearingValidity = value;
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::isBearingErrorRMSValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getBearingErrorRMS()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_BearingErrorRMS * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setBearingErrorRMS(double value)
{
	if ((value >= 0) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - 0 ) / 4.294967295E9;
		double bias = 0;
		
		m_BearingErrorRMS= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(4);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getInclination()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
	double bias = -3.141592653589793;
	
	value = m_Inclination * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setInclination(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 4.294967295E9;
		double bias = -3.141592653589793;
		
		m_Inclination= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::isInclinationValidityValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

jUnsignedByte ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getInclinationValidity()
{
	return m_InclinationValidity;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setInclinationValidity(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		m_InclinationValidity = value;
		setPresenceVector(5);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::isInclinationErrorRMSValid() const
{
	if (checkPresenceVector(6))
	{
		return true;
	}
	return false;
}

double ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getInclinationErrorRMS()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - 0.0 ) / 4.294967295E9;
	double bias = 0.0;
	
	value = m_InclinationErrorRMS * scaleFactor + bias;
	
	return value;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::setInclinationErrorRMS(double value)
{
	if ((value >= 0.0) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - 0.0 ) / 4.294967295E9;
		double bias = 0.0;
		
		m_InclinationErrorRMS= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(6);
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
const unsigned int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	if (checkPresenceVector(0))
	{
		size += sizeof(jUnsignedInteger);
	}
	size += sizeof(jUnsignedInteger);
	if (checkPresenceVector(1))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(2))
	{
		size += sizeof(jUnsignedInteger);
	}
	size += sizeof(jUnsignedInteger);
	if (checkPresenceVector(3))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(4))
	{
		size += sizeof(jUnsignedInteger);
	}
	size += sizeof(jUnsignedInteger);
	if (checkPresenceVector(5))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(6))
	{
		size += sizeof(jUnsignedInteger);
	}
	
	return size;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::encode(unsigned char *bytes)
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
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_PointIDTemp;
		
		m_PointIDTemp = JSIDL_v_1_0::correctEndianness(m_PointID);
		memcpy(bytes + pos, &m_PointIDTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	jUnsignedInteger m_RangeTemp;
	
	m_RangeTemp = JSIDL_v_1_0::correctEndianness(m_Range);
	memcpy(bytes + pos, &m_RangeTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(1))
	{
		jUnsignedByte m_RangeValidityTemp;
		
		m_RangeValidityTemp = JSIDL_v_1_0::correctEndianness(m_RangeValidity);
		memcpy(bytes + pos, &m_RangeValidityTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_RangeErrorRMSTemp;
		
		m_RangeErrorRMSTemp = JSIDL_v_1_0::correctEndianness(m_RangeErrorRMS);
		memcpy(bytes + pos, &m_RangeErrorRMSTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	jUnsignedInteger m_BearingTemp;
	
	m_BearingTemp = JSIDL_v_1_0::correctEndianness(m_Bearing);
	memcpy(bytes + pos, &m_BearingTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(3))
	{
		jUnsignedByte m_BearingValidityTemp;
		
		m_BearingValidityTemp = JSIDL_v_1_0::correctEndianness(m_BearingValidity);
		memcpy(bytes + pos, &m_BearingValidityTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedInteger m_BearingErrorRMSTemp;
		
		m_BearingErrorRMSTemp = JSIDL_v_1_0::correctEndianness(m_BearingErrorRMS);
		memcpy(bytes + pos, &m_BearingErrorRMSTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	jUnsignedInteger m_InclinationTemp;
	
	m_InclinationTemp = JSIDL_v_1_0::correctEndianness(m_Inclination);
	memcpy(bytes + pos, &m_InclinationTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(5))
	{
		jUnsignedByte m_InclinationValidityTemp;
		
		m_InclinationValidityTemp = JSIDL_v_1_0::correctEndianness(m_InclinationValidity);
		memcpy(bytes + pos, &m_InclinationValidityTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedInteger m_InclinationErrorRMSTemp;
		
		m_InclinationErrorRMSTemp = JSIDL_v_1_0::correctEndianness(m_InclinationErrorRMS);
		memcpy(bytes + pos, &m_InclinationErrorRMSTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::decode(const unsigned char *bytes)
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
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_PointIDTemp;
		
		memcpy(&m_PointIDTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_PointID = JSIDL_v_1_0::correctEndianness(m_PointIDTemp);
		pos += sizeof(jUnsignedInteger);
	}
	jUnsignedInteger m_RangeTemp;
	
	memcpy(&m_RangeTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_Range = JSIDL_v_1_0::correctEndianness(m_RangeTemp);
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(1))
	{
		jUnsignedByte m_RangeValidityTemp;
		
		memcpy(&m_RangeValidityTemp, bytes + pos, sizeof(jUnsignedByte));
		m_RangeValidity = JSIDL_v_1_0::correctEndianness(m_RangeValidityTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_RangeErrorRMSTemp;
		
		memcpy(&m_RangeErrorRMSTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_RangeErrorRMS = JSIDL_v_1_0::correctEndianness(m_RangeErrorRMSTemp);
		pos += sizeof(jUnsignedInteger);
	}
	jUnsignedInteger m_BearingTemp;
	
	memcpy(&m_BearingTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_Bearing = JSIDL_v_1_0::correctEndianness(m_BearingTemp);
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(3))
	{
		jUnsignedByte m_BearingValidityTemp;
		
		memcpy(&m_BearingValidityTemp, bytes + pos, sizeof(jUnsignedByte));
		m_BearingValidity = JSIDL_v_1_0::correctEndianness(m_BearingValidityTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedInteger m_BearingErrorRMSTemp;
		
		memcpy(&m_BearingErrorRMSTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_BearingErrorRMS = JSIDL_v_1_0::correctEndianness(m_BearingErrorRMSTemp);
		pos += sizeof(jUnsignedInteger);
	}
	jUnsignedInteger m_InclinationTemp;
	
	memcpy(&m_InclinationTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_Inclination = JSIDL_v_1_0::correctEndianness(m_InclinationTemp);
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(5))
	{
		jUnsignedByte m_InclinationValidityTemp;
		
		memcpy(&m_InclinationValidityTemp, bytes + pos, sizeof(jUnsignedByte));
		m_InclinationValidity = JSIDL_v_1_0::correctEndianness(m_InclinationValidityTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedInteger m_InclinationErrorRMSTemp;
		
		memcpy(&m_InclinationErrorRMSTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_InclinationErrorRMS = JSIDL_v_1_0::correctEndianness(m_InclinationErrorRMSTemp);
		pos += sizeof(jUnsignedInteger);
	}
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec &ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::operator=(const RangeSensorDataPointRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_PointID = value.m_PointID;
	m_Range = value.m_Range;
	m_RangeValidity = value.m_RangeValidity;
	m_RangeErrorRMS = value.m_RangeErrorRMS;
	m_Bearing = value.m_Bearing;
	m_BearingValidity = value.m_BearingValidity;
	m_BearingErrorRMS = value.m_BearingErrorRMS;
	m_Inclination = value.m_Inclination;
	m_InclinationValidity = value.m_InclinationValidity;
	m_InclinationErrorRMS = value.m_InclinationErrorRMS;
	
	return *this;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::operator==(const RangeSensorDataPointRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_PointID != value.m_PointID)
	{
		return false;
	}
	if (m_Range != value.m_Range)
	{
		return false;
	}
	if (m_RangeValidity != value.m_RangeValidity)
	{
		return false;
	}
	if (m_RangeErrorRMS != value.m_RangeErrorRMS)
	{
		return false;
	}
	if (m_Bearing != value.m_Bearing)
	{
		return false;
	}
	if (m_BearingValidity != value.m_BearingValidity)
	{
		return false;
	}
	if (m_BearingErrorRMS != value.m_BearingErrorRMS)
	{
		return false;
	}
	if (m_Inclination != value.m_Inclination)
	{
		return false;
	}
	if (m_InclinationValidity != value.m_InclinationValidity)
	{
		return false;
	}
	if (m_InclinationErrorRMS != value.m_InclinationErrorRMS)
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::operator!=(const RangeSensorDataPointRec &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::RangeSensorDataPointRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_PointID = 0;
	m_Range = 0;
	m_RangeValidity = 0;
	m_RangeErrorRMS = 0;
	m_Bearing = 0;
	m_BearingValidity = 0;
	m_BearingErrorRMS = 0;
	m_Inclination = 0;
	m_InclinationValidity = 0;
	m_InclinationErrorRMS = 0;
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::RangeSensorDataPointRec(const RangeSensorDataPointRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_PointID = 0;
	m_Range = 0;
	m_RangeValidity = 0;
	m_RangeErrorRMS = 0;
	m_Bearing = 0;
	m_BearingValidity = 0;
	m_BearingErrorRMS = 0;
	m_Inclination = 0;
	m_InclinationValidity = 0;
	m_InclinationErrorRMS = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_PointID = value.m_PointID;
	m_Range = value.m_Range;
	m_RangeValidity = value.m_RangeValidity;
	m_RangeErrorRMS = value.m_RangeErrorRMS;
	m_Bearing = value.m_Bearing;
	m_BearingValidity = value.m_BearingValidity;
	m_BearingErrorRMS = value.m_BearingErrorRMS;
	m_Inclination = value.m_Inclination;
	m_InclinationValidity = value.m_InclinationValidity;
	m_InclinationErrorRMS = value.m_InclinationErrorRMS;
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec::~RangeSensorDataPointRec()
{
}

unsigned int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::getNumberOfElements() const
{
	return (unsigned int) m_RangeSensorDataPointRec.size();
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointRec* const ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::getElement(unsigned int index)
{
	return &m_RangeSensorDataPointRec.at(index);
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::setElement(unsigned int index, const RangeSensorDataPointRec &value)
{
	if(m_RangeSensorDataPointRec.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorDataPointRec.at(index) = value;
	m_RangeSensorDataPointRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::addElement(const RangeSensorDataPointRec &value)
{
	m_RangeSensorDataPointRec.push_back(value);
	m_RangeSensorDataPointRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::deleteElement(unsigned int index)
{
	if(m_RangeSensorDataPointRec.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorDataPointRec.erase(m_RangeSensorDataPointRec.begin()+index);
	return 0;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::deleteLastElement()
{
	m_RangeSensorDataPointRec.pop_back();
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
const unsigned int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_RangeSensorDataPointRec.size(); i++)
	{
		size += m_RangeSensorDataPointRec[i].getSize();
	}
	
	return size;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_RangeSensorDataPointRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_RangeSensorDataPointRec.size(); i++)
	{
		m_RangeSensorDataPointRec[i].encode(bytes + pos);
		pos += m_RangeSensorDataPointRec[i].getSize();
	}
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_RangeSensorDataPointRec.resize(size);
	for (int i = 0; i < m_RangeSensorDataPointRec.size(); i++)
	{
		m_RangeSensorDataPointRec[i].decode(bytes + pos);
		pos += m_RangeSensorDataPointRec[i].getSize();
	}
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList &ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::operator=(const RangeSensorDataPointList &value)
{
	m_RangeSensorDataPointRec.clear();
	
	for (int i = 0; i < value.m_RangeSensorDataPointRec.size(); i++)
	{
		m_RangeSensorDataPointRec.push_back(value.m_RangeSensorDataPointRec[i]);
		m_RangeSensorDataPointRec[i].setParent(this);
	}
	
	return *this;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::operator==(const RangeSensorDataPointList &value) const
{
	for (int i = 0; i < m_RangeSensorDataPointRec.size(); i++)
	{
		if (m_RangeSensorDataPointRec[i] !=  value.m_RangeSensorDataPointRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::operator!=(const RangeSensorDataPointList &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorDataPointRec.size(); i++)
	{
		m_RangeSensorDataPointRec[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorDataPointRec necessary.
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::RangeSensorDataPointList(const RangeSensorDataPointList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorDataPointRec.size(); i++)
	{
		m_RangeSensorDataPointRec[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorDataPointRec necessary.
	
	/// Copy the values
	m_RangeSensorDataPointRec.clear();
	
	for (int i = 0; i < value.m_RangeSensorDataPointRec.size(); i++)
	{
		m_RangeSensorDataPointRec.push_back(value.m_RangeSensorDataPointRec[i]);
		m_RangeSensorDataPointRec[i].setParent(this);
	}
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList::~RangeSensorDataPointList()
{
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataPointList* const ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::getRangeSensorDataPointList()
{
	return &m_RangeSensorDataPointList;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::setRangeSensorDataPointList(const RangeSensorDataPointList &value)
{
	m_RangeSensorDataPointList = value;
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
const unsigned int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::getSize()
{
	unsigned int size = 0;
	
	size += m_RangeSensorDataRec.getSize();
	size += m_RangeSensorDataPointList.getSize();
	
	return size;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorDataRec.encode(bytes + pos);
	pos += m_RangeSensorDataRec.getSize();
	m_RangeSensorDataPointList.encode(bytes + pos);
	pos += m_RangeSensorDataPointList.getSize();
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorDataRec.decode(bytes + pos);
	pos += m_RangeSensorDataRec.getSize();
	m_RangeSensorDataPointList.decode(bytes + pos);
	pos += m_RangeSensorDataPointList.getSize();
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq &ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::operator=(const RangeSensorDataSeq &value)
{
	m_RangeSensorDataRec = value.m_RangeSensorDataRec;
	m_RangeSensorDataRec.setParent(this);
	m_RangeSensorDataRec = value.m_RangeSensorDataRec;
	m_RangeSensorDataPointList = value.m_RangeSensorDataPointList;
	m_RangeSensorDataPointList.setParent(this);
	m_RangeSensorDataPointList = value.m_RangeSensorDataPointList;
	
	return *this;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::operator==(const RangeSensorDataSeq &value) const
{
	if (m_RangeSensorDataRec != value.m_RangeSensorDataRec)
	{
		return false;
	}
	
	if (m_RangeSensorDataRec != value.m_RangeSensorDataRec)
	{
		return false;
	}
	if (m_RangeSensorDataPointList != value.m_RangeSensorDataPointList)
	{
		return false;
	}
	
	if (m_RangeSensorDataPointList != value.m_RangeSensorDataPointList)
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::operator!=(const RangeSensorDataSeq &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataSeq()
{
	m_parent = NULL;
	m_RangeSensorDataRec.setParent(this);
	/// No Initialization of m_RangeSensorDataRec necessary.
	m_RangeSensorDataPointList.setParent(this);
	/// No Initialization of m_RangeSensorDataPointList necessary.
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::RangeSensorDataSeq(const RangeSensorDataSeq &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_RangeSensorDataRec.setParent(this);
	/// No Initialization of m_RangeSensorDataRec necessary.
	m_RangeSensorDataPointList.setParent(this);
	/// No Initialization of m_RangeSensorDataPointList necessary.
	
	/// Copy the values
	m_RangeSensorDataRec = value.m_RangeSensorDataRec;
	m_RangeSensorDataRec.setParent(this);
	m_RangeSensorDataRec = value.m_RangeSensorDataRec;
	m_RangeSensorDataPointList = value.m_RangeSensorDataPointList;
	m_RangeSensorDataPointList.setParent(this);
	m_RangeSensorDataPointList = value.m_RangeSensorDataPointList;
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq::~RangeSensorDataSeq()
{
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataSeq* const ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::getRangeSensorDataSeq()
{
	return &m_RangeSensorDataSeq;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::setRangeSensorDataSeq(const RangeSensorDataSeq &value)
{
	m_RangeSensorDataSeq = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::getFieldValue() const
{
	return m_FieldValue;
}

int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::setFieldValue(jUnsignedByte fieldValue)
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
const unsigned int ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	switch(m_FieldValue)
	{
		case 0:
			size += m_RangeSensorDataErrorRec.getSize();
			break;
		case 1:
			size += m_RangeSensorDataSeq.getSize();
			break;
	}
	
	return size;
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::encode(unsigned char *bytes)
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
			m_RangeSensorDataSeq.encode(bytes + pos);
			pos += m_RangeSensorDataSeq.getSize();
			break;
	}
}

void ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::decode(const unsigned char *bytes)
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
			m_RangeSensorDataSeq.decode(bytes + pos);
			pos += m_RangeSensorDataSeq.getSize();
			break;
	}
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant &ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::operator=(const RangeSensorDataVariant &value)
{
	m_FieldValue = value.m_FieldValue;
	m_RangeSensorDataErrorRec = value.m_RangeSensorDataErrorRec;
	m_RangeSensorDataErrorRec.setParent(this);
	m_RangeSensorDataSeq = value.m_RangeSensorDataSeq;
	m_RangeSensorDataSeq.setParent(this);
	
	return *this;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::operator==(const RangeSensorDataVariant &value) const
{
	if (m_FieldValue != value.m_FieldValue)
	{
		return false;
	}
	if (m_RangeSensorDataErrorRec != value.m_RangeSensorDataErrorRec)
	{
		return false;
	}
	if (m_RangeSensorDataSeq != value.m_RangeSensorDataSeq)
	{
		return false;
	}
	
	return true;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::operator!=(const RangeSensorDataVariant &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataVariant()
{
	m_parent = NULL;
	m_FieldValue = 0;
	m_RangeSensorDataErrorRec.setParent(this);
	/// No Initialization of m_RangeSensorDataErrorRec necessary.
	m_RangeSensorDataSeq.setParent(this);
	/// No Initialization of m_RangeSensorDataSeq necessary.
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::RangeSensorDataVariant(const RangeSensorDataVariant &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_FieldValue = 0;
	m_RangeSensorDataErrorRec.setParent(this);
	/// No Initialization of m_RangeSensorDataErrorRec necessary.
	m_RangeSensorDataSeq.setParent(this);
	/// No Initialization of m_RangeSensorDataSeq necessary.
	
	/// Copy the values
	m_FieldValue = value.m_FieldValue;
	m_RangeSensorDataErrorRec = value.m_RangeSensorDataErrorRec;
	m_RangeSensorDataErrorRec.setParent(this);
	m_RangeSensorDataSeq = value.m_RangeSensorDataSeq;
	m_RangeSensorDataSeq.setParent(this);
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant::~RangeSensorDataVariant()
{
}

unsigned int ReportRangeSensorData::Body::RangeSensorDataList::getNumberOfElements() const
{
	return (unsigned int) m_RangeSensorDataVariant.size();
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataVariant* const ReportRangeSensorData::Body::RangeSensorDataList::getElement(unsigned int index)
{
	return &m_RangeSensorDataVariant.at(index);
}

int ReportRangeSensorData::Body::RangeSensorDataList::setElement(unsigned int index, const RangeSensorDataVariant &value)
{
	if(m_RangeSensorDataVariant.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorDataVariant.at(index) = value;
	m_RangeSensorDataVariant.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportRangeSensorData::Body::RangeSensorDataList::addElement(const RangeSensorDataVariant &value)
{
	m_RangeSensorDataVariant.push_back(value);
	m_RangeSensorDataVariant.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportRangeSensorData::Body::RangeSensorDataList::deleteElement(unsigned int index)
{
	if(m_RangeSensorDataVariant.size()-1 < index)
	{
		return 1;
	}
	
	m_RangeSensorDataVariant.erase(m_RangeSensorDataVariant.begin()+index);
	return 0;
}

int ReportRangeSensorData::Body::RangeSensorDataList::deleteLastElement()
{
	m_RangeSensorDataVariant.pop_back();
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
const unsigned int ReportRangeSensorData::Body::RangeSensorDataList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_RangeSensorDataVariant.size(); i++)
	{
		size += m_RangeSensorDataVariant[i].getSize();
	}
	
	return size;
}

void ReportRangeSensorData::Body::RangeSensorDataList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_RangeSensorDataVariant.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_RangeSensorDataVariant.size(); i++)
	{
		m_RangeSensorDataVariant[i].encode(bytes + pos);
		pos += m_RangeSensorDataVariant[i].getSize();
	}
}

void ReportRangeSensorData::Body::RangeSensorDataList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_RangeSensorDataVariant.resize(size);
	for (int i = 0; i < m_RangeSensorDataVariant.size(); i++)
	{
		m_RangeSensorDataVariant[i].decode(bytes + pos);
		pos += m_RangeSensorDataVariant[i].getSize();
	}
}

ReportRangeSensorData::Body::RangeSensorDataList &ReportRangeSensorData::Body::RangeSensorDataList::operator=(const RangeSensorDataList &value)
{
	m_RangeSensorDataVariant.clear();
	
	for (int i = 0; i < value.m_RangeSensorDataVariant.size(); i++)
	{
		m_RangeSensorDataVariant.push_back(value.m_RangeSensorDataVariant[i]);
		m_RangeSensorDataVariant[i].setParent(this);
	}
	
	return *this;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::operator==(const RangeSensorDataList &value) const
{
	for (int i = 0; i < m_RangeSensorDataVariant.size(); i++)
	{
		if (m_RangeSensorDataVariant[i] != value.m_RangeSensorDataVariant[i])
		{
			return false;
		}
	}
	
	return true;
}

bool ReportRangeSensorData::Body::RangeSensorDataList::operator!=(const RangeSensorDataList &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorDataVariant.size(); i++)
	{
		m_RangeSensorDataVariant[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorDataVariant necessary.
}

ReportRangeSensorData::Body::RangeSensorDataList::RangeSensorDataList(const RangeSensorDataList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_RangeSensorDataVariant.size(); i++)
	{
		m_RangeSensorDataVariant[i].setParent(this);
	}
	/// No Initialization of m_RangeSensorDataVariant necessary.
	
	/// Copy the values
	m_RangeSensorDataVariant.clear();
	
	for (int i = 0; i < value.m_RangeSensorDataVariant.size(); i++)
	{
		m_RangeSensorDataVariant.push_back(value.m_RangeSensorDataVariant[i]);
		m_RangeSensorDataVariant[i].setParent(this);
	}
}

ReportRangeSensorData::Body::RangeSensorDataList::~RangeSensorDataList()
{
}

ReportRangeSensorData::Body::RangeSensorDataList* const ReportRangeSensorData::Body::getRangeSensorDataList()
{
	return &m_RangeSensorDataList;
}

int ReportRangeSensorData::Body::setRangeSensorDataList(const RangeSensorDataList &value)
{
	m_RangeSensorDataList = value;
	setParentPresenceVector();
	return 0;
}

void ReportRangeSensorData::Body::setParentPresenceVector()
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
const unsigned int ReportRangeSensorData::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_RangeSensorDataList.getSize();
	
	return size;
}

void ReportRangeSensorData::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorDataList.encode(bytes + pos);
	pos += m_RangeSensorDataList.getSize();
}

void ReportRangeSensorData::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorDataList.decode(bytes + pos);
	pos += m_RangeSensorDataList.getSize();
}

ReportRangeSensorData::Body &ReportRangeSensorData::Body::operator=(const Body &value)
{
	m_RangeSensorDataList = value.m_RangeSensorDataList;
	m_RangeSensorDataList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportRangeSensorData::Body::operator==(const Body &value) const
{
	if (m_RangeSensorDataList != value.m_RangeSensorDataList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportRangeSensorData::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::Body::Body()
{
	m_RangeSensorDataList.setParent(this);
	/// No Initialization of m_RangeSensorDataList necessary.
}

ReportRangeSensorData::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_RangeSensorDataList.setParent(this);
	/// No Initialization of m_RangeSensorDataList necessary.
	
	/// Copy the values
	m_RangeSensorDataList = value.m_RangeSensorDataList;
	m_RangeSensorDataList.setParent(this);
	/// This code is currently not supported
}

ReportRangeSensorData::Body::~Body()
{
}

ReportRangeSensorData::Body* const ReportRangeSensorData::getBody()
{
	return &m_Body;
}

int ReportRangeSensorData::setBody(const Body &value)
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
const unsigned int ReportRangeSensorData::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportRangeSensorData::encode(unsigned char *bytes)
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

void ReportRangeSensorData::decode(const unsigned char *bytes)
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

ReportRangeSensorData &ReportRangeSensorData::operator=(const ReportRangeSensorData &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportRangeSensorData::operator==(const ReportRangeSensorData &value) const
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

bool ReportRangeSensorData::operator!=(const ReportRangeSensorData &value) const
{
	return !((*this) == value);
}

ReportRangeSensorData::ReportRangeSensorData()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportRangeSensorData::ReportRangeSensorData(const ReportRangeSensorData &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportRangeSensorData::~ReportRangeSensorData()
{
}


}
