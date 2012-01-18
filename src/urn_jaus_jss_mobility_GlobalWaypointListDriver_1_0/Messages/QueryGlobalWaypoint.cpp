#include "urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0/Messages/QueryGlobalWaypoint.h"

namespace urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0
{

void QueryGlobalWaypoint::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryGlobalWaypoint::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryGlobalWaypoint::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryGlobalWaypoint::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryGlobalWaypoint::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryGlobalWaypoint::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryGlobalWaypoint::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryGlobalWaypoint::AppHeader::HeaderRec &QueryGlobalWaypoint::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryGlobalWaypoint::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryGlobalWaypoint::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryGlobalWaypoint::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x240c;
}

QueryGlobalWaypoint::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x240c;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryGlobalWaypoint::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryGlobalWaypoint::AppHeader::HeaderRec* const QueryGlobalWaypoint::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryGlobalWaypoint::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryGlobalWaypoint::AppHeader::setParentPresenceVector()
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
const unsigned int QueryGlobalWaypoint::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryGlobalWaypoint::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryGlobalWaypoint::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryGlobalWaypoint::AppHeader &QueryGlobalWaypoint::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryGlobalWaypoint::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryGlobalWaypoint::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryGlobalWaypoint::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryGlobalWaypoint::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryGlobalWaypoint::AppHeader::~AppHeader()
{
}

QueryGlobalWaypoint::AppHeader* const QueryGlobalWaypoint::getAppHeader()
{
	return &m_AppHeader;
}

int QueryGlobalWaypoint::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::getPresenceVector()
{
	return m_PresenceVector;
}

int QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::setPresenceVector(jUnsignedByte value)
{
	m_PresenceVector = value;
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
const unsigned int QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	return size;
}

void QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::encode(unsigned char *bytes)
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
}

void QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::decode(const unsigned char *bytes)
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
}

QueryGlobalWaypoint::Body::QueryGlobalWaypointRec &QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::operator=(const QueryGlobalWaypointRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	
	return *this;
}

bool QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::operator==(const QueryGlobalWaypointRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::operator!=(const QueryGlobalWaypointRec &value) const
{
	return !((*this) == value);
}

QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::QueryGlobalWaypointRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
}

QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::QueryGlobalWaypointRec(const QueryGlobalWaypointRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
}

QueryGlobalWaypoint::Body::QueryGlobalWaypointRec::~QueryGlobalWaypointRec()
{
}

QueryGlobalWaypoint::Body::QueryGlobalWaypointRec* const QueryGlobalWaypoint::Body::getQueryGlobalWaypointRec()
{
	return &m_QueryGlobalWaypointRec;
}

int QueryGlobalWaypoint::Body::setQueryGlobalWaypointRec(const QueryGlobalWaypointRec &value)
{
	m_QueryGlobalWaypointRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryGlobalWaypoint::Body::setParentPresenceVector()
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
const unsigned int QueryGlobalWaypoint::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryGlobalWaypointRec.getSize();
	
	return size;
}

void QueryGlobalWaypoint::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryGlobalWaypointRec.encode(bytes + pos);
	pos += m_QueryGlobalWaypointRec.getSize();
}

void QueryGlobalWaypoint::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryGlobalWaypointRec.decode(bytes + pos);
	pos += m_QueryGlobalWaypointRec.getSize();
}

QueryGlobalWaypoint::Body &QueryGlobalWaypoint::Body::operator=(const Body &value)
{
	m_QueryGlobalWaypointRec = value.m_QueryGlobalWaypointRec;
	m_QueryGlobalWaypointRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryGlobalWaypoint::Body::operator==(const Body &value) const
{
	if (m_QueryGlobalWaypointRec != value.m_QueryGlobalWaypointRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryGlobalWaypoint::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryGlobalWaypoint::Body::Body()
{
	m_QueryGlobalWaypointRec.setParent(this);
	/// No Initialization of m_QueryGlobalWaypointRec necessary.
}

QueryGlobalWaypoint::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryGlobalWaypointRec.setParent(this);
	/// No Initialization of m_QueryGlobalWaypointRec necessary.
	
	/// Copy the values
	m_QueryGlobalWaypointRec = value.m_QueryGlobalWaypointRec;
	m_QueryGlobalWaypointRec.setParent(this);
	/// This code is currently not supported
}

QueryGlobalWaypoint::Body::~Body()
{
}

QueryGlobalWaypoint::Body* const QueryGlobalWaypoint::getBody()
{
	return &m_Body;
}

int QueryGlobalWaypoint::setBody(const Body &value)
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
const unsigned int QueryGlobalWaypoint::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryGlobalWaypoint::encode(unsigned char *bytes)
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

void QueryGlobalWaypoint::decode(const unsigned char *bytes)
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

QueryGlobalWaypoint &QueryGlobalWaypoint::operator=(const QueryGlobalWaypoint &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryGlobalWaypoint::operator==(const QueryGlobalWaypoint &value) const
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

bool QueryGlobalWaypoint::operator!=(const QueryGlobalWaypoint &value) const
{
	return !((*this) == value);
}

QueryGlobalWaypoint::QueryGlobalWaypoint()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryGlobalWaypoint::QueryGlobalWaypoint(const QueryGlobalWaypoint &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryGlobalWaypoint::~QueryGlobalWaypoint()
{
}


}
