#include "urn_jaus_jss_environmentSensing_RangeSensor_1_0/Messages/QueryRangeSensorCapabilities.h"

namespace urn_jaus_jss_environmentSensing_RangeSensor_1_0
{

void QueryRangeSensorCapabilities::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryRangeSensorCapabilities::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryRangeSensorCapabilities::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryRangeSensorCapabilities::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryRangeSensorCapabilities::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryRangeSensorCapabilities::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryRangeSensorCapabilities::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryRangeSensorCapabilities::AppHeader::HeaderRec &QueryRangeSensorCapabilities::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryRangeSensorCapabilities::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryRangeSensorCapabilities::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCapabilities::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2801;
}

QueryRangeSensorCapabilities::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2801;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryRangeSensorCapabilities::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryRangeSensorCapabilities::AppHeader::HeaderRec* const QueryRangeSensorCapabilities::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryRangeSensorCapabilities::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryRangeSensorCapabilities::AppHeader::setParentPresenceVector()
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
const unsigned int QueryRangeSensorCapabilities::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryRangeSensorCapabilities::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryRangeSensorCapabilities::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryRangeSensorCapabilities::AppHeader &QueryRangeSensorCapabilities::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryRangeSensorCapabilities::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryRangeSensorCapabilities::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCapabilities::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryRangeSensorCapabilities::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryRangeSensorCapabilities::AppHeader::~AppHeader()
{
}

QueryRangeSensorCapabilities::AppHeader* const QueryRangeSensorCapabilities::getAppHeader()
{
	return &m_AppHeader;
}

int QueryRangeSensorCapabilities::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::setParent(RangeSensorCapabilitiesList* parent)
{
	m_parent = parent;
}

void QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::getSensorID()
{
	return m_SensorID;
}

int QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedShortInteger QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::getQueryPresenceVector()
{
	return m_QueryPresenceVector;
}

int QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::setQueryPresenceVector(jUnsignedShortInteger value)
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
const unsigned int QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::encode(unsigned char *bytes)
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

void QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::decode(const unsigned char *bytes)
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

QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec &QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::operator=(const QueryRangeSensorCapabilitiesRec &value)
{
	m_SensorID = value.m_SensorID;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
	
	return *this;
}

bool QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::operator==(const QueryRangeSensorCapabilitiesRec &value) const
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

bool QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::operator!=(const QueryRangeSensorCapabilitiesRec &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::QueryRangeSensorCapabilitiesRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_QueryPresenceVector = 0;
}

QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::QueryRangeSensorCapabilitiesRec(const QueryRangeSensorCapabilitiesRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SensorID = 0;
	m_QueryPresenceVector = 0;
	
	/// Copy the values
	m_SensorID = value.m_SensorID;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
}

QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec::~QueryRangeSensorCapabilitiesRec()
{
}

unsigned int QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::getNumberOfElements() const
{
	return (unsigned int) m_QueryRangeSensorCapabilitiesRec.size();
}

QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::QueryRangeSensorCapabilitiesRec* const QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::getElement(unsigned int index)
{
	return &m_QueryRangeSensorCapabilitiesRec.at(index);
}

int QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::setElement(unsigned int index, const QueryRangeSensorCapabilitiesRec &value)
{
	if(m_QueryRangeSensorCapabilitiesRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryRangeSensorCapabilitiesRec.at(index) = value;
	m_QueryRangeSensorCapabilitiesRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::addElement(const QueryRangeSensorCapabilitiesRec &value)
{
	m_QueryRangeSensorCapabilitiesRec.push_back(value);
	m_QueryRangeSensorCapabilitiesRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::deleteElement(unsigned int index)
{
	if(m_QueryRangeSensorCapabilitiesRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryRangeSensorCapabilitiesRec.erase(m_QueryRangeSensorCapabilitiesRec.begin()+index);
	return 0;
}

int QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::deleteLastElement()
{
	m_QueryRangeSensorCapabilitiesRec.pop_back();
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
const unsigned int QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_QueryRangeSensorCapabilitiesRec.size(); i++)
	{
		size += m_QueryRangeSensorCapabilitiesRec[i].getSize();
	}
	
	return size;
}

void QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_QueryRangeSensorCapabilitiesRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_QueryRangeSensorCapabilitiesRec.size(); i++)
	{
		m_QueryRangeSensorCapabilitiesRec[i].encode(bytes + pos);
		pos += m_QueryRangeSensorCapabilitiesRec[i].getSize();
	}
}

void QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_QueryRangeSensorCapabilitiesRec.resize(size);
	for (int i = 0; i < m_QueryRangeSensorCapabilitiesRec.size(); i++)
	{
		m_QueryRangeSensorCapabilitiesRec[i].decode(bytes + pos);
		pos += m_QueryRangeSensorCapabilitiesRec[i].getSize();
	}
}

QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList &QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::operator=(const RangeSensorCapabilitiesList &value)
{
	m_QueryRangeSensorCapabilitiesRec.clear();
	
	for (int i = 0; i < value.m_QueryRangeSensorCapabilitiesRec.size(); i++)
	{
		m_QueryRangeSensorCapabilitiesRec.push_back(value.m_QueryRangeSensorCapabilitiesRec[i]);
		m_QueryRangeSensorCapabilitiesRec[i].setParent(this);
	}
	
	return *this;
}

bool QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::operator==(const RangeSensorCapabilitiesList &value) const
{
	for (int i = 0; i < m_QueryRangeSensorCapabilitiesRec.size(); i++)
	{
		if (m_QueryRangeSensorCapabilitiesRec[i] !=  value.m_QueryRangeSensorCapabilitiesRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::operator!=(const RangeSensorCapabilitiesList &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryRangeSensorCapabilitiesRec.size(); i++)
	{
		m_QueryRangeSensorCapabilitiesRec[i].setParent(this);
	}
	/// No Initialization of m_QueryRangeSensorCapabilitiesRec necessary.
}

QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::RangeSensorCapabilitiesList(const RangeSensorCapabilitiesList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryRangeSensorCapabilitiesRec.size(); i++)
	{
		m_QueryRangeSensorCapabilitiesRec[i].setParent(this);
	}
	/// No Initialization of m_QueryRangeSensorCapabilitiesRec necessary.
	
	/// Copy the values
	m_QueryRangeSensorCapabilitiesRec.clear();
	
	for (int i = 0; i < value.m_QueryRangeSensorCapabilitiesRec.size(); i++)
	{
		m_QueryRangeSensorCapabilitiesRec.push_back(value.m_QueryRangeSensorCapabilitiesRec[i]);
		m_QueryRangeSensorCapabilitiesRec[i].setParent(this);
	}
}

QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList::~RangeSensorCapabilitiesList()
{
}

QueryRangeSensorCapabilities::Body::RangeSensorCapabilitiesList* const QueryRangeSensorCapabilities::Body::getRangeSensorCapabilitiesList()
{
	return &m_RangeSensorCapabilitiesList;
}

int QueryRangeSensorCapabilities::Body::setRangeSensorCapabilitiesList(const RangeSensorCapabilitiesList &value)
{
	m_RangeSensorCapabilitiesList = value;
	setParentPresenceVector();
	return 0;
}

void QueryRangeSensorCapabilities::Body::setParentPresenceVector()
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
const unsigned int QueryRangeSensorCapabilities::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_RangeSensorCapabilitiesList.getSize();
	
	return size;
}

void QueryRangeSensorCapabilities::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorCapabilitiesList.encode(bytes + pos);
	pos += m_RangeSensorCapabilitiesList.getSize();
}

void QueryRangeSensorCapabilities::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_RangeSensorCapabilitiesList.decode(bytes + pos);
	pos += m_RangeSensorCapabilitiesList.getSize();
}

QueryRangeSensorCapabilities::Body &QueryRangeSensorCapabilities::Body::operator=(const Body &value)
{
	m_RangeSensorCapabilitiesList = value.m_RangeSensorCapabilitiesList;
	m_RangeSensorCapabilitiesList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryRangeSensorCapabilities::Body::operator==(const Body &value) const
{
	if (m_RangeSensorCapabilitiesList != value.m_RangeSensorCapabilitiesList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryRangeSensorCapabilities::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCapabilities::Body::Body()
{
	m_RangeSensorCapabilitiesList.setParent(this);
	/// No Initialization of m_RangeSensorCapabilitiesList necessary.
}

QueryRangeSensorCapabilities::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_RangeSensorCapabilitiesList.setParent(this);
	/// No Initialization of m_RangeSensorCapabilitiesList necessary.
	
	/// Copy the values
	m_RangeSensorCapabilitiesList = value.m_RangeSensorCapabilitiesList;
	m_RangeSensorCapabilitiesList.setParent(this);
	/// This code is currently not supported
}

QueryRangeSensorCapabilities::Body::~Body()
{
}

QueryRangeSensorCapabilities::Body* const QueryRangeSensorCapabilities::getBody()
{
	return &m_Body;
}

int QueryRangeSensorCapabilities::setBody(const Body &value)
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
const unsigned int QueryRangeSensorCapabilities::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryRangeSensorCapabilities::encode(unsigned char *bytes)
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

void QueryRangeSensorCapabilities::decode(const unsigned char *bytes)
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

QueryRangeSensorCapabilities &QueryRangeSensorCapabilities::operator=(const QueryRangeSensorCapabilities &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryRangeSensorCapabilities::operator==(const QueryRangeSensorCapabilities &value) const
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

bool QueryRangeSensorCapabilities::operator!=(const QueryRangeSensorCapabilities &value) const
{
	return !((*this) == value);
}

QueryRangeSensorCapabilities::QueryRangeSensorCapabilities()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryRangeSensorCapabilities::QueryRangeSensorCapabilities(const QueryRangeSensorCapabilities &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryRangeSensorCapabilities::~QueryRangeSensorCapabilities()
{
}


}
