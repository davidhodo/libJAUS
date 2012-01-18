#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/QueryRangeSensorData.h"

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

void QueryRangeSensorData::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryRangeSensorData::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryRangeSensorData::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryRangeSensorData::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryRangeSensorData::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryRangeSensorData::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryRangeSensorData::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryRangeSensorData::AppHeader::HeaderRec &QueryRangeSensorData::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryRangeSensorData::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryRangeSensorData::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryRangeSensorData::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2803;
}

QueryRangeSensorData::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2803;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryRangeSensorData::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryRangeSensorData::AppHeader::HeaderRec* const QueryRangeSensorData::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryRangeSensorData::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryRangeSensorData::AppHeader::setParentPresenceVector()
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
const unsigned int QueryRangeSensorData::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryRangeSensorData::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryRangeSensorData::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryRangeSensorData::AppHeader &QueryRangeSensorData::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryRangeSensorData::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryRangeSensorData::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryRangeSensorData::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryRangeSensorData::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryRangeSensorData::AppHeader::~AppHeader()
{
}

QueryRangeSensorData::AppHeader* const QueryRangeSensorData::getAppHeader()
{
	return &m_AppHeader;
}

int QueryRangeSensorData::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryRangeSensorData::Body::QueryRangeSensorDataList::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryRangeSensorData::Body::QueryRangeSensorDataList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::setParent(QueryRangeSensorDataList* parent)
{
	m_parent = parent;
}

void QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::getSensorID()
{
	return m_SensorID;
}

int QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::getReportCoordinateSystem()
{
	return m_ReportCoordinateSystem;
}

int QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::setReportCoordinateSystem(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		m_ReportCoordinateSystem = value;
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedShortInteger QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::getQueryPresenceVector()
{
	return m_QueryPresenceVector;
}

int QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::setQueryPresenceVector(jUnsignedShortInteger value)
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
const unsigned int QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::encode(unsigned char *bytes)
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
	jUnsignedShortInteger m_QueryPresenceVectorTemp;
	
	m_QueryPresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_QueryPresenceVector);
	memcpy(bytes + pos, &m_QueryPresenceVectorTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::decode(const unsigned char *bytes)
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
	jUnsignedShortInteger m_QueryPresenceVectorTemp;
	
	memcpy(&m_QueryPresenceVectorTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_QueryPresenceVector = JSIDL_v_1_0::correctEndianness(m_QueryPresenceVectorTemp);
	pos += sizeof(jUnsignedShortInteger);
}

QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec &QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::operator=(const QueryRangeSensorDataRec &value)
{
	m_SensorID = value.m_SensorID;
	m_ReportCoordinateSystem = value.m_ReportCoordinateSystem;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
	
	return *this;
}

bool QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::operator==(const QueryRangeSensorDataRec &value) const
{
	if (m_SensorID != value.m_SensorID)
	{
		return false;
	}
	if (m_ReportCoordinateSystem != value.m_ReportCoordinateSystem)
	{
		return false;
	}
	if (m_QueryPresenceVector != value.m_QueryPresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::operator!=(const QueryRangeSensorDataRec &value) const
{
	return !((*this) == value);
}

QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::QueryRangeSensorDataRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_ReportCoordinateSystem = 0;
	m_QueryPresenceVector = 0;
}

QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::QueryRangeSensorDataRec(const QueryRangeSensorDataRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SensorID = 0;
	m_ReportCoordinateSystem = 0;
	m_QueryPresenceVector = 0;
	
	/// Copy the values
	m_SensorID = value.m_SensorID;
	m_ReportCoordinateSystem = value.m_ReportCoordinateSystem;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
}

QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec::~QueryRangeSensorDataRec()
{
}

unsigned int QueryRangeSensorData::Body::QueryRangeSensorDataList::getNumberOfElements() const
{
	return (unsigned int) m_QueryRangeSensorDataRec.size();
}

QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataRec* const QueryRangeSensorData::Body::QueryRangeSensorDataList::getElement(unsigned int index)
{
	return &m_QueryRangeSensorDataRec.at(index);
}

int QueryRangeSensorData::Body::QueryRangeSensorDataList::setElement(unsigned int index, const QueryRangeSensorDataRec &value)
{
	if(m_QueryRangeSensorDataRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryRangeSensorDataRec.at(index) = value;
	m_QueryRangeSensorDataRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryRangeSensorData::Body::QueryRangeSensorDataList::addElement(const QueryRangeSensorDataRec &value)
{
	m_QueryRangeSensorDataRec.push_back(value);
	m_QueryRangeSensorDataRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryRangeSensorData::Body::QueryRangeSensorDataList::deleteElement(unsigned int index)
{
	if(m_QueryRangeSensorDataRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryRangeSensorDataRec.erase(m_QueryRangeSensorDataRec.begin()+index);
	return 0;
}

int QueryRangeSensorData::Body::QueryRangeSensorDataList::deleteLastElement()
{
	m_QueryRangeSensorDataRec.pop_back();
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
const unsigned int QueryRangeSensorData::Body::QueryRangeSensorDataList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_QueryRangeSensorDataRec.size(); i++)
	{
		size += m_QueryRangeSensorDataRec[i].getSize();
	}
	
	return size;
}

void QueryRangeSensorData::Body::QueryRangeSensorDataList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_QueryRangeSensorDataRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_QueryRangeSensorDataRec.size(); i++)
	{
		m_QueryRangeSensorDataRec[i].encode(bytes + pos);
		pos += m_QueryRangeSensorDataRec[i].getSize();
	}
}

void QueryRangeSensorData::Body::QueryRangeSensorDataList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_QueryRangeSensorDataRec.resize(size);
	for (int i = 0; i < m_QueryRangeSensorDataRec.size(); i++)
	{
		m_QueryRangeSensorDataRec[i].decode(bytes + pos);
		pos += m_QueryRangeSensorDataRec[i].getSize();
	}
}

QueryRangeSensorData::Body::QueryRangeSensorDataList &QueryRangeSensorData::Body::QueryRangeSensorDataList::operator=(const QueryRangeSensorDataList &value)
{
	m_QueryRangeSensorDataRec.clear();
	
	for (int i = 0; i < value.m_QueryRangeSensorDataRec.size(); i++)
	{
		m_QueryRangeSensorDataRec.push_back(value.m_QueryRangeSensorDataRec[i]);
		m_QueryRangeSensorDataRec[i].setParent(this);
	}
	
	return *this;
}

bool QueryRangeSensorData::Body::QueryRangeSensorDataList::operator==(const QueryRangeSensorDataList &value) const
{
	for (int i = 0; i < m_QueryRangeSensorDataRec.size(); i++)
	{
		if (m_QueryRangeSensorDataRec[i] !=  value.m_QueryRangeSensorDataRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool QueryRangeSensorData::Body::QueryRangeSensorDataList::operator!=(const QueryRangeSensorDataList &value) const
{
	return !((*this) == value);
}

QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryRangeSensorDataRec.size(); i++)
	{
		m_QueryRangeSensorDataRec[i].setParent(this);
	}
	/// No Initialization of m_QueryRangeSensorDataRec necessary.
}

QueryRangeSensorData::Body::QueryRangeSensorDataList::QueryRangeSensorDataList(const QueryRangeSensorDataList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryRangeSensorDataRec.size(); i++)
	{
		m_QueryRangeSensorDataRec[i].setParent(this);
	}
	/// No Initialization of m_QueryRangeSensorDataRec necessary.
	
	/// Copy the values
	m_QueryRangeSensorDataRec.clear();
	
	for (int i = 0; i < value.m_QueryRangeSensorDataRec.size(); i++)
	{
		m_QueryRangeSensorDataRec.push_back(value.m_QueryRangeSensorDataRec[i]);
		m_QueryRangeSensorDataRec[i].setParent(this);
	}
}

QueryRangeSensorData::Body::QueryRangeSensorDataList::~QueryRangeSensorDataList()
{
}

QueryRangeSensorData::Body::QueryRangeSensorDataList* const QueryRangeSensorData::Body::getQueryRangeSensorDataList()
{
	return &m_QueryRangeSensorDataList;
}

int QueryRangeSensorData::Body::setQueryRangeSensorDataList(const QueryRangeSensorDataList &value)
{
	m_QueryRangeSensorDataList = value;
	setParentPresenceVector();
	return 0;
}

void QueryRangeSensorData::Body::setParentPresenceVector()
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
const unsigned int QueryRangeSensorData::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryRangeSensorDataList.getSize();
	
	return size;
}

void QueryRangeSensorData::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryRangeSensorDataList.encode(bytes + pos);
	pos += m_QueryRangeSensorDataList.getSize();
}

void QueryRangeSensorData::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryRangeSensorDataList.decode(bytes + pos);
	pos += m_QueryRangeSensorDataList.getSize();
}

QueryRangeSensorData::Body &QueryRangeSensorData::Body::operator=(const Body &value)
{
	m_QueryRangeSensorDataList = value.m_QueryRangeSensorDataList;
	m_QueryRangeSensorDataList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryRangeSensorData::Body::operator==(const Body &value) const
{
	if (m_QueryRangeSensorDataList != value.m_QueryRangeSensorDataList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryRangeSensorData::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryRangeSensorData::Body::Body()
{
	m_QueryRangeSensorDataList.setParent(this);
	/// No Initialization of m_QueryRangeSensorDataList necessary.
}

QueryRangeSensorData::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryRangeSensorDataList.setParent(this);
	/// No Initialization of m_QueryRangeSensorDataList necessary.
	
	/// Copy the values
	m_QueryRangeSensorDataList = value.m_QueryRangeSensorDataList;
	m_QueryRangeSensorDataList.setParent(this);
	/// This code is currently not supported
}

QueryRangeSensorData::Body::~Body()
{
}

QueryRangeSensorData::Body* const QueryRangeSensorData::getBody()
{
	return &m_Body;
}

int QueryRangeSensorData::setBody(const Body &value)
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
const unsigned int QueryRangeSensorData::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryRangeSensorData::encode(unsigned char *bytes)
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

void QueryRangeSensorData::decode(const unsigned char *bytes)
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

QueryRangeSensorData &QueryRangeSensorData::operator=(const QueryRangeSensorData &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryRangeSensorData::operator==(const QueryRangeSensorData &value) const
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

bool QueryRangeSensorData::operator!=(const QueryRangeSensorData &value) const
{
	return !((*this) == value);
}

QueryRangeSensorData::QueryRangeSensorData()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryRangeSensorData::QueryRangeSensorData(const QueryRangeSensorData &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryRangeSensorData::~QueryRangeSensorData()
{
}


}
