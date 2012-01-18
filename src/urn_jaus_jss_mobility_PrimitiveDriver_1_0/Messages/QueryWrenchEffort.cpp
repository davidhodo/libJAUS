#include "urn_jaus_jss_mobility_PrimitiveDriver_1_0/Messages/QueryWrenchEffort.h"

namespace urn_jaus_jss_mobility_PrimitiveDriver_1_0
{

void QueryWrenchEffort::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryWrenchEffort::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryWrenchEffort::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryWrenchEffort::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryWrenchEffort::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryWrenchEffort::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryWrenchEffort::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryWrenchEffort::AppHeader::HeaderRec &QueryWrenchEffort::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryWrenchEffort::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryWrenchEffort::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryWrenchEffort::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2405;
}

QueryWrenchEffort::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2405;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryWrenchEffort::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryWrenchEffort::AppHeader::HeaderRec* const QueryWrenchEffort::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryWrenchEffort::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryWrenchEffort::AppHeader::setParentPresenceVector()
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
const unsigned int QueryWrenchEffort::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryWrenchEffort::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryWrenchEffort::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryWrenchEffort::AppHeader &QueryWrenchEffort::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryWrenchEffort::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryWrenchEffort::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryWrenchEffort::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryWrenchEffort::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryWrenchEffort::AppHeader::~AppHeader()
{
}

QueryWrenchEffort::AppHeader* const QueryWrenchEffort::getAppHeader()
{
	return &m_AppHeader;
}

int QueryWrenchEffort::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryWrenchEffort::Body::QueryWrenchEffortRec::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryWrenchEffort::Body::QueryWrenchEffortRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryWrenchEffort::Body::QueryWrenchEffortRec::getPresenceVector()
{
	return m_PresenceVector;
}

int QueryWrenchEffort::Body::QueryWrenchEffortRec::setPresenceVector(jUnsignedShortInteger value)
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
const unsigned int QueryWrenchEffort::Body::QueryWrenchEffortRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryWrenchEffort::Body::QueryWrenchEffortRec::encode(unsigned char *bytes)
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

void QueryWrenchEffort::Body::QueryWrenchEffortRec::decode(const unsigned char *bytes)
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

QueryWrenchEffort::Body::QueryWrenchEffortRec &QueryWrenchEffort::Body::QueryWrenchEffortRec::operator=(const QueryWrenchEffortRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	
	return *this;
}

bool QueryWrenchEffort::Body::QueryWrenchEffortRec::operator==(const QueryWrenchEffortRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryWrenchEffort::Body::QueryWrenchEffortRec::operator!=(const QueryWrenchEffortRec &value) const
{
	return !((*this) == value);
}

QueryWrenchEffort::Body::QueryWrenchEffortRec::QueryWrenchEffortRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
}

QueryWrenchEffort::Body::QueryWrenchEffortRec::QueryWrenchEffortRec(const QueryWrenchEffortRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
}

QueryWrenchEffort::Body::QueryWrenchEffortRec::~QueryWrenchEffortRec()
{
}

QueryWrenchEffort::Body::QueryWrenchEffortRec* const QueryWrenchEffort::Body::getQueryWrenchEffortRec()
{
	return &m_QueryWrenchEffortRec;
}

int QueryWrenchEffort::Body::setQueryWrenchEffortRec(const QueryWrenchEffortRec &value)
{
	m_QueryWrenchEffortRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryWrenchEffort::Body::setParentPresenceVector()
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
const unsigned int QueryWrenchEffort::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryWrenchEffortRec.getSize();
	
	return size;
}

void QueryWrenchEffort::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryWrenchEffortRec.encode(bytes + pos);
	pos += m_QueryWrenchEffortRec.getSize();
}

void QueryWrenchEffort::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryWrenchEffortRec.decode(bytes + pos);
	pos += m_QueryWrenchEffortRec.getSize();
}

QueryWrenchEffort::Body &QueryWrenchEffort::Body::operator=(const Body &value)
{
	m_QueryWrenchEffortRec = value.m_QueryWrenchEffortRec;
	m_QueryWrenchEffortRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryWrenchEffort::Body::operator==(const Body &value) const
{
	if (m_QueryWrenchEffortRec != value.m_QueryWrenchEffortRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryWrenchEffort::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryWrenchEffort::Body::Body()
{
	m_QueryWrenchEffortRec.setParent(this);
	/// No Initialization of m_QueryWrenchEffortRec necessary.
}

QueryWrenchEffort::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryWrenchEffortRec.setParent(this);
	/// No Initialization of m_QueryWrenchEffortRec necessary.
	
	/// Copy the values
	m_QueryWrenchEffortRec = value.m_QueryWrenchEffortRec;
	m_QueryWrenchEffortRec.setParent(this);
	/// This code is currently not supported
}

QueryWrenchEffort::Body::~Body()
{
}

QueryWrenchEffort::Body* const QueryWrenchEffort::getBody()
{
	return &m_Body;
}

int QueryWrenchEffort::setBody(const Body &value)
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
const unsigned int QueryWrenchEffort::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryWrenchEffort::encode(unsigned char *bytes)
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

void QueryWrenchEffort::decode(const unsigned char *bytes)
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

QueryWrenchEffort &QueryWrenchEffort::operator=(const QueryWrenchEffort &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryWrenchEffort::operator==(const QueryWrenchEffort &value) const
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

bool QueryWrenchEffort::operator!=(const QueryWrenchEffort &value) const
{
	return !((*this) == value);
}

QueryWrenchEffort::QueryWrenchEffort()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryWrenchEffort::QueryWrenchEffort(const QueryWrenchEffort &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryWrenchEffort::~QueryWrenchEffort()
{
}


}
