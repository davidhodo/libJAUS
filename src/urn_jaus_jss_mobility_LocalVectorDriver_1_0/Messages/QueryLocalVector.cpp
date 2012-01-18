#include "urn_jaus_jss_mobility_LocalVectorDriver_1_0/Messages/QueryLocalVector.h"

namespace urn_jaus_jss_mobility_LocalVectorDriver_1_0
{

void QueryLocalVector::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryLocalVector::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryLocalVector::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryLocalVector::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryLocalVector::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryLocalVector::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryLocalVector::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryLocalVector::AppHeader::HeaderRec &QueryLocalVector::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryLocalVector::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryLocalVector::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryLocalVector::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2408;
}

QueryLocalVector::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2408;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryLocalVector::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryLocalVector::AppHeader::HeaderRec* const QueryLocalVector::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryLocalVector::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryLocalVector::AppHeader::setParentPresenceVector()
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
const unsigned int QueryLocalVector::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryLocalVector::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryLocalVector::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryLocalVector::AppHeader &QueryLocalVector::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryLocalVector::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryLocalVector::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryLocalVector::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryLocalVector::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryLocalVector::AppHeader::~AppHeader()
{
}

QueryLocalVector::AppHeader* const QueryLocalVector::getAppHeader()
{
	return &m_AppHeader;
}

int QueryLocalVector::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryLocalVector::Body::QueryLocalVectorRec::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryLocalVector::Body::QueryLocalVectorRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte QueryLocalVector::Body::QueryLocalVectorRec::getPresenceVector()
{
	return m_PresenceVector;
}

int QueryLocalVector::Body::QueryLocalVectorRec::setPresenceVector(jUnsignedByte value)
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
const unsigned int QueryLocalVector::Body::QueryLocalVectorRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	return size;
}

void QueryLocalVector::Body::QueryLocalVectorRec::encode(unsigned char *bytes)
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

void QueryLocalVector::Body::QueryLocalVectorRec::decode(const unsigned char *bytes)
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

QueryLocalVector::Body::QueryLocalVectorRec &QueryLocalVector::Body::QueryLocalVectorRec::operator=(const QueryLocalVectorRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	
	return *this;
}

bool QueryLocalVector::Body::QueryLocalVectorRec::operator==(const QueryLocalVectorRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryLocalVector::Body::QueryLocalVectorRec::operator!=(const QueryLocalVectorRec &value) const
{
	return !((*this) == value);
}

QueryLocalVector::Body::QueryLocalVectorRec::QueryLocalVectorRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
}

QueryLocalVector::Body::QueryLocalVectorRec::QueryLocalVectorRec(const QueryLocalVectorRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
}

QueryLocalVector::Body::QueryLocalVectorRec::~QueryLocalVectorRec()
{
}

QueryLocalVector::Body::QueryLocalVectorRec* const QueryLocalVector::Body::getQueryLocalVectorRec()
{
	return &m_QueryLocalVectorRec;
}

int QueryLocalVector::Body::setQueryLocalVectorRec(const QueryLocalVectorRec &value)
{
	m_QueryLocalVectorRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryLocalVector::Body::setParentPresenceVector()
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
const unsigned int QueryLocalVector::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryLocalVectorRec.getSize();
	
	return size;
}

void QueryLocalVector::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryLocalVectorRec.encode(bytes + pos);
	pos += m_QueryLocalVectorRec.getSize();
}

void QueryLocalVector::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryLocalVectorRec.decode(bytes + pos);
	pos += m_QueryLocalVectorRec.getSize();
}

QueryLocalVector::Body &QueryLocalVector::Body::operator=(const Body &value)
{
	m_QueryLocalVectorRec = value.m_QueryLocalVectorRec;
	m_QueryLocalVectorRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryLocalVector::Body::operator==(const Body &value) const
{
	if (m_QueryLocalVectorRec != value.m_QueryLocalVectorRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryLocalVector::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryLocalVector::Body::Body()
{
	m_QueryLocalVectorRec.setParent(this);
	/// No Initialization of m_QueryLocalVectorRec necessary.
}

QueryLocalVector::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryLocalVectorRec.setParent(this);
	/// No Initialization of m_QueryLocalVectorRec necessary.
	
	/// Copy the values
	m_QueryLocalVectorRec = value.m_QueryLocalVectorRec;
	m_QueryLocalVectorRec.setParent(this);
	/// This code is currently not supported
}

QueryLocalVector::Body::~Body()
{
}

QueryLocalVector::Body* const QueryLocalVector::getBody()
{
	return &m_Body;
}

int QueryLocalVector::setBody(const Body &value)
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
const unsigned int QueryLocalVector::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryLocalVector::encode(unsigned char *bytes)
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

void QueryLocalVector::decode(const unsigned char *bytes)
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

QueryLocalVector &QueryLocalVector::operator=(const QueryLocalVector &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryLocalVector::operator==(const QueryLocalVector &value) const
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

bool QueryLocalVector::operator!=(const QueryLocalVector &value) const
{
	return !((*this) == value);
}

QueryLocalVector::QueryLocalVector()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryLocalVector::QueryLocalVector(const QueryLocalVector &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryLocalVector::~QueryLocalVector()
{
}


}
