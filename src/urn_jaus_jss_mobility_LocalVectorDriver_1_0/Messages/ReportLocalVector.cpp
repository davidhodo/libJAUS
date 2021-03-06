#include "urn_jaus_jss_mobility_LocalVectorDriver_1_0/Messages/ReportLocalVector.h"

namespace urn_jaus_jss_mobility_LocalVectorDriver_1_0
{

void ReportLocalVector::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportLocalVector::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportLocalVector::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportLocalVector::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportLocalVector::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportLocalVector::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportLocalVector::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportLocalVector::AppHeader::HeaderRec &ReportLocalVector::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportLocalVector::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportLocalVector::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportLocalVector::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4408;
}

ReportLocalVector::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4408;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportLocalVector::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportLocalVector::AppHeader::HeaderRec* const ReportLocalVector::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportLocalVector::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportLocalVector::AppHeader::setParentPresenceVector()
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
const unsigned int ReportLocalVector::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportLocalVector::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportLocalVector::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportLocalVector::AppHeader &ReportLocalVector::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportLocalVector::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportLocalVector::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportLocalVector::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportLocalVector::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportLocalVector::AppHeader::~AppHeader()
{
}

ReportLocalVector::AppHeader* const ReportLocalVector::getAppHeader()
{
	return &m_AppHeader;
}

int ReportLocalVector::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportLocalVector::Body::LocalVectorRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportLocalVector::Body::LocalVectorRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ReportLocalVector::Body::LocalVectorRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportLocalVector::Body::LocalVectorRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedByte)pvBitSet.to_ulong();
	return 0;
}

bool ReportLocalVector::Body::LocalVectorRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

double ReportLocalVector::Body::LocalVectorRec::getSpeed()
{
	double value;
	
	double scaleFactor = ( 327.67 - 0 ) / 65535.0;
	double bias = 0;
	
	value = m_Speed * scaleFactor + bias;
	
	return value;
}

int ReportLocalVector::Body::LocalVectorRec::setSpeed(double value)
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

bool ReportLocalVector::Body::LocalVectorRec::isZValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

double ReportLocalVector::Body::LocalVectorRec::getZ()
{
	double value;
	
	double scaleFactor = ( 35000 - -10000 ) / 4.294967295E9;
	double bias = -10000;
	
	value = m_Z * scaleFactor + bias;
	
	return value;
}

int ReportLocalVector::Body::LocalVectorRec::setZ(double value)
{
	if ((value >= -10000) && (value <= 35000))
	{
		double scaleFactor = ( 35000 - -10000 ) / 4.294967295E9;
		double bias = -10000;
		
		m_Z= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(0);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportLocalVector::Body::LocalVectorRec::isHeadingValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double ReportLocalVector::Body::LocalVectorRec::getHeading()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Heading * scaleFactor + bias;
	
	return value;
}

int ReportLocalVector::Body::LocalVectorRec::setHeading(double value)
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

bool ReportLocalVector::Body::LocalVectorRec::isRollValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double ReportLocalVector::Body::LocalVectorRec::getRoll()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Roll * scaleFactor + bias;
	
	return value;
}

int ReportLocalVector::Body::LocalVectorRec::setRoll(double value)
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

bool ReportLocalVector::Body::LocalVectorRec::isPitchValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double ReportLocalVector::Body::LocalVectorRec::getPitch()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Pitch * scaleFactor + bias;
	
	return value;
}

int ReportLocalVector::Body::LocalVectorRec::setPitch(double value)
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
const unsigned int ReportLocalVector::Body::LocalVectorRec::getSize()
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

void ReportLocalVector::Body::LocalVectorRec::encode(unsigned char *bytes)
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
		jUnsignedInteger m_ZTemp;
		
		m_ZTemp = JSIDL_v_1_0::correctEndianness(m_Z);
		memcpy(bytes + pos, &m_ZTemp, sizeof(jUnsignedInteger));
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

void ReportLocalVector::Body::LocalVectorRec::decode(const unsigned char *bytes)
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
		jUnsignedInteger m_ZTemp;
		
		memcpy(&m_ZTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Z = JSIDL_v_1_0::correctEndianness(m_ZTemp);
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

ReportLocalVector::Body::LocalVectorRec &ReportLocalVector::Body::LocalVectorRec::operator=(const LocalVectorRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_Speed = value.m_Speed;
	m_Z = value.m_Z;
	m_Heading = value.m_Heading;
	m_Roll = value.m_Roll;
	m_Pitch = value.m_Pitch;
	
	return *this;
}

bool ReportLocalVector::Body::LocalVectorRec::operator==(const LocalVectorRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_Speed != value.m_Speed)
	{
		return false;
	}
	if (m_Z != value.m_Z)
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

bool ReportLocalVector::Body::LocalVectorRec::operator!=(const LocalVectorRec &value) const
{
	return !((*this) == value);
}

ReportLocalVector::Body::LocalVectorRec::LocalVectorRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Speed = 0;
	m_Z = 0;
	m_Heading = 0;
	m_Roll = 0;
	m_Pitch = 0;
}

ReportLocalVector::Body::LocalVectorRec::LocalVectorRec(const LocalVectorRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Speed = 0;
	m_Z = 0;
	m_Heading = 0;
	m_Roll = 0;
	m_Pitch = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_Speed = value.m_Speed;
	m_Z = value.m_Z;
	m_Heading = value.m_Heading;
	m_Roll = value.m_Roll;
	m_Pitch = value.m_Pitch;
}

ReportLocalVector::Body::LocalVectorRec::~LocalVectorRec()
{
}

ReportLocalVector::Body::LocalVectorRec* const ReportLocalVector::Body::getLocalVectorRec()
{
	return &m_LocalVectorRec;
}

int ReportLocalVector::Body::setLocalVectorRec(const LocalVectorRec &value)
{
	m_LocalVectorRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportLocalVector::Body::setParentPresenceVector()
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
const unsigned int ReportLocalVector::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_LocalVectorRec.getSize();
	
	return size;
}

void ReportLocalVector::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_LocalVectorRec.encode(bytes + pos);
	pos += m_LocalVectorRec.getSize();
}

void ReportLocalVector::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_LocalVectorRec.decode(bytes + pos);
	pos += m_LocalVectorRec.getSize();
}

ReportLocalVector::Body &ReportLocalVector::Body::operator=(const Body &value)
{
	m_LocalVectorRec = value.m_LocalVectorRec;
	m_LocalVectorRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportLocalVector::Body::operator==(const Body &value) const
{
	if (m_LocalVectorRec != value.m_LocalVectorRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportLocalVector::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportLocalVector::Body::Body()
{
	m_LocalVectorRec.setParent(this);
	/// No Initialization of m_LocalVectorRec necessary.
}

ReportLocalVector::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_LocalVectorRec.setParent(this);
	/// No Initialization of m_LocalVectorRec necessary.
	
	/// Copy the values
	m_LocalVectorRec = value.m_LocalVectorRec;
	m_LocalVectorRec.setParent(this);
	/// This code is currently not supported
}

ReportLocalVector::Body::~Body()
{
}

ReportLocalVector::Body* const ReportLocalVector::getBody()
{
	return &m_Body;
}

int ReportLocalVector::setBody(const Body &value)
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
const unsigned int ReportLocalVector::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportLocalVector::encode(unsigned char *bytes)
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

void ReportLocalVector::decode(const unsigned char *bytes)
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

ReportLocalVector &ReportLocalVector::operator=(const ReportLocalVector &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportLocalVector::operator==(const ReportLocalVector &value) const
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

bool ReportLocalVector::operator!=(const ReportLocalVector &value) const
{
	return !((*this) == value);
}

ReportLocalVector::ReportLocalVector()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportLocalVector::ReportLocalVector(const ReportLocalVector &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportLocalVector::~ReportLocalVector()
{
}


}
