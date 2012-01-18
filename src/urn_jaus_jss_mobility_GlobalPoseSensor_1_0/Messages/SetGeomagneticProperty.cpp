#include "urn_jaus_jss_mobility_GlobalPoseSensor_1_0/Messages/SetGeomagneticProperty.h"

namespace urn_jaus_jss_mobility_GlobalPoseSensor_1_0
{

void SetGeomagneticProperty::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void SetGeomagneticProperty::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetGeomagneticProperty::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int SetGeomagneticProperty::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int SetGeomagneticProperty::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void SetGeomagneticProperty::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void SetGeomagneticProperty::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

SetGeomagneticProperty::AppHeader::HeaderRec &SetGeomagneticProperty::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool SetGeomagneticProperty::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool SetGeomagneticProperty::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

SetGeomagneticProperty::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x0412;
}

SetGeomagneticProperty::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x0412;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

SetGeomagneticProperty::AppHeader::HeaderRec::~HeaderRec()
{
}

SetGeomagneticProperty::AppHeader::HeaderRec* const SetGeomagneticProperty::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int SetGeomagneticProperty::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void SetGeomagneticProperty::AppHeader::setParentPresenceVector()
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
const unsigned int SetGeomagneticProperty::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void SetGeomagneticProperty::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void SetGeomagneticProperty::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

SetGeomagneticProperty::AppHeader &SetGeomagneticProperty::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool SetGeomagneticProperty::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool SetGeomagneticProperty::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

SetGeomagneticProperty::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

SetGeomagneticProperty::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

SetGeomagneticProperty::AppHeader::~AppHeader()
{
}

SetGeomagneticProperty::AppHeader* const SetGeomagneticProperty::getAppHeader()
{
	return &m_AppHeader;
}

int SetGeomagneticProperty::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void SetGeomagneticProperty::Body::GeomagneticPropertyRec::setParent(Body* parent)
{
	m_parent = parent;
}

void SetGeomagneticProperty::Body::GeomagneticPropertyRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

double SetGeomagneticProperty::Body::GeomagneticPropertyRec::getMagneticVariation()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_MagneticVariation * scaleFactor + bias;
	
	return value;
}

int SetGeomagneticProperty::Body::GeomagneticPropertyRec::setMagneticVariation(double value)
{
	if ((value >= -3.14159265358979323846) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
		double bias = -3.14159265358979323846;
		
		m_MagneticVariation= (jUnsignedShortInteger)((value - bias) / scaleFactor);
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
const unsigned int SetGeomagneticProperty::Body::GeomagneticPropertyRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void SetGeomagneticProperty::Body::GeomagneticPropertyRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_MagneticVariationTemp;
	
	m_MagneticVariationTemp = JSIDL_v_1_0::correctEndianness(m_MagneticVariation);
	memcpy(bytes + pos, &m_MagneticVariationTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void SetGeomagneticProperty::Body::GeomagneticPropertyRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_MagneticVariationTemp;
	
	memcpy(&m_MagneticVariationTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_MagneticVariation = JSIDL_v_1_0::correctEndianness(m_MagneticVariationTemp);
	pos += sizeof(jUnsignedShortInteger);
}

SetGeomagneticProperty::Body::GeomagneticPropertyRec &SetGeomagneticProperty::Body::GeomagneticPropertyRec::operator=(const GeomagneticPropertyRec &value)
{
	m_MagneticVariation = value.m_MagneticVariation;
	
	return *this;
}

bool SetGeomagneticProperty::Body::GeomagneticPropertyRec::operator==(const GeomagneticPropertyRec &value) const
{
	if (m_MagneticVariation != value.m_MagneticVariation)
	{
		return false;
	}
	
	return true;
}

bool SetGeomagneticProperty::Body::GeomagneticPropertyRec::operator!=(const GeomagneticPropertyRec &value) const
{
	return !((*this) == value);
}

SetGeomagneticProperty::Body::GeomagneticPropertyRec::GeomagneticPropertyRec()
{
	m_parent = NULL;
	m_MagneticVariation = 0;
}

SetGeomagneticProperty::Body::GeomagneticPropertyRec::GeomagneticPropertyRec(const GeomagneticPropertyRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MagneticVariation = 0;
	
	/// Copy the values
	m_MagneticVariation = value.m_MagneticVariation;
}

SetGeomagneticProperty::Body::GeomagneticPropertyRec::~GeomagneticPropertyRec()
{
}

SetGeomagneticProperty::Body::GeomagneticPropertyRec* const SetGeomagneticProperty::Body::getGeomagneticPropertyRec()
{
	return &m_GeomagneticPropertyRec;
}

int SetGeomagneticProperty::Body::setGeomagneticPropertyRec(const GeomagneticPropertyRec &value)
{
	m_GeomagneticPropertyRec = value;
	setParentPresenceVector();
	return 0;
}

void SetGeomagneticProperty::Body::setParentPresenceVector()
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
const unsigned int SetGeomagneticProperty::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_GeomagneticPropertyRec.getSize();
	
	return size;
}

void SetGeomagneticProperty::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_GeomagneticPropertyRec.encode(bytes + pos);
	pos += m_GeomagneticPropertyRec.getSize();
}

void SetGeomagneticProperty::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_GeomagneticPropertyRec.decode(bytes + pos);
	pos += m_GeomagneticPropertyRec.getSize();
}

SetGeomagneticProperty::Body &SetGeomagneticProperty::Body::operator=(const Body &value)
{
	m_GeomagneticPropertyRec = value.m_GeomagneticPropertyRec;
	m_GeomagneticPropertyRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool SetGeomagneticProperty::Body::operator==(const Body &value) const
{
	if (m_GeomagneticPropertyRec != value.m_GeomagneticPropertyRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool SetGeomagneticProperty::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

SetGeomagneticProperty::Body::Body()
{
	m_GeomagneticPropertyRec.setParent(this);
	/// No Initialization of m_GeomagneticPropertyRec necessary.
}

SetGeomagneticProperty::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_GeomagneticPropertyRec.setParent(this);
	/// No Initialization of m_GeomagneticPropertyRec necessary.
	
	/// Copy the values
	m_GeomagneticPropertyRec = value.m_GeomagneticPropertyRec;
	m_GeomagneticPropertyRec.setParent(this);
	/// This code is currently not supported
}

SetGeomagneticProperty::Body::~Body()
{
}

SetGeomagneticProperty::Body* const SetGeomagneticProperty::getBody()
{
	return &m_Body;
}

int SetGeomagneticProperty::setBody(const Body &value)
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
const unsigned int SetGeomagneticProperty::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void SetGeomagneticProperty::encode(unsigned char *bytes)
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

void SetGeomagneticProperty::decode(const unsigned char *bytes)
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

SetGeomagneticProperty &SetGeomagneticProperty::operator=(const SetGeomagneticProperty &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool SetGeomagneticProperty::operator==(const SetGeomagneticProperty &value) const
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

bool SetGeomagneticProperty::operator!=(const SetGeomagneticProperty &value) const
{
	return !((*this) == value);
}

SetGeomagneticProperty::SetGeomagneticProperty()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

SetGeomagneticProperty::SetGeomagneticProperty(const SetGeomagneticProperty &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

SetGeomagneticProperty::~SetGeomagneticProperty()
{
}


}
