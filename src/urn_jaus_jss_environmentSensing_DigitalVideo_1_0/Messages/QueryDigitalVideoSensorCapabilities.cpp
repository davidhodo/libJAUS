#include "urn_jaus_jss_environmentSensing_DigitalVideo_1_0/Messages/QueryDigitalVideoSensorCapabilities.h"

namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

void QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec &QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2808;
}

QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2808;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryDigitalVideoSensorCapabilities::AppHeader::HeaderRec* const QueryDigitalVideoSensorCapabilities::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryDigitalVideoSensorCapabilities::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryDigitalVideoSensorCapabilities::AppHeader::setParentPresenceVector()
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
const unsigned int QueryDigitalVideoSensorCapabilities::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryDigitalVideoSensorCapabilities::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryDigitalVideoSensorCapabilities::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryDigitalVideoSensorCapabilities::AppHeader &QueryDigitalVideoSensorCapabilities::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryDigitalVideoSensorCapabilities::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryDigitalVideoSensorCapabilities::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorCapabilities::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryDigitalVideoSensorCapabilities::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryDigitalVideoSensorCapabilities::AppHeader::~AppHeader()
{
}

QueryDigitalVideoSensorCapabilities::AppHeader* const QueryDigitalVideoSensorCapabilities::getAppHeader()
{
	return &m_AppHeader;
}

int QueryDigitalVideoSensorCapabilities::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::setParent(QueryDigitalVideoSensorCapabilitiesList* parent)
{
	m_parent = parent;
}

void QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::getSensorID()
{
	return m_SensorID;
}

int QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::getQueryPresenceVector()
{
	return m_QueryPresenceVector;
}

int QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::setQueryPresenceVector(jUnsignedByte value)
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
const unsigned int QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	
	return size;
}

void QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::encode(unsigned char *bytes)
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

void QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::decode(const unsigned char *bytes)
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

QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec &QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::operator=(const QueryDigitalVideoSensorCapabilitiesRec &value)
{
	m_SensorID = value.m_SensorID;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
	
	return *this;
}

bool QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::operator==(const QueryDigitalVideoSensorCapabilitiesRec &value) const
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

bool QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::operator!=(const QueryDigitalVideoSensorCapabilitiesRec &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::QueryDigitalVideoSensorCapabilitiesRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_QueryPresenceVector = 0;
}

QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::QueryDigitalVideoSensorCapabilitiesRec(const QueryDigitalVideoSensorCapabilitiesRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SensorID = 0;
	m_QueryPresenceVector = 0;
	
	/// Copy the values
	m_SensorID = value.m_SensorID;
	m_QueryPresenceVector = value.m_QueryPresenceVector;
}

QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec::~QueryDigitalVideoSensorCapabilitiesRec()
{
}

unsigned int QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::getNumberOfElements() const
{
	return (unsigned int) m_QueryDigitalVideoSensorCapabilitiesRec.size();
}

QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesRec* const QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::getElement(unsigned int index)
{
	return &m_QueryDigitalVideoSensorCapabilitiesRec.at(index);
}

int QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::setElement(unsigned int index, const QueryDigitalVideoSensorCapabilitiesRec &value)
{
	if(m_QueryDigitalVideoSensorCapabilitiesRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryDigitalVideoSensorCapabilitiesRec.at(index) = value;
	m_QueryDigitalVideoSensorCapabilitiesRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::addElement(const QueryDigitalVideoSensorCapabilitiesRec &value)
{
	m_QueryDigitalVideoSensorCapabilitiesRec.push_back(value);
	m_QueryDigitalVideoSensorCapabilitiesRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::deleteElement(unsigned int index)
{
	if(m_QueryDigitalVideoSensorCapabilitiesRec.size()-1 < index)
	{
		return 1;
	}
	
	m_QueryDigitalVideoSensorCapabilitiesRec.erase(m_QueryDigitalVideoSensorCapabilitiesRec.begin()+index);
	return 0;
}

int QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::deleteLastElement()
{
	m_QueryDigitalVideoSensorCapabilitiesRec.pop_back();
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
const unsigned int QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_QueryDigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		size += m_QueryDigitalVideoSensorCapabilitiesRec[i].getSize();
	}
	
	return size;
}

void QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_QueryDigitalVideoSensorCapabilitiesRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_QueryDigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_QueryDigitalVideoSensorCapabilitiesRec[i].encode(bytes + pos);
		pos += m_QueryDigitalVideoSensorCapabilitiesRec[i].getSize();
	}
}

void QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_QueryDigitalVideoSensorCapabilitiesRec.resize(size);
	for (int i = 0; i < m_QueryDigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_QueryDigitalVideoSensorCapabilitiesRec[i].decode(bytes + pos);
		pos += m_QueryDigitalVideoSensorCapabilitiesRec[i].getSize();
	}
}

QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList &QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::operator=(const QueryDigitalVideoSensorCapabilitiesList &value)
{
	m_QueryDigitalVideoSensorCapabilitiesRec.clear();
	
	for (int i = 0; i < value.m_QueryDigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_QueryDigitalVideoSensorCapabilitiesRec.push_back(value.m_QueryDigitalVideoSensorCapabilitiesRec[i]);
		m_QueryDigitalVideoSensorCapabilitiesRec[i].setParent(this);
	}
	
	return *this;
}

bool QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::operator==(const QueryDigitalVideoSensorCapabilitiesList &value) const
{
	for (int i = 0; i < m_QueryDigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		if (m_QueryDigitalVideoSensorCapabilitiesRec[i] !=  value.m_QueryDigitalVideoSensorCapabilitiesRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::operator!=(const QueryDigitalVideoSensorCapabilitiesList &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryDigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_QueryDigitalVideoSensorCapabilitiesRec[i].setParent(this);
	}
	/// No Initialization of m_QueryDigitalVideoSensorCapabilitiesRec necessary.
}

QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::QueryDigitalVideoSensorCapabilitiesList(const QueryDigitalVideoSensorCapabilitiesList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_QueryDigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_QueryDigitalVideoSensorCapabilitiesRec[i].setParent(this);
	}
	/// No Initialization of m_QueryDigitalVideoSensorCapabilitiesRec necessary.
	
	/// Copy the values
	m_QueryDigitalVideoSensorCapabilitiesRec.clear();
	
	for (int i = 0; i < value.m_QueryDigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_QueryDigitalVideoSensorCapabilitiesRec.push_back(value.m_QueryDigitalVideoSensorCapabilitiesRec[i]);
		m_QueryDigitalVideoSensorCapabilitiesRec[i].setParent(this);
	}
}

QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList::~QueryDigitalVideoSensorCapabilitiesList()
{
}

QueryDigitalVideoSensorCapabilities::Body::QueryDigitalVideoSensorCapabilitiesList* const QueryDigitalVideoSensorCapabilities::Body::getQueryDigitalVideoSensorCapabilitiesList()
{
	return &m_QueryDigitalVideoSensorCapabilitiesList;
}

int QueryDigitalVideoSensorCapabilities::Body::setQueryDigitalVideoSensorCapabilitiesList(const QueryDigitalVideoSensorCapabilitiesList &value)
{
	m_QueryDigitalVideoSensorCapabilitiesList = value;
	setParentPresenceVector();
	return 0;
}

void QueryDigitalVideoSensorCapabilities::Body::setParentPresenceVector()
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
const unsigned int QueryDigitalVideoSensorCapabilities::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryDigitalVideoSensorCapabilitiesList.getSize();
	
	return size;
}

void QueryDigitalVideoSensorCapabilities::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryDigitalVideoSensorCapabilitiesList.encode(bytes + pos);
	pos += m_QueryDigitalVideoSensorCapabilitiesList.getSize();
}

void QueryDigitalVideoSensorCapabilities::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryDigitalVideoSensorCapabilitiesList.decode(bytes + pos);
	pos += m_QueryDigitalVideoSensorCapabilitiesList.getSize();
}

QueryDigitalVideoSensorCapabilities::Body &QueryDigitalVideoSensorCapabilities::Body::operator=(const Body &value)
{
	m_QueryDigitalVideoSensorCapabilitiesList = value.m_QueryDigitalVideoSensorCapabilitiesList;
	m_QueryDigitalVideoSensorCapabilitiesList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryDigitalVideoSensorCapabilities::Body::operator==(const Body &value) const
{
	if (m_QueryDigitalVideoSensorCapabilitiesList != value.m_QueryDigitalVideoSensorCapabilitiesList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryDigitalVideoSensorCapabilities::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorCapabilities::Body::Body()
{
	m_QueryDigitalVideoSensorCapabilitiesList.setParent(this);
	/// No Initialization of m_QueryDigitalVideoSensorCapabilitiesList necessary.
}

QueryDigitalVideoSensorCapabilities::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryDigitalVideoSensorCapabilitiesList.setParent(this);
	/// No Initialization of m_QueryDigitalVideoSensorCapabilitiesList necessary.
	
	/// Copy the values
	m_QueryDigitalVideoSensorCapabilitiesList = value.m_QueryDigitalVideoSensorCapabilitiesList;
	m_QueryDigitalVideoSensorCapabilitiesList.setParent(this);
	/// This code is currently not supported
}

QueryDigitalVideoSensorCapabilities::Body::~Body()
{
}

QueryDigitalVideoSensorCapabilities::Body* const QueryDigitalVideoSensorCapabilities::getBody()
{
	return &m_Body;
}

int QueryDigitalVideoSensorCapabilities::setBody(const Body &value)
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
const unsigned int QueryDigitalVideoSensorCapabilities::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryDigitalVideoSensorCapabilities::encode(unsigned char *bytes)
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

void QueryDigitalVideoSensorCapabilities::decode(const unsigned char *bytes)
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

QueryDigitalVideoSensorCapabilities &QueryDigitalVideoSensorCapabilities::operator=(const QueryDigitalVideoSensorCapabilities &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryDigitalVideoSensorCapabilities::operator==(const QueryDigitalVideoSensorCapabilities &value) const
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

bool QueryDigitalVideoSensorCapabilities::operator!=(const QueryDigitalVideoSensorCapabilities &value) const
{
	return !((*this) == value);
}

QueryDigitalVideoSensorCapabilities::QueryDigitalVideoSensorCapabilities()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryDigitalVideoSensorCapabilities::QueryDigitalVideoSensorCapabilities(const QueryDigitalVideoSensorCapabilities &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryDigitalVideoSensorCapabilities::~QueryDigitalVideoSensorCapabilities()
{
}


}
