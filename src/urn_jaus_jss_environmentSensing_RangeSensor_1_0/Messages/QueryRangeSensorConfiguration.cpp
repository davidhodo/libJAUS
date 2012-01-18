#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/QueryRangeSensorConfiguration.h"

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

void QueryRangeSensorConfiguration::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryRangeSensorConfiguration::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryRangeSensorConfiguration::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryRangeSensorConfiguration::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryRangeSensorConfiguration::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryRangeSensorConfiguration::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryRangeSensorConfiguration::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryRangeSensorConfiguration::AppHeader::HeaderRec &QueryRangeSensorConfiguration::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryRangeSensorConfiguration::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryRangeSensorConfiguration::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryRangeSensorConfiguration::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2802;
}

QueryRangeSensorConfiguration::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2802;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryRangeSensorConfiguration::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryRangeSensorConfiguration::AppHeader::HeaderRec* const QueryRangeSensorConfiguration::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryRangeSensorConfiguration::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryRangeSensorConfiguration::AppHeader::setParentPresenceVector()
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
const unsigned int QueryRangeSensorConfiguration::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryRangeSensorConfiguration::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryRangeSensorConfiguration::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryRangeSensorConfiguration::AppHeader &QueryRangeSensorConfiguration::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryRangeSensorConfiguration::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryRangeSensorConfiguration::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryRangeSensorConfiguration::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryRangeSensorConfiguration::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryRangeSensorConfiguration::AppHeader::~AppHeader()
{
}

QueryRangeSensorConfiguration::AppHeader* const QueryRangeSensorConfiguration::getAppHeader()
{
	return &m_AppHeader;
}

int QueryRangeSensorConfiguration::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::setParent(RangeSensorConfigurationList* parent)
{
	m_parent = parent;
}

void QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::getSensorID()
{
	return m_SensorID;
}

int QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedShortInteger QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::getQueryPresenceVector()
{
	return m_QueryPresenceVector;
}

int QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::setQueryPresenceVector(jUnsignedShortInteger value)
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
const unsigned int QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::encode(unsigned char *bytes)
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
	jUnsignedShortInteger m_QueryPresenceVectorTemp;
	
	m_QueryPresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_QueryPresenceVector);
	memcpy(bytes + pos, &m_QueryPresenceVectorTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::decode(const unsigned char *bytes)
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
	jUnsignedShortInteger m_QueryPresenceVectorTemp;
	
	memcpy(&m_QueryPresenceVectorTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_QueryPresenceVector = JSIDL_v_1_0::correctEndianness(m_QueryPresenceVectorTemp);
	pos += sizeof(jUnsignedShortInteger);
}

QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec &QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::operator=(const QueryRangeSensorConfigurationRec &value)
{
	m_SensorID = value.m_SensorID;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
	
	return *this;
}

bool QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::operator==(const QueryRangeSensorConfigurationRec &value) const
{
	if (m_SensorID != value.m_SensorID)
	{
		return false;
	}
	if (m_QueryPresenceVector != value.m_QueryPresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::operator!=(const QueryRangeSensorConfigurationRec &value) const
{
	return !((*this) == value);
}

QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::QueryRangeSensorConfigurationRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_QueryPresenceVector = 0;
}

QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::QueryRangeSensorConfigurationRec(const QueryRangeSensorConfigurationRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SensorID = 0;
	m_QueryPresenceVector = 0;
	
	/// Copy the values
	m_SensorID = value.m_SensorID;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
}

QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec::~QueryRangeSensorConfigurationRec()
{
}

unsigned int QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::getNumberOfElements() const
{
	return (unsigned int) m_QueryRangeSensorConfigurationRec.size();
}

QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::QueryRangeSensorConfigurationRec* const QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::getElement(unsigned int index)
{
	return &m_QueryRangeSensorConfigurationRec.at(index);
}

int QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::setElement(unsigned int index, const QueryRangeSensorConfigurationRec &value)
{
	if(m_QueryRangeSensorConfigurationRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryRangeSensorConfigurationRec.at(index) = value;
	m_QueryRangeSensorConfigurationRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::addElement(const QueryRangeSensorConfigurationRec &value)
{
	m_QueryRangeSensorConfigurationRec.push_back(value);
	m_QueryRangeSensorConfigurationRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::deleteElement(unsigned int index)
{
	if(m_QueryRangeSensorConfigurationRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryRangeSensorConfigurationRec.erase(m_QueryRangeSensorConfigurationRec.begin()+index);
	return 0;
}

int QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::deleteLastElement()
{
	m_QueryRangeSensorConfigurationRec.pop_back();
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
const unsigned int QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_QueryRangeSensorConfigurationRec.size(); i++)
	{
		size += m_QueryRangeSensorConfigurationRec[i].getSize();
	}
	
	return size;
}

void QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_QueryRangeSensorConfigurationRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_QueryRangeSensorConfigurationRec.size(); i++)
	{
		m_QueryRangeSensorConfigurationRec[i].encode(bytes + pos);
		pos += m_QueryRangeSensorConfigurationRec[i].getSize();
	}
}

void QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_QueryRangeSensorConfigurationRec.resize(size);
	for (int i = 0; i < m_QueryRangeSensorConfigurationRec.size(); i++)
	{
		m_QueryRangeSensorConfigurationRec[i].decode(bytes + pos);
		pos += m_QueryRangeSensorConfigurationRec[i].getSize();
	}
}

QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList &QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::operator=(const RangeSensorConfigurationList &value)
{
	m_QueryRangeSensorConfigurationRec.clear();
	
	for (int i = 0; i < value.m_QueryRangeSensorConfigurationRec.size(); i++)
	{
		m_QueryRangeSensorConfigurationRec.push_back(value.m_QueryRangeSensorConfigurationRec[i]);
		m_QueryRangeSensorConfigurationRec[i].setParent(this);
	}
	
	return *this;
}

bool QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::operator==(const RangeSensorConfigurationList &value) const
{
	for (int i = 0; i < m_QueryRangeSensorConfigurationRec.size(); i++)
	{
		if (m_QueryRangeSensorConfigurationRec[i] !=  value.m_QueryRangeSensorConfigurationRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::operator!=(const RangeSensorConfigurationList &value) const
{
	return !((*this) == value);
}

QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryRangeSensorConfigurationRec.size(); i++)
	{
		m_QueryRangeSensorConfigurationRec[i].setParent(this);
	}
	/// No Initialization of m_QueryRangeSensorConfigurationRec necessary.
}

QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::RangeSensorConfigurationList(const RangeSensorConfigurationList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryRangeSensorConfigurationRec.size(); i++)
	{
		m_QueryRangeSensorConfigurationRec[i].setParent(this);
	}
	/// No Initialization of m_QueryRangeSensorConfigurationRec necessary.
	
	/// Copy the values
	m_QueryRangeSensorConfigurationRec.clear();
	
	for (int i = 0; i < value.m_QueryRangeSensorConfigurationRec.size(); i++)
	{
		m_QueryRangeSensorConfigurationRec.push_back(value.m_QueryRangeSensorConfigurationRec[i]);
		m_QueryRangeSensorConfigurationRec[i].setParent(this);
	}
}

QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList::~RangeSensorConfigurationList()
{
}

QueryRangeSensorConfiguration::Body::RangeSensorConfigurationList* const QueryRangeSensorConfiguration::Body::getRangeSensorConfigurationList()
{
	return &m_RangeSensorConfigurationList;
}

int QueryRangeSensorConfiguration::Body::setRangeSensorConfigurationList(const RangeSensorConfigurationList &value)
{
	m_RangeSensorConfigurationList = value;
	setParentPresenceVector();
	return 0;
}

void QueryRangeSensorConfiguration::Body::setParentPresenceVector()
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
const unsigned int QueryRangeSensorConfiguration::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_RangeSensorConfigurationList.getSize();
	
	return size;
}

void QueryRangeSensorConfiguration::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorConfigurationList.encode(bytes + pos);
	pos += m_RangeSensorConfigurationList.getSize();
}

void QueryRangeSensorConfiguration::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorConfigurationList.decode(bytes + pos);
	pos += m_RangeSensorConfigurationList.getSize();
}

QueryRangeSensorConfiguration::Body &QueryRangeSensorConfiguration::Body::operator=(const Body &value)
{
	m_RangeSensorConfigurationList = value.m_RangeSensorConfigurationList;
	m_RangeSensorConfigurationList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryRangeSensorConfiguration::Body::operator==(const Body &value) const
{
	if (m_RangeSensorConfigurationList != value.m_RangeSensorConfigurationList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryRangeSensorConfiguration::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryRangeSensorConfiguration::Body::Body()
{
	m_RangeSensorConfigurationList.setParent(this);
	/// No Initialization of m_RangeSensorConfigurationList necessary.
}

QueryRangeSensorConfiguration::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_RangeSensorConfigurationList.setParent(this);
	/// No Initialization of m_RangeSensorConfigurationList necessary.
	
	/// Copy the values
	m_RangeSensorConfigurationList = value.m_RangeSensorConfigurationList;
	m_RangeSensorConfigurationList.setParent(this);
	/// This code is currently not supported
}

QueryRangeSensorConfiguration::Body::~Body()
{
}

QueryRangeSensorConfiguration::Body* const QueryRangeSensorConfiguration::getBody()
{
	return &m_Body;
}

int QueryRangeSensorConfiguration::setBody(const Body &value)
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
const unsigned int QueryRangeSensorConfiguration::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryRangeSensorConfiguration::encode(unsigned char *bytes)
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

void QueryRangeSensorConfiguration::decode(const unsigned char *bytes)
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

QueryRangeSensorConfiguration &QueryRangeSensorConfiguration::operator=(const QueryRangeSensorConfiguration &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryRangeSensorConfiguration::operator==(const QueryRangeSensorConfiguration &value) const
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

bool QueryRangeSensorConfiguration::operator!=(const QueryRangeSensorConfiguration &value) const
{
	return !((*this) == value);
}

QueryRangeSensorConfiguration::QueryRangeSensorConfiguration()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryRangeSensorConfiguration::QueryRangeSensorConfiguration(const QueryRangeSensorConfiguration &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryRangeSensorConfiguration::~QueryRangeSensorConfiguration()
{
}


}
