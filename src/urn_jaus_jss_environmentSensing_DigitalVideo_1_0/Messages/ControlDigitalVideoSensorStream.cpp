#include "urn_jaus_jss_environmentSensing_DigitalVideo_1_0/Messages/ControlDigitalVideoSensorStream.h"

namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

void ControlDigitalVideoSensorStream::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ControlDigitalVideoSensorStream::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ControlDigitalVideoSensorStream::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ControlDigitalVideoSensorStream::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ControlDigitalVideoSensorStream::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ControlDigitalVideoSensorStream::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ControlDigitalVideoSensorStream::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ControlDigitalVideoSensorStream::AppHeader::HeaderRec &ControlDigitalVideoSensorStream::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ControlDigitalVideoSensorStream::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ControlDigitalVideoSensorStream::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ControlDigitalVideoSensorStream::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x0805;
}

ControlDigitalVideoSensorStream::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x0805;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ControlDigitalVideoSensorStream::AppHeader::HeaderRec::~HeaderRec()
{
}

ControlDigitalVideoSensorStream::AppHeader::HeaderRec* const ControlDigitalVideoSensorStream::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ControlDigitalVideoSensorStream::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ControlDigitalVideoSensorStream::AppHeader::setParentPresenceVector()
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
const unsigned int ControlDigitalVideoSensorStream::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ControlDigitalVideoSensorStream::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ControlDigitalVideoSensorStream::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ControlDigitalVideoSensorStream::AppHeader &ControlDigitalVideoSensorStream::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ControlDigitalVideoSensorStream::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ControlDigitalVideoSensorStream::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ControlDigitalVideoSensorStream::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ControlDigitalVideoSensorStream::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ControlDigitalVideoSensorStream::AppHeader::~AppHeader()
{
}

ControlDigitalVideoSensorStream::AppHeader* const ControlDigitalVideoSensorStream::getAppHeader()
{
	return &m_AppHeader;
}

int ControlDigitalVideoSensorStream::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::getSensorID()
{
	return m_SensorID;
}

int ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

jUnsignedByte ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::getStreamState()
{
	return m_StreamState;
}

int ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::setStreamState(jUnsignedByte value)
{
	if ((value == 0) || (value == 1) || (value == 2))
	{
		m_StreamState = value;
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	
	return size;
}

void ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::encode(unsigned char *bytes)
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
	jUnsignedByte m_StreamStateTemp;
	
	m_StreamStateTemp = JSIDL_v_1_0::correctEndianness(m_StreamState);
	memcpy(bytes + pos, &m_StreamStateTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
}

void ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::decode(const unsigned char *bytes)
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
	jUnsignedByte m_StreamStateTemp;
	
	memcpy(&m_StreamStateTemp, bytes + pos, sizeof(jUnsignedByte));
	m_StreamState = JSIDL_v_1_0::correctEndianness(m_StreamStateTemp);
	pos += sizeof(jUnsignedByte);
}

ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec &ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::operator=(const ControlDigitalVideoSensorStreamRec &value)
{
	m_SensorID = value.m_SensorID;
	m_StreamState = value.m_StreamState;
	
	return *this;
}

bool ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::operator==(const ControlDigitalVideoSensorStreamRec &value) const
{
	if (m_SensorID != value.m_SensorID)
	{
		return false;
	}
	if (m_StreamState != value.m_StreamState)
	{
		return false;
	}
	
	return true;
}

bool ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::operator!=(const ControlDigitalVideoSensorStreamRec &value) const
{
	return !((*this) == value);
}

ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::ControlDigitalVideoSensorStreamRec()
{
	m_parent = NULL;
	m_SensorID = 0;
	m_StreamState = 0;
}

ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::ControlDigitalVideoSensorStreamRec(const ControlDigitalVideoSensorStreamRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SensorID = 0;
	m_StreamState = 0;
	
	/// Copy the values
	m_SensorID = value.m_SensorID;
	m_StreamState = value.m_StreamState;
}

ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec::~ControlDigitalVideoSensorStreamRec()
{
}

ControlDigitalVideoSensorStream::Body::ControlDigitalVideoSensorStreamRec* const ControlDigitalVideoSensorStream::Body::getControlDigitalVideoSensorStreamRec()
{
	return &m_ControlDigitalVideoSensorStreamRec;
}

int ControlDigitalVideoSensorStream::Body::setControlDigitalVideoSensorStreamRec(const ControlDigitalVideoSensorStreamRec &value)
{
	m_ControlDigitalVideoSensorStreamRec = value;
	setParentPresenceVector();
	return 0;
}

void ControlDigitalVideoSensorStream::Body::setParentPresenceVector()
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
const unsigned int ControlDigitalVideoSensorStream::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_ControlDigitalVideoSensorStreamRec.getSize();
	
	return size;
}

void ControlDigitalVideoSensorStream::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ControlDigitalVideoSensorStreamRec.encode(bytes + pos);
	pos += m_ControlDigitalVideoSensorStreamRec.getSize();
}

void ControlDigitalVideoSensorStream::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ControlDigitalVideoSensorStreamRec.decode(bytes + pos);
	pos += m_ControlDigitalVideoSensorStreamRec.getSize();
}

ControlDigitalVideoSensorStream::Body &ControlDigitalVideoSensorStream::Body::operator=(const Body &value)
{
	m_ControlDigitalVideoSensorStreamRec = value.m_ControlDigitalVideoSensorStreamRec;
	m_ControlDigitalVideoSensorStreamRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ControlDigitalVideoSensorStream::Body::operator==(const Body &value) const
{
	if (m_ControlDigitalVideoSensorStreamRec != value.m_ControlDigitalVideoSensorStreamRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ControlDigitalVideoSensorStream::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ControlDigitalVideoSensorStream::Body::Body()
{
	m_ControlDigitalVideoSensorStreamRec.setParent(this);
	/// No Initialization of m_ControlDigitalVideoSensorStreamRec necessary.
}

ControlDigitalVideoSensorStream::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_ControlDigitalVideoSensorStreamRec.setParent(this);
	/// No Initialization of m_ControlDigitalVideoSensorStreamRec necessary.
	
	/// Copy the values
	m_ControlDigitalVideoSensorStreamRec = value.m_ControlDigitalVideoSensorStreamRec;
	m_ControlDigitalVideoSensorStreamRec.setParent(this);
	/// This code is currently not supported
}

ControlDigitalVideoSensorStream::Body::~Body()
{
}

ControlDigitalVideoSensorStream::Body* const ControlDigitalVideoSensorStream::getBody()
{
	return &m_Body;
}

int ControlDigitalVideoSensorStream::setBody(const Body &value)
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
const unsigned int ControlDigitalVideoSensorStream::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ControlDigitalVideoSensorStream::encode(unsigned char *bytes)
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

void ControlDigitalVideoSensorStream::decode(const unsigned char *bytes)
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

ControlDigitalVideoSensorStream &ControlDigitalVideoSensorStream::operator=(const ControlDigitalVideoSensorStream &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ControlDigitalVideoSensorStream::operator==(const ControlDigitalVideoSensorStream &value) const
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

bool ControlDigitalVideoSensorStream::operator!=(const ControlDigitalVideoSensorStream &value) const
{
	return !((*this) == value);
}

ControlDigitalVideoSensorStream::ControlDigitalVideoSensorStream()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

ControlDigitalVideoSensorStream::ControlDigitalVideoSensorStream(const ControlDigitalVideoSensorStream &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ControlDigitalVideoSensorStream::~ControlDigitalVideoSensorStream()
{
}


}
