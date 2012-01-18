#include "urn_jaus_jss_environmentSensing_DigitalVideo_1_0/Messages/QueryDigitalVideoSensorConfiguration.h"

namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

void QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec &QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2809;
}

QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2809;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryDigitalVideoSensorConfiguration::AppHeader::HeaderRec* const QueryDigitalVideoSensorConfiguration::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryDigitalVideoSensorConfiguration::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryDigitalVideoSensorConfiguration::AppHeader::setParentPresenceVector()
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
const unsigned int QueryDigitalVideoSensorConfiguration::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryDigitalVideoSensorConfiguration::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryDigitalVideoSensorConfiguration::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryDigitalVideoSensorConfiguration::AppHeader &QueryDigitalVideoSensorConfiguration::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryDigitalVideoSensorConfiguration::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryDigitalVideoSensorConfiguration::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorConfiguration::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryDigitalVideoSensorConfiguration::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryDigitalVideoSensorConfiguration::AppHeader::~AppHeader()
{
}

QueryDigitalVideoSensorConfiguration::AppHeader* const QueryDigitalVideoSensorConfiguration::getAppHeader()
{
	return &m_AppHeader;
}

int QueryDigitalVideoSensorConfiguration::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::setParent(QueryDigitalVideoConfigurationList* parent)
{
	m_parent = parent;
}

void QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::getSensorID()
{
	return m_SensorID;
}

int QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::getQueryPresenceVector()
{
	return m_QueryPresenceVector;
}

int QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::setQueryPresenceVector(jUnsignedByte value)
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
const unsigned int QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	
	return size;
}

void QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::encode(unsigned char *bytes)
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
	jUnsignedByte m_QueryPresenceVectorTemp;
	
	m_QueryPresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_QueryPresenceVector);
	memcpy(bytes + pos, &m_QueryPresenceVectorTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
}

void QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::decode(const unsigned char *bytes)
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
	jUnsignedByte m_QueryPresenceVectorTemp;
	
	memcpy(&m_QueryPresenceVectorTemp, bytes + pos, sizeof(jUnsignedByte));
	m_QueryPresenceVector = JSIDL_v_1_0::correctEndianness(m_QueryPresenceVectorTemp);
	pos += sizeof(jUnsignedByte);
}

QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec &QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::operator=(const QueryDigitalVideoConfigurationRec &value)
{
	m_SensorID = value.m_SensorID;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
	
	return *this;
}

bool QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::operator==(const QueryDigitalVideoConfigurationRec &value) const
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

bool QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::operator!=(const QueryDigitalVideoConfigurationRec &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::QueryDigitalVideoConfigurationRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_QueryPresenceVector = 0;
}

QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::QueryDigitalVideoConfigurationRec(const QueryDigitalVideoConfigurationRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SensorID = 0;
	m_QueryPresenceVector = 0;
	
	/// Copy the values
	m_SensorID = value.m_SensorID;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
}

QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec::~QueryDigitalVideoConfigurationRec()
{
}

unsigned int QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::getNumberOfElements() const
{
	return (unsigned int) m_QueryDigitalVideoConfigurationRec.size();
}

QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationRec* const QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::getElement(unsigned int index)
{
	return &m_QueryDigitalVideoConfigurationRec.at(index);
}

int QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::setElement(unsigned int index, const QueryDigitalVideoConfigurationRec &value)
{
	if(m_QueryDigitalVideoConfigurationRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryDigitalVideoConfigurationRec.at(index) = value;
	m_QueryDigitalVideoConfigurationRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::addElement(const QueryDigitalVideoConfigurationRec &value)
{
	m_QueryDigitalVideoConfigurationRec.push_back(value);
	m_QueryDigitalVideoConfigurationRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::deleteElement(unsigned int index)
{
	if(m_QueryDigitalVideoConfigurationRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryDigitalVideoConfigurationRec.erase(m_QueryDigitalVideoConfigurationRec.begin()+index);
	return 0;
}

int QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::deleteLastElement()
{
	m_QueryDigitalVideoConfigurationRec.pop_back();
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
const unsigned int QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_QueryDigitalVideoConfigurationRec.size(); i++)
	{
		size += m_QueryDigitalVideoConfigurationRec[i].getSize();
	}
	
	return size;
}

void QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_QueryDigitalVideoConfigurationRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_QueryDigitalVideoConfigurationRec.size(); i++)
	{
		m_QueryDigitalVideoConfigurationRec[i].encode(bytes + pos);
		pos += m_QueryDigitalVideoConfigurationRec[i].getSize();
	}
}

void QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_QueryDigitalVideoConfigurationRec.resize(size);
	for (int i = 0; i < m_QueryDigitalVideoConfigurationRec.size(); i++)
	{
		m_QueryDigitalVideoConfigurationRec[i].decode(bytes + pos);
		pos += m_QueryDigitalVideoConfigurationRec[i].getSize();
	}
}

QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList &QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::operator=(const QueryDigitalVideoConfigurationList &value)
{
	m_QueryDigitalVideoConfigurationRec.clear();
	
	for (int i = 0; i < value.m_QueryDigitalVideoConfigurationRec.size(); i++)
	{
		m_QueryDigitalVideoConfigurationRec.push_back(value.m_QueryDigitalVideoConfigurationRec[i]);
		m_QueryDigitalVideoConfigurationRec[i].setParent(this);
	}
	
	return *this;
}

bool QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::operator==(const QueryDigitalVideoConfigurationList &value) const
{
	for (int i = 0; i < m_QueryDigitalVideoConfigurationRec.size(); i++)
	{
		if (m_QueryDigitalVideoConfigurationRec[i] !=  value.m_QueryDigitalVideoConfigurationRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::operator!=(const QueryDigitalVideoConfigurationList &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryDigitalVideoConfigurationRec.size(); i++)
	{
		m_QueryDigitalVideoConfigurationRec[i].setParent(this);
	}
	/// No Initialization of m_QueryDigitalVideoConfigurationRec necessary.
}

QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::QueryDigitalVideoConfigurationList(const QueryDigitalVideoConfigurationList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryDigitalVideoConfigurationRec.size(); i++)
	{
		m_QueryDigitalVideoConfigurationRec[i].setParent(this);
	}
	/// No Initialization of m_QueryDigitalVideoConfigurationRec necessary.
	
	/// Copy the values
	m_QueryDigitalVideoConfigurationRec.clear();
	
	for (int i = 0; i < value.m_QueryDigitalVideoConfigurationRec.size(); i++)
	{
		m_QueryDigitalVideoConfigurationRec.push_back(value.m_QueryDigitalVideoConfigurationRec[i]);
		m_QueryDigitalVideoConfigurationRec[i].setParent(this);
	}
}

QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList::~QueryDigitalVideoConfigurationList()
{
}

QueryDigitalVideoSensorConfiguration::Body::QueryDigitalVideoConfigurationList* const QueryDigitalVideoSensorConfiguration::Body::getQueryDigitalVideoConfigurationList()
{
	return &m_QueryDigitalVideoConfigurationList;
}

int QueryDigitalVideoSensorConfiguration::Body::setQueryDigitalVideoConfigurationList(const QueryDigitalVideoConfigurationList &value)
{
	m_QueryDigitalVideoConfigurationList = value;
	setParentPresenceVector();
	return 0;
}

void QueryDigitalVideoSensorConfiguration::Body::setParentPresenceVector()
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
const unsigned int QueryDigitalVideoSensorConfiguration::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryDigitalVideoConfigurationList.getSize();
	
	return size;
}

void QueryDigitalVideoSensorConfiguration::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryDigitalVideoConfigurationList.encode(bytes + pos);
	pos += m_QueryDigitalVideoConfigurationList.getSize();
}

void QueryDigitalVideoSensorConfiguration::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryDigitalVideoConfigurationList.decode(bytes + pos);
	pos += m_QueryDigitalVideoConfigurationList.getSize();
}

QueryDigitalVideoSensorConfiguration::Body &QueryDigitalVideoSensorConfiguration::Body::operator=(const Body &value)
{
	m_QueryDigitalVideoConfigurationList = value.m_QueryDigitalVideoConfigurationList;
	m_QueryDigitalVideoConfigurationList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryDigitalVideoSensorConfiguration::Body::operator==(const Body &value) const
{
	if (m_QueryDigitalVideoConfigurationList != value.m_QueryDigitalVideoConfigurationList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryDigitalVideoSensorConfiguration::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorConfiguration::Body::Body()
{
	m_QueryDigitalVideoConfigurationList.setParent(this);
	/// No Initialization of m_QueryDigitalVideoConfigurationList necessary.
}

QueryDigitalVideoSensorConfiguration::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryDigitalVideoConfigurationList.setParent(this);
	/// No Initialization of m_QueryDigitalVideoConfigurationList necessary.
	
	/// Copy the values
	m_QueryDigitalVideoConfigurationList = value.m_QueryDigitalVideoConfigurationList;
	m_QueryDigitalVideoConfigurationList.setParent(this);
	/// This code is currently not supported
}

QueryDigitalVideoSensorConfiguration::Body::~Body()
{
}

QueryDigitalVideoSensorConfiguration::Body* const QueryDigitalVideoSensorConfiguration::getBody()
{
	return &m_Body;
}

int QueryDigitalVideoSensorConfiguration::setBody(const Body &value)
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
const unsigned int QueryDigitalVideoSensorConfiguration::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryDigitalVideoSensorConfiguration::encode(unsigned char *bytes)
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

void QueryDigitalVideoSensorConfiguration::decode(const unsigned char *bytes)
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

QueryDigitalVideoSensorConfiguration &QueryDigitalVideoSensorConfiguration::operator=(const QueryDigitalVideoSensorConfiguration &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryDigitalVideoSensorConfiguration::operator==(const QueryDigitalVideoSensorConfiguration &value) const
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

bool QueryDigitalVideoSensorConfiguration::operator!=(const QueryDigitalVideoSensorConfiguration &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorConfiguration::QueryDigitalVideoSensorConfiguration()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryDigitalVideoSensorConfiguration::QueryDigitalVideoSensorConfiguration(const QueryDigitalVideoSensorConfiguration &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryDigitalVideoSensorConfiguration::~QueryDigitalVideoSensorConfiguration()
{
}


}
