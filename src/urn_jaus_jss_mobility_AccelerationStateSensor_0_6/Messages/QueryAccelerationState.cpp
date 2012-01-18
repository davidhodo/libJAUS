#include "urn_jaus_jss_mobility_AccelerationStateSensor_0_6/Messages/QueryAccelerationState.h"

namespace urn_jaus_jss_mobility_AccelerationStateSensor_0_6
{

void QueryAccelerationState::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void QueryAccelerationState::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryAccelerationState::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryAccelerationState::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryAccelerationState::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryAccelerationState::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void QueryAccelerationState::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

QueryAccelerationState::AppHeader::HeaderRec &QueryAccelerationState::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryAccelerationState::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryAccelerationState::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

QueryAccelerationState::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2417;
}

QueryAccelerationState::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2417;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryAccelerationState::AppHeader::HeaderRec::~HeaderRec()
{
}

QueryAccelerationState::AppHeader::HeaderRec* const QueryAccelerationState::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int QueryAccelerationState::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryAccelerationState::AppHeader::setParentPresenceVector()
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
const unsigned int QueryAccelerationState::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void QueryAccelerationState::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void QueryAccelerationState::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

QueryAccelerationState::AppHeader &QueryAccelerationState::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool QueryAccelerationState::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryAccelerationState::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

QueryAccelerationState::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

QueryAccelerationState::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

QueryAccelerationState::AppHeader::~AppHeader()
{
}

QueryAccelerationState::AppHeader* const QueryAccelerationState::getAppHeader()
{
	return &m_AppHeader;
}

int QueryAccelerationState::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void QueryAccelerationState::Body::QueryAccelerationStateRec::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryAccelerationState::Body::QueryAccelerationStateRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryAccelerationState::Body::QueryAccelerationStateRec::getPresenceVector()
{
	return m_PresenceVector;
}

int QueryAccelerationState::Body::QueryAccelerationStateRec::setPresenceVector(jUnsignedShortInteger value)
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
const unsigned int QueryAccelerationState::Body::QueryAccelerationStateRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryAccelerationState::Body::QueryAccelerationStateRec::encode(unsigned char *bytes)
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

void QueryAccelerationState::Body::QueryAccelerationStateRec::decode(const unsigned char *bytes)
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

QueryAccelerationState::Body::QueryAccelerationStateRec &QueryAccelerationState::Body::QueryAccelerationStateRec::operator=(const QueryAccelerationStateRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	
	return *this;
}

bool QueryAccelerationState::Body::QueryAccelerationStateRec::operator==(const QueryAccelerationStateRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryAccelerationState::Body::QueryAccelerationStateRec::operator!=(const QueryAccelerationStateRec &value) const
{
	return !((*this) == value);
}

QueryAccelerationState::Body::QueryAccelerationStateRec::QueryAccelerationStateRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
}

QueryAccelerationState::Body::QueryAccelerationStateRec::QueryAccelerationStateRec(const QueryAccelerationStateRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
}

QueryAccelerationState::Body::QueryAccelerationStateRec::~QueryAccelerationStateRec()
{
}

QueryAccelerationState::Body::QueryAccelerationStateRec* const QueryAccelerationState::Body::getQueryAccelerationStateRec()
{
	return &m_QueryAccelerationStateRec;
}

int QueryAccelerationState::Body::setQueryAccelerationStateRec(const QueryAccelerationStateRec &value)
{
	m_QueryAccelerationStateRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryAccelerationState::Body::setParentPresenceVector()
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
const unsigned int QueryAccelerationState::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryAccelerationStateRec.getSize();
	
	return size;
}

void QueryAccelerationState::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryAccelerationStateRec.encode(bytes + pos);
	pos += m_QueryAccelerationStateRec.getSize();
}

void QueryAccelerationState::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryAccelerationStateRec.decode(bytes + pos);
	pos += m_QueryAccelerationStateRec.getSize();
}

QueryAccelerationState::Body &QueryAccelerationState::Body::operator=(const Body &value)
{
	m_QueryAccelerationStateRec = value.m_QueryAccelerationStateRec;
	m_QueryAccelerationStateRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryAccelerationState::Body::operator==(const Body &value) const
{
	if (m_QueryAccelerationStateRec != value.m_QueryAccelerationStateRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryAccelerationState::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryAccelerationState::Body::Body()
{
	m_QueryAccelerationStateRec.setParent(this);
	/// No Initialization of m_QueryAccelerationStateRec necessary.
}

QueryAccelerationState::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryAccelerationStateRec.setParent(this);
	/// No Initialization of m_QueryAccelerationStateRec necessary.
	
	/// Copy the values
	m_QueryAccelerationStateRec = value.m_QueryAccelerationStateRec;
	m_QueryAccelerationStateRec.setParent(this);
	/// This code is currently not supported
}

QueryAccelerationState::Body::~Body()
{
}

QueryAccelerationState::Body* const QueryAccelerationState::getBody()
{
	return &m_Body;
}

int QueryAccelerationState::setBody(const Body &value)
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
const unsigned int QueryAccelerationState::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryAccelerationState::encode(unsigned char *bytes)
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

void QueryAccelerationState::decode(const unsigned char *bytes)
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

QueryAccelerationState &QueryAccelerationState::operator=(const QueryAccelerationState &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryAccelerationState::operator==(const QueryAccelerationState &value) const
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

bool QueryAccelerationState::operator!=(const QueryAccelerationState &value) const
{
	return !((*this) == value);
}

QueryAccelerationState::QueryAccelerationState()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryAccelerationState::QueryAccelerationState(const QueryAccelerationState &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

QueryAccelerationState::~QueryAccelerationState()
{
}


}
