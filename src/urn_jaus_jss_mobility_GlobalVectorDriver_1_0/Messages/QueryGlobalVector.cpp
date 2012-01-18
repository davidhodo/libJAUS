#include "urn_jaus_jss_mobility_GlobalVectorDriver_1_0/Messages/QueryGlobalVector.h"

namespace urn_jaus_jss_mobility_GlobalVectorDriver_1_0
{

void QueryGlobalVector::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryGlobalVector::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryGlobalVector::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryGlobalVector::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryGlobalVector::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryGlobalVector::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryGlobalVector::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryGlobalVector::AppHeader::HeaderRec &QueryGlobalVector::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryGlobalVector::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryGlobalVector::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryGlobalVector::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2407;
}

QueryGlobalVector::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2407;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryGlobalVector::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryGlobalVector::AppHeader::HeaderRec* const QueryGlobalVector::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryGlobalVector::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryGlobalVector::AppHeader::setParentPresenceVector()
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
const unsigned int QueryGlobalVector::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryGlobalVector::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryGlobalVector::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryGlobalVector::AppHeader &QueryGlobalVector::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryGlobalVector::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryGlobalVector::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryGlobalVector::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryGlobalVector::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryGlobalVector::AppHeader::~AppHeader()
{
}

QueryGlobalVector::AppHeader* const QueryGlobalVector::getAppHeader()
{
	return &m_AppHeader;
}

int QueryGlobalVector::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryGlobalVector::Body::QueryGlobalVectorRec::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryGlobalVector::Body::QueryGlobalVectorRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte QueryGlobalVector::Body::QueryGlobalVectorRec::getPresenceVector()
{
	return m_PresenceVector;
}

int QueryGlobalVector::Body::QueryGlobalVectorRec::setPresenceVector(jUnsignedByte value)
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
const unsigned int QueryGlobalVector::Body::QueryGlobalVectorRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	return size;
}

void QueryGlobalVector::Body::QueryGlobalVectorRec::encode(unsigned char *bytes)
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

void QueryGlobalVector::Body::QueryGlobalVectorRec::decode(const unsigned char *bytes)
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

QueryGlobalVector::Body::QueryGlobalVectorRec &QueryGlobalVector::Body::QueryGlobalVectorRec::operator=(const QueryGlobalVectorRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	
	return *this;
}

bool QueryGlobalVector::Body::QueryGlobalVectorRec::operator==(const QueryGlobalVectorRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryGlobalVector::Body::QueryGlobalVectorRec::operator!=(const QueryGlobalVectorRec &value) const
{
	return !((*this) == value);
}

QueryGlobalVector::Body::QueryGlobalVectorRec::QueryGlobalVectorRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
}

QueryGlobalVector::Body::QueryGlobalVectorRec::QueryGlobalVectorRec(const QueryGlobalVectorRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
}

QueryGlobalVector::Body::QueryGlobalVectorRec::~QueryGlobalVectorRec()
{
}

QueryGlobalVector::Body::QueryGlobalVectorRec* const QueryGlobalVector::Body::getQueryGlobalVectorRec()
{
	return &m_QueryGlobalVectorRec;
}

int QueryGlobalVector::Body::setQueryGlobalVectorRec(const QueryGlobalVectorRec &value)
{
	m_QueryGlobalVectorRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryGlobalVector::Body::setParentPresenceVector()
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
const unsigned int QueryGlobalVector::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryGlobalVectorRec.getSize();
	
	return size;
}

void QueryGlobalVector::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryGlobalVectorRec.encode(bytes + pos);
	pos += m_QueryGlobalVectorRec.getSize();
}

void QueryGlobalVector::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryGlobalVectorRec.decode(bytes + pos);
	pos += m_QueryGlobalVectorRec.getSize();
}

QueryGlobalVector::Body &QueryGlobalVector::Body::operator=(const Body &value)
{
	m_QueryGlobalVectorRec = value.m_QueryGlobalVectorRec;
	m_QueryGlobalVectorRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryGlobalVector::Body::operator==(const Body &value) const
{
	if (m_QueryGlobalVectorRec != value.m_QueryGlobalVectorRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryGlobalVector::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryGlobalVector::Body::Body()
{
	m_QueryGlobalVectorRec.setParent(this);
	/// No Initialization of m_QueryGlobalVectorRec necessary.
}

QueryGlobalVector::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryGlobalVectorRec.setParent(this);
	/// No Initialization of m_QueryGlobalVectorRec necessary.
	
	/// Copy the values
	m_QueryGlobalVectorRec = value.m_QueryGlobalVectorRec;
	m_QueryGlobalVectorRec.setParent(this);
	/// This code is currently not supported
}

QueryGlobalVector::Body::~Body()
{
}

QueryGlobalVector::Body* const QueryGlobalVector::getBody()
{
	return &m_Body;
}

int QueryGlobalVector::setBody(const Body &value)
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
const unsigned int QueryGlobalVector::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryGlobalVector::encode(unsigned char *bytes)
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

void QueryGlobalVector::decode(const unsigned char *bytes)
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

QueryGlobalVector &QueryGlobalVector::operator=(const QueryGlobalVector &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryGlobalVector::operator==(const QueryGlobalVector &value) const
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

bool QueryGlobalVector::operator!=(const QueryGlobalVector &value) const
{
	return !((*this) == value);
}

QueryGlobalVector::QueryGlobalVector()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryGlobalVector::QueryGlobalVector(const QueryGlobalVector &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryGlobalVector::~QueryGlobalVector()
{
}


}
