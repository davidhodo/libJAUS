#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/QueryRangeSensorCompressedData.h"

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

void QueryRangeSensorCompressedData::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryRangeSensorCompressedData::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryRangeSensorCompressedData::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryRangeSensorCompressedData::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryRangeSensorCompressedData::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryRangeSensorCompressedData::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryRangeSensorCompressedData::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryRangeSensorCompressedData::AppHeader::HeaderRec &QueryRangeSensorCompressedData::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryRangeSensorCompressedData::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryRangeSensorCompressedData::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCompressedData::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2804;
}

QueryRangeSensorCompressedData::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2804;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryRangeSensorCompressedData::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryRangeSensorCompressedData::AppHeader::HeaderRec* const QueryRangeSensorCompressedData::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryRangeSensorCompressedData::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryRangeSensorCompressedData::AppHeader::setParentPresenceVector()
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
const unsigned int QueryRangeSensorCompressedData::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryRangeSensorCompressedData::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryRangeSensorCompressedData::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryRangeSensorCompressedData::AppHeader &QueryRangeSensorCompressedData::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryRangeSensorCompressedData::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryRangeSensorCompressedData::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCompressedData::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryRangeSensorCompressedData::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryRangeSensorCompressedData::AppHeader::~AppHeader()
{
}

QueryRangeSensorCompressedData::AppHeader* const QueryRangeSensorCompressedData::getAppHeader()
{
	return &m_AppHeader;
}

int QueryRangeSensorCompressedData::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::setParent(QueryRangeSensorCompressedDataList* parent)
{
	m_parent = parent;
}

void QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::getSensorID()
{
	return m_SensorID;
}

int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::getReportCoordinateSystem()
{
	return m_ReportCoordinateSystem;
}

int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::setReportCoordinateSystem(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		m_ReportCoordinateSystem = value;
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::getDataCompression()
{
	return m_DataCompression;
}

int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::setDataCompression(jUnsignedByte value)
{
	if ((value == 0) || (value == 1) || (value == 2) || (value == 3))
	{
		m_DataCompression = value;
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedShortInteger QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::getQueryPresenceVector()
{
	return m_QueryPresenceVector;
}

int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::setQueryPresenceVector(jUnsignedShortInteger value)
{
	m_QueryPresenceVector = value;
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
const unsigned int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	size += sizeof(jUnsignedByte);
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::encode(unsigned char *bytes)
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
	jUnsignedByte m_DataCompressionTemp;
	
	m_DataCompressionTemp = JSIDL_v_1_0::correctEndianness(m_DataCompression);
	memcpy(bytes + pos, &m_DataCompressionTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
	jUnsignedShortInteger m_QueryPresenceVectorTemp;
	
	m_QueryPresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_QueryPresenceVector);
	memcpy(bytes + pos, &m_QueryPresenceVectorTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::decode(const unsigned char *bytes)
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
	jUnsignedByte m_DataCompressionTemp;
	
	memcpy(&m_DataCompressionTemp, bytes + pos, sizeof(jUnsignedByte));
	m_DataCompression = JSIDL_v_1_0::correctEndianness(m_DataCompressionTemp);
	pos += sizeof(jUnsignedByte);
	jUnsignedShortInteger m_QueryPresenceVectorTemp;
	
	memcpy(&m_QueryPresenceVectorTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_QueryPresenceVector = JSIDL_v_1_0::correctEndianness(m_QueryPresenceVectorTemp);
	pos += sizeof(jUnsignedShortInteger);
}

QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec &QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::operator=(const QueryRangeSensorCompressedDataRec &value)
{
	m_SensorID = value.m_SensorID;
	m_ReportCoordinateSystem = value.m_ReportCoordinateSystem;
	m_DataCompression = value.m_DataCompression;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
	
	return *this;
}

bool QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::operator==(const QueryRangeSensorCompressedDataRec &value) const
{
	if (m_SensorID != value.m_SensorID)
	{
		return false;
	}
	if (m_ReportCoordinateSystem != value.m_ReportCoordinateSystem)
	{
		return false;
	}
	if (m_DataCompression != value.m_DataCompression)
	{
		return false;
	}
	if (m_QueryPresenceVector != value.m_QueryPresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::operator!=(const QueryRangeSensorCompressedDataRec &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::QueryRangeSensorCompressedDataRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_ReportCoordinateSystem = 0;
	m_DataCompression = 0;
	m_QueryPresenceVector = 0;
}

QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::QueryRangeSensorCompressedDataRec(const QueryRangeSensorCompressedDataRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SensorID = 0;
	m_ReportCoordinateSystem = 0;
	m_DataCompression = 0;
	m_QueryPresenceVector = 0;
	
	/// Copy the values
	m_SensorID = value.m_SensorID;
	m_ReportCoordinateSystem = value.m_ReportCoordinateSystem;
	m_DataCompression = value.m_DataCompression;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
}

QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec::~QueryRangeSensorCompressedDataRec()
{
}

unsigned int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::getNumberOfElements() const
{
	return (unsigned int) m_QueryRangeSensorCompressedDataRec.size();
}

QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataRec* const QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::getElement(unsigned int index)
{
	return &m_QueryRangeSensorCompressedDataRec.at(index);
}

int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::setElement(unsigned int index, const QueryRangeSensorCompressedDataRec &value)
{
	if(m_QueryRangeSensorCompressedDataRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryRangeSensorCompressedDataRec.at(index) = value;
	m_QueryRangeSensorCompressedDataRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::addElement(const QueryRangeSensorCompressedDataRec &value)
{
	m_QueryRangeSensorCompressedDataRec.push_back(value);
	m_QueryRangeSensorCompressedDataRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::deleteElement(unsigned int index)
{
	if(m_QueryRangeSensorCompressedDataRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryRangeSensorCompressedDataRec.erase(m_QueryRangeSensorCompressedDataRec.begin()+index);
	return 0;
}

int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::deleteLastElement()
{
	m_QueryRangeSensorCompressedDataRec.pop_back();
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
const unsigned int QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_QueryRangeSensorCompressedDataRec.size(); i++)
	{
		size += m_QueryRangeSensorCompressedDataRec[i].getSize();
	}
	
	return size;
}

void QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_QueryRangeSensorCompressedDataRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_QueryRangeSensorCompressedDataRec.size(); i++)
	{
		m_QueryRangeSensorCompressedDataRec[i].encode(bytes + pos);
		pos += m_QueryRangeSensorCompressedDataRec[i].getSize();
	}
}

void QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_QueryRangeSensorCompressedDataRec.resize(size);
	for (int i = 0; i < m_QueryRangeSensorCompressedDataRec.size(); i++)
	{
		m_QueryRangeSensorCompressedDataRec[i].decode(bytes + pos);
		pos += m_QueryRangeSensorCompressedDataRec[i].getSize();
	}
}

QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList &QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::operator=(const QueryRangeSensorCompressedDataList &value)
{
	m_QueryRangeSensorCompressedDataRec.clear();
	
	for (int i = 0; i < value.m_QueryRangeSensorCompressedDataRec.size(); i++)
	{
		m_QueryRangeSensorCompressedDataRec.push_back(value.m_QueryRangeSensorCompressedDataRec[i]);
		m_QueryRangeSensorCompressedDataRec[i].setParent(this);
	}
	
	return *this;
}

bool QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::operator==(const QueryRangeSensorCompressedDataList &value) const
{
	for (int i = 0; i < m_QueryRangeSensorCompressedDataRec.size(); i++)
	{
		if (m_QueryRangeSensorCompressedDataRec[i] !=  value.m_QueryRangeSensorCompressedDataRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::operator!=(const QueryRangeSensorCompressedDataList &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryRangeSensorCompressedDataRec.size(); i++)
	{
		m_QueryRangeSensorCompressedDataRec[i].setParent(this);
	}
	/// No Initialization of m_QueryRangeSensorCompressedDataRec necessary.
}

QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::QueryRangeSensorCompressedDataList(const QueryRangeSensorCompressedDataList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryRangeSensorCompressedDataRec.size(); i++)
	{
		m_QueryRangeSensorCompressedDataRec[i].setParent(this);
	}
	/// No Initialization of m_QueryRangeSensorCompressedDataRec necessary.
	
	/// Copy the values
	m_QueryRangeSensorCompressedDataRec.clear();
	
	for (int i = 0; i < value.m_QueryRangeSensorCompressedDataRec.size(); i++)
	{
		m_QueryRangeSensorCompressedDataRec.push_back(value.m_QueryRangeSensorCompressedDataRec[i]);
		m_QueryRangeSensorCompressedDataRec[i].setParent(this);
	}
}

QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList::~QueryRangeSensorCompressedDataList()
{
}

QueryRangeSensorCompressedData::Body::QueryRangeSensorCompressedDataList* const QueryRangeSensorCompressedData::Body::getQueryRangeSensorCompressedDataList()
{
	return &m_QueryRangeSensorCompressedDataList;
}

int QueryRangeSensorCompressedData::Body::setQueryRangeSensorCompressedDataList(const QueryRangeSensorCompressedDataList &value)
{
	m_QueryRangeSensorCompressedDataList = value;
	setParentPresenceVector();
	return 0;
}

void QueryRangeSensorCompressedData::Body::setParentPresenceVector()
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
const unsigned int QueryRangeSensorCompressedData::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryRangeSensorCompressedDataList.getSize();
	
	return size;
}

void QueryRangeSensorCompressedData::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryRangeSensorCompressedDataList.encode(bytes + pos);
	pos += m_QueryRangeSensorCompressedDataList.getSize();
}

void QueryRangeSensorCompressedData::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryRangeSensorCompressedDataList.decode(bytes + pos);
	pos += m_QueryRangeSensorCompressedDataList.getSize();
}

QueryRangeSensorCompressedData::Body &QueryRangeSensorCompressedData::Body::operator=(const Body &value)
{
	m_QueryRangeSensorCompressedDataList = value.m_QueryRangeSensorCompressedDataList;
	m_QueryRangeSensorCompressedDataList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryRangeSensorCompressedData::Body::operator==(const Body &value) const
{
	if (m_QueryRangeSensorCompressedDataList != value.m_QueryRangeSensorCompressedDataList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryRangeSensorCompressedData::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCompressedData::Body::Body()
{
	m_QueryRangeSensorCompressedDataList.setParent(this);
	/// No Initialization of m_QueryRangeSensorCompressedDataList necessary.
}

QueryRangeSensorCompressedData::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryRangeSensorCompressedDataList.setParent(this);
	/// No Initialization of m_QueryRangeSensorCompressedDataList necessary.
	
	/// Copy the values
	m_QueryRangeSensorCompressedDataList = value.m_QueryRangeSensorCompressedDataList;
	m_QueryRangeSensorCompressedDataList.setParent(this);
	/// This code is currently not supported
}

QueryRangeSensorCompressedData::Body::~Body()
{
}

QueryRangeSensorCompressedData::Body* const QueryRangeSensorCompressedData::getBody()
{
	return &m_Body;
}

int QueryRangeSensorCompressedData::setBody(const Body &value)
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
const unsigned int QueryRangeSensorCompressedData::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryRangeSensorCompressedData::encode(unsigned char *bytes)
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

void QueryRangeSensorCompressedData::decode(const unsigned char *bytes)
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

QueryRangeSensorCompressedData &QueryRangeSensorCompressedData::operator=(const QueryRangeSensorCompressedData &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryRangeSensorCompressedData::operator==(const QueryRangeSensorCompressedData &value) const
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

bool QueryRangeSensorCompressedData::operator!=(const QueryRangeSensorCompressedData &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCompressedData::QueryRangeSensorCompressedData()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryRangeSensorCompressedData::QueryRangeSensorCompressedData(const QueryRangeSensorCompressedData &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryRangeSensorCompressedData::~QueryRangeSensorCompressedData()
{
}


}
