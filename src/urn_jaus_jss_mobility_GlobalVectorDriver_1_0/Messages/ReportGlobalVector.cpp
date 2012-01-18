#include "urn_jaus_jss_mobility_GlobalVectorDriver_1_0/Messages/ReportGlobalVector.h"

namespace urn_jaus_jss_mobility_GlobalVectorDriver_1_0
{

void ReportGlobalVector::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportGlobalVector::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportGlobalVector::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportGlobalVector::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportGlobalVector::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportGlobalVector::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportGlobalVector::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportGlobalVector::AppHeader::HeaderRec &ReportGlobalVector::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportGlobalVector::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportGlobalVector::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportGlobalVector::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4407;
}

ReportGlobalVector::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4407;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportGlobalVector::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportGlobalVector::AppHeader::HeaderRec* const ReportGlobalVector::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportGlobalVector::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportGlobalVector::AppHeader::setParentPresenceVector()
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
const unsigned int ReportGlobalVector::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportGlobalVector::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportGlobalVector::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportGlobalVector::AppHeader &ReportGlobalVector::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportGlobalVector::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportGlobalVector::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportGlobalVector::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportGlobalVector::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportGlobalVector::AppHeader::~AppHeader()
{
}

ReportGlobalVector::AppHeader* const ReportGlobalVector::getAppHeader()
{
	return &m_AppHeader;
}

int ReportGlobalVector::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportGlobalVector::Body::GlobalVectorRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportGlobalVector::Body::GlobalVectorRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ReportGlobalVector::Body::GlobalVectorRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportGlobalVector::Body::GlobalVectorRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedByte)pvBitSet.to_ulong();
	return 0;
}

bool ReportGlobalVector::Body::GlobalVectorRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

double ReportGlobalVector::Body::GlobalVectorRec::getSpeed()
{
	double value;
	
	double scaleFactor = ( 327.67 - 0 ) / 65535.0;
	double bias = 0;
	
	value = m_Speed * scaleFactor + bias;
	
	return value;
}

int ReportGlobalVector::Body::GlobalVectorRec::setSpeed(double value)
{
	if ((value >= 0) && (value <= 327.67))
	{
		double scaleFactor = ( 327.67 - 0 ) / 65535.0;
		double bias = 0;
		
		m_Speed= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportGlobalVector::Body::GlobalVectorRec::isAltitudeValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

double ReportGlobalVector::Body::GlobalVectorRec::getAltitude()
{
	double value;
	
	double scaleFactor = ( 35000 - -10000 ) / 4.294967295E9;
	double bias = -10000;
	
	value = m_Altitude * scaleFactor + bias;
	
	return value;
}

int ReportGlobalVector::Body::GlobalVectorRec::setAltitude(double value)
{
	if ((value >= -10000) && (value <= 35000))
	{
		double scaleFactor = ( 35000 - -10000 ) / 4.294967295E9;
		double bias = -10000;
		
		m_Altitude= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(0);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportGlobalVector::Body::GlobalVectorRec::isHeadingValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double ReportGlobalVector::Body::GlobalVectorRec::getHeading()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Heading * scaleFactor + bias;
	
	return value;
}

int ReportGlobalVector::Body::GlobalVectorRec::setHeading(double value)
{
	if ((value >= -3.14159265358979323846) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
		double bias = -3.14159265358979323846;
		
		m_Heading= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportGlobalVector::Body::GlobalVectorRec::isRollValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double ReportGlobalVector::Body::GlobalVectorRec::getRoll()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Roll * scaleFactor + bias;
	
	return value;
}

int ReportGlobalVector::Body::GlobalVectorRec::setRoll(double value)
{
	if ((value >= -3.14159265358979323846) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
		double bias = -3.14159265358979323846;
		
		m_Roll= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(2);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportGlobalVector::Body::GlobalVectorRec::isPitchValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double ReportGlobalVector::Body::GlobalVectorRec::getPitch()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Pitch * scaleFactor + bias;
	
	return value;
}

int ReportGlobalVector::Body::GlobalVectorRec::setPitch(double value)
{
	if ((value >= -3.14159265358979323846) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
		double bias = -3.14159265358979323846;
		
		m_Pitch= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(3);
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
const unsigned int ReportGlobalVector::Body::GlobalVectorRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	size += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(3))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	
	return size;
}

void ReportGlobalVector::Body::GlobalVectorRec::encode(unsigned char *bytes)
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
	jUnsignedShortInteger m_SpeedTemp;
	
	m_SpeedTemp = JSIDL_v_1_0::correctEndianness(m_Speed);
	memcpy(bytes + pos, &m_SpeedTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_AltitudeTemp;
		
		m_AltitudeTemp = JSIDL_v_1_0::correctEndianness(m_Altitude);
		memcpy(bytes + pos, &m_AltitudeTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_HeadingTemp;
		
		m_HeadingTemp = JSIDL_v_1_0::correctEndianness(m_Heading);
		memcpy(bytes + pos, &m_HeadingTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedShortInteger m_RollTemp;
		
		m_RollTemp = JSIDL_v_1_0::correctEndianness(m_Roll);
		memcpy(bytes + pos, &m_RollTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedShortInteger m_PitchTemp;
		
		m_PitchTemp = JSIDL_v_1_0::correctEndianness(m_Pitch);
		memcpy(bytes + pos, &m_PitchTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
}

void ReportGlobalVector::Body::GlobalVectorRec::decode(const unsigned char *bytes)
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
	jUnsignedShortInteger m_SpeedTemp;
	
	memcpy(&m_SpeedTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_Speed = JSIDL_v_1_0::correctEndianness(m_SpeedTemp);
	pos += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_AltitudeTemp;
		
		memcpy(&m_AltitudeTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Altitude = JSIDL_v_1_0::correctEndianness(m_AltitudeTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_HeadingTemp;
		
		memcpy(&m_HeadingTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Heading = JSIDL_v_1_0::correctEndianness(m_HeadingTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedShortInteger m_RollTemp;
		
		memcpy(&m_RollTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Roll = JSIDL_v_1_0::correctEndianness(m_RollTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedShortInteger m_PitchTemp;
		
		memcpy(&m_PitchTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Pitch = JSIDL_v_1_0::correctEndianness(m_PitchTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
}

ReportGlobalVector::Body::GlobalVectorRec &ReportGlobalVector::Body::GlobalVectorRec::operator=(const GlobalVectorRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_Speed = value.m_Speed;
	m_Altitude = value.m_Altitude;
	m_Heading = value.m_Heading;
	m_Roll = value.m_Roll;
	m_Pitch = value.m_Pitch;
	
	return *this;
}

bool ReportGlobalVector::Body::GlobalVectorRec::operator==(const GlobalVectorRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_Speed != value.m_Speed)
	{
		return false;
	}
	if (m_Altitude != value.m_Altitude)
	{
		return false;
	}
	if (m_Heading != value.m_Heading)
	{
		return false;
	}
	if (m_Roll != value.m_Roll)
	{
		return false;
	}
	if (m_Pitch != value.m_Pitch)
	{
		return false;
	}
	
	return true;
}

bool ReportGlobalVector::Body::GlobalVectorRec::operator!=(const GlobalVectorRec &value) const
{
	return !((*this) == value);
}

ReportGlobalVector::Body::GlobalVectorRec::GlobalVectorRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Speed = 0;
	m_Altitude = 0;
	m_Heading = 0;
	m_Roll = 0;
	m_Pitch = 0;
}

ReportGlobalVector::Body::GlobalVectorRec::GlobalVectorRec(const GlobalVectorRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Speed = 0;
	m_Altitude = 0;
	m_Heading = 0;
	m_Roll = 0;
	m_Pitch = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_Speed = value.m_Speed;
	m_Altitude = value.m_Altitude;
	m_Heading = value.m_Heading;
	m_Roll = value.m_Roll;
	m_Pitch = value.m_Pitch;
}

ReportGlobalVector::Body::GlobalVectorRec::~GlobalVectorRec()
{
}

ReportGlobalVector::Body::GlobalVectorRec* const ReportGlobalVector::Body::getGlobalVectorRec()
{
	return &m_GlobalVectorRec;
}

int ReportGlobalVector::Body::setGlobalVectorRec(const GlobalVectorRec &value)
{
	m_GlobalVectorRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportGlobalVector::Body::setParentPresenceVector()
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
const unsigned int ReportGlobalVector::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_GlobalVectorRec.getSize();
	
	return size;
}

void ReportGlobalVector::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_GlobalVectorRec.encode(bytes + pos);
	pos += m_GlobalVectorRec.getSize();
}

void ReportGlobalVector::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_GlobalVectorRec.decode(bytes + pos);
	pos += m_GlobalVectorRec.getSize();
}

ReportGlobalVector::Body &ReportGlobalVector::Body::operator=(const Body &value)
{
	m_GlobalVectorRec = value.m_GlobalVectorRec;
	m_GlobalVectorRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportGlobalVector::Body::operator==(const Body &value) const
{
	if (m_GlobalVectorRec != value.m_GlobalVectorRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportGlobalVector::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportGlobalVector::Body::Body()
{
	m_GlobalVectorRec.setParent(this);
	/// No Initialization of m_GlobalVectorRec necessary.
}

ReportGlobalVector::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_GlobalVectorRec.setParent(this);
	/// No Initialization of m_GlobalVectorRec necessary.
	
	/// Copy the values
	m_GlobalVectorRec = value.m_GlobalVectorRec;
	m_GlobalVectorRec.setParent(this);
	/// This code is currently not supported
}

ReportGlobalVector::Body::~Body()
{
}

ReportGlobalVector::Body* const ReportGlobalVector::getBody()
{
	return &m_Body;
}

int ReportGlobalVector::setBody(const Body &value)
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
const unsigned int ReportGlobalVector::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportGlobalVector::encode(unsigned char *bytes)
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

void ReportGlobalVector::decode(const unsigned char *bytes)
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

ReportGlobalVector &ReportGlobalVector::operator=(const ReportGlobalVector &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportGlobalVector::operator==(const ReportGlobalVector &value) const
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

bool ReportGlobalVector::operator!=(const ReportGlobalVector &value) const
{
	return !((*this) == value);
}

ReportGlobalVector::ReportGlobalVector()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportGlobalVector::ReportGlobalVector(const ReportGlobalVector &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportGlobalVector::~ReportGlobalVector()
{
}


}
