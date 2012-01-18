#include "urn_jaus_jss_mobility_GlobalPoseSensor_1_0/Messages/QueryGlobalPose.h"

namespace urn_jaus_jss_mobility_GlobalPoseSensor_1_0
{

void QueryGlobalPose::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryGlobalPose::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryGlobalPose::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryGlobalPose::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryGlobalPose::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryGlobalPose::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryGlobalPose::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryGlobalPose::AppHeader::HeaderRec &QueryGlobalPose::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryGlobalPose::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryGlobalPose::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryGlobalPose::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2402;
}

QueryGlobalPose::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2402;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryGlobalPose::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryGlobalPose::AppHeader::HeaderRec* const QueryGlobalPose::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryGlobalPose::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryGlobalPose::AppHeader::setParentPresenceVector()
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
const unsigned int QueryGlobalPose::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryGlobalPose::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryGlobalPose::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryGlobalPose::AppHeader &QueryGlobalPose::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryGlobalPose::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryGlobalPose::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryGlobalPose::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryGlobalPose::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryGlobalPose::AppHeader::~AppHeader()
{
}

QueryGlobalPose::AppHeader* const QueryGlobalPose::getAppHeader()
{
	return &m_AppHeader;
}

int QueryGlobalPose::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryGlobalPose::Body::QueryGlobalPoseRec::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryGlobalPose::Body::QueryGlobalPoseRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryGlobalPose::Body::QueryGlobalPoseRec::getPresenceVector()
{
	return m_PresenceVector;
}

int QueryGlobalPose::Body::QueryGlobalPoseRec::setPresenceVector(jUnsignedShortInteger value)
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
const unsigned int QueryGlobalPose::Body::QueryGlobalPoseRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryGlobalPose::Body::QueryGlobalPoseRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_PresenceVectorTemp;
	
	m_PresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_PresenceVector);
	memcpy(bytes + pos, &m_PresenceVectorTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void QueryGlobalPose::Body::QueryGlobalPoseRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_PresenceVectorTemp;
	
	memcpy(&m_PresenceVectorTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_PresenceVector = JSIDL_v_1_0::correctEndianness(m_PresenceVectorTemp);
	pos += sizeof(jUnsignedShortInteger);
}

QueryGlobalPose::Body::QueryGlobalPoseRec &QueryGlobalPose::Body::QueryGlobalPoseRec::operator=(const QueryGlobalPoseRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	
	return *this;
}

bool QueryGlobalPose::Body::QueryGlobalPoseRec::operator==(const QueryGlobalPoseRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryGlobalPose::Body::QueryGlobalPoseRec::operator!=(const QueryGlobalPoseRec &value) const
{
	return !((*this) == value);
}

QueryGlobalPose::Body::QueryGlobalPoseRec::QueryGlobalPoseRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
}

QueryGlobalPose::Body::QueryGlobalPoseRec::QueryGlobalPoseRec(const QueryGlobalPoseRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
}

QueryGlobalPose::Body::QueryGlobalPoseRec::~QueryGlobalPoseRec()
{
}

QueryGlobalPose::Body::QueryGlobalPoseRec* const QueryGlobalPose::Body::getQueryGlobalPoseRec()
{
	return &m_QueryGlobalPoseRec;
}

int QueryGlobalPose::Body::setQueryGlobalPoseRec(const QueryGlobalPoseRec &value)
{
	m_QueryGlobalPoseRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryGlobalPose::Body::setParentPresenceVector()
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
const unsigned int QueryGlobalPose::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryGlobalPoseRec.getSize();
	
	return size;
}

void QueryGlobalPose::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryGlobalPoseRec.encode(bytes + pos);
	pos += m_QueryGlobalPoseRec.getSize();
}

void QueryGlobalPose::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryGlobalPoseRec.decode(bytes + pos);
	pos += m_QueryGlobalPoseRec.getSize();
}

QueryGlobalPose::Body &QueryGlobalPose::Body::operator=(const Body &value)
{
	m_QueryGlobalPoseRec = value.m_QueryGlobalPoseRec;
	m_QueryGlobalPoseRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryGlobalPose::Body::operator==(const Body &value) const
{
	if (m_QueryGlobalPoseRec != value.m_QueryGlobalPoseRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryGlobalPose::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryGlobalPose::Body::Body()
{
	m_QueryGlobalPoseRec.setParent(this);
	/// No Initialization of m_QueryGlobalPoseRec necessary.
}

QueryGlobalPose::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryGlobalPoseRec.setParent(this);
	/// No Initialization of m_QueryGlobalPoseRec necessary.
	
	/// Copy the values
	m_QueryGlobalPoseRec = value.m_QueryGlobalPoseRec;
	m_QueryGlobalPoseRec.setParent(this);
	/// This code is currently not supported
}

QueryGlobalPose::Body::~Body()
{
}

QueryGlobalPose::Body* const QueryGlobalPose::getBody()
{
	return &m_Body;
}

int QueryGlobalPose::setBody(const Body &value)
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
const unsigned int QueryGlobalPose::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryGlobalPose::encode(unsigned char *bytes)
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

void QueryGlobalPose::decode(const unsigned char *bytes)
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

QueryGlobalPose &QueryGlobalPose::operator=(const QueryGlobalPose &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryGlobalPose::operator==(const QueryGlobalPose &value) const
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

bool QueryGlobalPose::operator!=(const QueryGlobalPose &value) const
{
	return !((*this) == value);
}

QueryGlobalPose::QueryGlobalPose()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryGlobalPose::QueryGlobalPose(const QueryGlobalPose &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryGlobalPose::~QueryGlobalPose()
{
}


}
