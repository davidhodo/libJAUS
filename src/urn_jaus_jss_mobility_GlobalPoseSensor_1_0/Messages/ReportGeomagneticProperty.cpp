#include "urn_jaus_jss_mobility_GlobalPoseSensor_1_0/Messages/ReportGeomagneticProperty.h"

namespace urn_jaus_jss_mobility_GlobalPoseSensor_1_0
{

void ReportGeomagneticProperty::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportGeomagneticProperty::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportGeomagneticProperty::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportGeomagneticProperty::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportGeomagneticProperty::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportGeomagneticProperty::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportGeomagneticProperty::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportGeomagneticProperty::AppHeader::HeaderRec &ReportGeomagneticProperty::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportGeomagneticProperty::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportGeomagneticProperty::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportGeomagneticProperty::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4412;
}

ReportGeomagneticProperty::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4412;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportGeomagneticProperty::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportGeomagneticProperty::AppHeader::HeaderRec* const ReportGeomagneticProperty::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportGeomagneticProperty::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportGeomagneticProperty::AppHeader::setParentPresenceVector()
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
const unsigned int ReportGeomagneticProperty::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportGeomagneticProperty::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportGeomagneticProperty::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportGeomagneticProperty::AppHeader &ReportGeomagneticProperty::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportGeomagneticProperty::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportGeomagneticProperty::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportGeomagneticProperty::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportGeomagneticProperty::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportGeomagneticProperty::AppHeader::~AppHeader()
{
}

ReportGeomagneticProperty::AppHeader* const ReportGeomagneticProperty::getAppHeader()
{
	return &m_AppHeader;
}

int ReportGeomagneticProperty::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportGeomagneticProperty::Body::GeomagneticPropertyRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportGeomagneticProperty::Body::GeomagneticPropertyRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

double ReportGeomagneticProperty::Body::GeomagneticPropertyRec::getMagneticVariation()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_MagneticVariation * scaleFactor + bias;
	
	return value;
}

int ReportGeomagneticProperty::Body::GeomagneticPropertyRec::setMagneticVariation(double value)
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
const unsigned int ReportGeomagneticProperty::Body::GeomagneticPropertyRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportGeomagneticProperty::Body::GeomagneticPropertyRec::encode(unsigned char *bytes)
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

void ReportGeomagneticProperty::Body::GeomagneticPropertyRec::decode(const unsigned char *bytes)
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

ReportGeomagneticProperty::Body::GeomagneticPropertyRec &ReportGeomagneticProperty::Body::GeomagneticPropertyRec::operator=(const GeomagneticPropertyRec &value)
{
	m_MagneticVariation = value.m_MagneticVariation;
	
	return *this;
}

bool ReportGeomagneticProperty::Body::GeomagneticPropertyRec::operator==(const GeomagneticPropertyRec &value) const
{
	if (m_MagneticVariation != value.m_MagneticVariation)
	{
		return false;
	}
	
	return true;
}

bool ReportGeomagneticProperty::Body::GeomagneticPropertyRec::operator!=(const GeomagneticPropertyRec &value) const
{
	return !((*this) == value);
}

ReportGeomagneticProperty::Body::GeomagneticPropertyRec::GeomagneticPropertyRec()
{
	m_parent = NULL;
	m_MagneticVariation = 0;
}

ReportGeomagneticProperty::Body::GeomagneticPropertyRec::GeomagneticPropertyRec(const GeomagneticPropertyRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MagneticVariation = 0;
	
	/// Copy the values
	m_MagneticVariation = value.m_MagneticVariation;
}

ReportGeomagneticProperty::Body::GeomagneticPropertyRec::~GeomagneticPropertyRec()
{
}

ReportGeomagneticProperty::Body::GeomagneticPropertyRec* const ReportGeomagneticProperty::Body::getGeomagneticPropertyRec()
{
	return &m_GeomagneticPropertyRec;
}

int ReportGeomagneticProperty::Body::setGeomagneticPropertyRec(const GeomagneticPropertyRec &value)
{
	m_GeomagneticPropertyRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportGeomagneticProperty::Body::setParentPresenceVector()
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
const unsigned int ReportGeomagneticProperty::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_GeomagneticPropertyRec.getSize();
	
	return size;
}

void ReportGeomagneticProperty::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_GeomagneticPropertyRec.encode(bytes + pos);
	pos += m_GeomagneticPropertyRec.getSize();
}

void ReportGeomagneticProperty::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_GeomagneticPropertyRec.decode(bytes + pos);
	pos += m_GeomagneticPropertyRec.getSize();
}

ReportGeomagneticProperty::Body &ReportGeomagneticProperty::Body::operator=(const Body &value)
{
	m_GeomagneticPropertyRec = value.m_GeomagneticPropertyRec;
	m_GeomagneticPropertyRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportGeomagneticProperty::Body::operator==(const Body &value) const
{
	if (m_GeomagneticPropertyRec != value.m_GeomagneticPropertyRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportGeomagneticProperty::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportGeomagneticProperty::Body::Body()
{
	m_GeomagneticPropertyRec.setParent(this);
	/// No Initialization of m_GeomagneticPropertyRec necessary.
}

ReportGeomagneticProperty::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_GeomagneticPropertyRec.setParent(this);
	/// No Initialization of m_GeomagneticPropertyRec necessary.
	
	/// Copy the values
	m_GeomagneticPropertyRec = value.m_GeomagneticPropertyRec;
	m_GeomagneticPropertyRec.setParent(this);
	/// This code is currently not supported
}

ReportGeomagneticProperty::Body::~Body()
{
}

ReportGeomagneticProperty::Body* const ReportGeomagneticProperty::getBody()
{
	return &m_Body;
}

int ReportGeomagneticProperty::setBody(const Body &value)
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
const unsigned int ReportGeomagneticProperty::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportGeomagneticProperty::encode(unsigned char *bytes)
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

void ReportGeomagneticProperty::decode(const unsigned char *bytes)
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

ReportGeomagneticProperty &ReportGeomagneticProperty::operator=(const ReportGeomagneticProperty &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportGeomagneticProperty::operator==(const ReportGeomagneticProperty &value) const
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

bool ReportGeomagneticProperty::operator!=(const ReportGeomagneticProperty &value) const
{
	return !((*this) == value);
}

ReportGeomagneticProperty::ReportGeomagneticProperty()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportGeomagneticProperty::ReportGeomagneticProperty(const ReportGeomagneticProperty &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportGeomagneticProperty::~ReportGeomagneticProperty()
{
}


}
