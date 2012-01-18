#include "urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0/Messages/ReportGlobalWaypoint.h"

namespace urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0
{

void ReportGlobalWaypoint::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportGlobalWaypoint::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportGlobalWaypoint::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportGlobalWaypoint::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportGlobalWaypoint::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportGlobalWaypoint::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportGlobalWaypoint::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportGlobalWaypoint::AppHeader::HeaderRec &ReportGlobalWaypoint::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportGlobalWaypoint::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportGlobalWaypoint::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportGlobalWaypoint::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x440c;
}

ReportGlobalWaypoint::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x440c;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportGlobalWaypoint::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportGlobalWaypoint::AppHeader::HeaderRec* const ReportGlobalWaypoint::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportGlobalWaypoint::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportGlobalWaypoint::AppHeader::setParentPresenceVector()
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
const unsigned int ReportGlobalWaypoint::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportGlobalWaypoint::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportGlobalWaypoint::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportGlobalWaypoint::AppHeader &ReportGlobalWaypoint::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportGlobalWaypoint::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportGlobalWaypoint::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportGlobalWaypoint::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportGlobalWaypoint::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportGlobalWaypoint::AppHeader::~AppHeader()
{
}

ReportGlobalWaypoint::AppHeader* const ReportGlobalWaypoint::getAppHeader()
{
	return &m_AppHeader;
}

int ReportGlobalWaypoint::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportGlobalWaypoint::Body::GlobalWaypointRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportGlobalWaypoint::Body::GlobalWaypointRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ReportGlobalWaypoint::Body::GlobalWaypointRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportGlobalWaypoint::Body::GlobalWaypointRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedByte)pvBitSet.to_ulong();
	return 0;
}

bool ReportGlobalWaypoint::Body::GlobalWaypointRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

double ReportGlobalWaypoint::Body::GlobalWaypointRec::getLatitude()
{
	double value;
	
	double scaleFactor = ( 90 - -90 ) / 4.294967295E9;
	double bias = -90;
	
	value = m_Latitude * scaleFactor + bias;
	
	return value;
}

int ReportGlobalWaypoint::Body::GlobalWaypointRec::setLatitude(double value)
{
	if ((value >= -90) && (value <= 90))
	{
		double scaleFactor = ( 90 - -90 ) / 4.294967295E9;
		double bias = -90;
		
		m_Latitude= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double ReportGlobalWaypoint::Body::GlobalWaypointRec::getLongitude()
{
	double value;
	
	double scaleFactor = ( 180 - -180 ) / 4.294967295E9;
	double bias = -180;
	
	value = m_Longitude * scaleFactor + bias;
	
	return value;
}

int ReportGlobalWaypoint::Body::GlobalWaypointRec::setLongitude(double value)
{
	if ((value >= -180) && (value <= 180))
	{
		double scaleFactor = ( 180 - -180 ) / 4.294967295E9;
		double bias = -180;
		
		m_Longitude= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportGlobalWaypoint::Body::GlobalWaypointRec::isAltitudeValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

double ReportGlobalWaypoint::Body::GlobalWaypointRec::getAltitude()
{
	double value;
	
	double scaleFactor = ( 35000 - -10000 ) / 4.294967295E9;
	double bias = -10000;
	
	value = m_Altitude * scaleFactor + bias;
	
	return value;
}

int ReportGlobalWaypoint::Body::GlobalWaypointRec::setAltitude(double value)
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

bool ReportGlobalWaypoint::Body::GlobalWaypointRec::isRollValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double ReportGlobalWaypoint::Body::GlobalWaypointRec::getRoll()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Roll * scaleFactor + bias;
	
	return value;
}

int ReportGlobalWaypoint::Body::GlobalWaypointRec::setRoll(double value)
{
	if ((value >= -3.14159265358979323846) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
		double bias = -3.14159265358979323846;
		
		m_Roll= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportGlobalWaypoint::Body::GlobalWaypointRec::isPitchValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double ReportGlobalWaypoint::Body::GlobalWaypointRec::getPitch()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Pitch * scaleFactor + bias;
	
	return value;
}

int ReportGlobalWaypoint::Body::GlobalWaypointRec::setPitch(double value)
{
	if ((value >= -3.14159265358979323846) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
		double bias = -3.14159265358979323846;
		
		m_Pitch= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(2);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportGlobalWaypoint::Body::GlobalWaypointRec::isYawValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double ReportGlobalWaypoint::Body::GlobalWaypointRec::getYaw()
{
	double value;
	
	double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
	double bias = -3.14159265358979323846;
	
	value = m_Yaw * scaleFactor + bias;
	
	return value;
}

int ReportGlobalWaypoint::Body::GlobalWaypointRec::setYaw(double value)
{
	if ((value >= -3.14159265358979323846) && (value <= 3.14159265358979323846))
	{
		double scaleFactor = ( 3.14159265358979323846 - -3.14159265358979323846 ) / 65535.0;
		double bias = -3.14159265358979323846;
		
		m_Yaw= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportGlobalWaypoint::Body::GlobalWaypointRec::isWaypointToleranceValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double ReportGlobalWaypoint::Body::GlobalWaypointRec::getWaypointTolerance()
{
	double value;
	
	double scaleFactor = ( 100 - 0 ) / 65535.0;
	double bias = 0;
	
	value = m_WaypointTolerance * scaleFactor + bias;
	
	return value;
}

int ReportGlobalWaypoint::Body::GlobalWaypointRec::setWaypointTolerance(double value)
{
	if ((value >= 0) && (value <= 100))
	{
		double scaleFactor = ( 100 - 0 ) / 65535.0;
		double bias = 0;
		
		m_WaypointTolerance= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(4);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportGlobalWaypoint::Body::GlobalWaypointRec::isPathToleranceValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

double ReportGlobalWaypoint::Body::GlobalWaypointRec::getPathTolerance()
{
	double value;
	
	double scaleFactor = ( 100000 - 0 ) / 4.294967295E9;
	double bias = 0;
	
	value = m_PathTolerance * scaleFactor + bias;
	
	return value;
}

int ReportGlobalWaypoint::Body::GlobalWaypointRec::setPathTolerance(double value)
{
	if ((value >= 0) && (value <= 100000))
	{
		double scaleFactor = ( 100000 - 0 ) / 4.294967295E9;
		double bias = 0;
		
		m_PathTolerance= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(5);
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
const unsigned int ReportGlobalWaypoint::Body::GlobalWaypointRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	size += sizeof(jUnsignedInteger);
	size += sizeof(jUnsignedInteger);
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
	if (checkPresenceVector(4))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		size += sizeof(jUnsignedInteger);
	}
	
	return size;
}

void ReportGlobalWaypoint::Body::GlobalWaypointRec::encode(unsigned char *bytes)
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
	jUnsignedInteger m_LatitudeTemp;
	
	m_LatitudeTemp = JSIDL_v_1_0::correctEndianness(m_Latitude);
	memcpy(bytes + pos, &m_LatitudeTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_LongitudeTemp;
	
	m_LongitudeTemp = JSIDL_v_1_0::correctEndianness(m_Longitude);
	memcpy(bytes + pos, &m_LongitudeTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_AltitudeTemp;
		
		m_AltitudeTemp = JSIDL_v_1_0::correctEndianness(m_Altitude);
		memcpy(bytes + pos, &m_AltitudeTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_RollTemp;
		
		m_RollTemp = JSIDL_v_1_0::correctEndianness(m_Roll);
		memcpy(bytes + pos, &m_RollTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedShortInteger m_PitchTemp;
		
		m_PitchTemp = JSIDL_v_1_0::correctEndianness(m_Pitch);
		memcpy(bytes + pos, &m_PitchTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedShortInteger m_YawTemp;
		
		m_YawTemp = JSIDL_v_1_0::correctEndianness(m_Yaw);
		memcpy(bytes + pos, &m_YawTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedShortInteger m_WaypointToleranceTemp;
		
		m_WaypointToleranceTemp = JSIDL_v_1_0::correctEndianness(m_WaypointTolerance);
		memcpy(bytes + pos, &m_WaypointToleranceTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedInteger m_PathToleranceTemp;
		
		m_PathToleranceTemp = JSIDL_v_1_0::correctEndianness(m_PathTolerance);
		memcpy(bytes + pos, &m_PathToleranceTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
}

void ReportGlobalWaypoint::Body::GlobalWaypointRec::decode(const unsigned char *bytes)
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
	jUnsignedInteger m_LatitudeTemp;
	
	memcpy(&m_LatitudeTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_Latitude = JSIDL_v_1_0::correctEndianness(m_LatitudeTemp);
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_LongitudeTemp;
	
	memcpy(&m_LongitudeTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_Longitude = JSIDL_v_1_0::correctEndianness(m_LongitudeTemp);
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedInteger m_AltitudeTemp;
		
		memcpy(&m_AltitudeTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Altitude = JSIDL_v_1_0::correctEndianness(m_AltitudeTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_RollTemp;
		
		memcpy(&m_RollTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Roll = JSIDL_v_1_0::correctEndianness(m_RollTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedShortInteger m_PitchTemp;
		
		memcpy(&m_PitchTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Pitch = JSIDL_v_1_0::correctEndianness(m_PitchTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedShortInteger m_YawTemp;
		
		memcpy(&m_YawTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Yaw = JSIDL_v_1_0::correctEndianness(m_YawTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedShortInteger m_WaypointToleranceTemp;
		
		memcpy(&m_WaypointToleranceTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_WaypointTolerance = JSIDL_v_1_0::correctEndianness(m_WaypointToleranceTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedInteger m_PathToleranceTemp;
		
		memcpy(&m_PathToleranceTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_PathTolerance = JSIDL_v_1_0::correctEndianness(m_PathToleranceTemp);
		pos += sizeof(jUnsignedInteger);
	}
}

ReportGlobalWaypoint::Body::GlobalWaypointRec &ReportGlobalWaypoint::Body::GlobalWaypointRec::operator=(const GlobalWaypointRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_Latitude = value.m_Latitude;
	m_Longitude = value.m_Longitude;
	m_Altitude = value.m_Altitude;
	m_Roll = value.m_Roll;
	m_Pitch = value.m_Pitch;
	m_Yaw = value.m_Yaw;
	m_WaypointTolerance = value.m_WaypointTolerance;
	m_PathTolerance = value.m_PathTolerance;
	
	return *this;
}

bool ReportGlobalWaypoint::Body::GlobalWaypointRec::operator==(const GlobalWaypointRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_Latitude != value.m_Latitude)
	{
		return false;
	}
	if (m_Longitude != value.m_Longitude)
	{
		return false;
	}
	if (m_Altitude != value.m_Altitude)
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
	if (m_Yaw != value.m_Yaw)
	{
		return false;
	}
	if (m_WaypointTolerance != value.m_WaypointTolerance)
	{
		return false;
	}
	if (m_PathTolerance != value.m_PathTolerance)
	{
		return false;
	}
	
	return true;
}

bool ReportGlobalWaypoint::Body::GlobalWaypointRec::operator!=(const GlobalWaypointRec &value) const
{
	return !((*this) == value);
}

ReportGlobalWaypoint::Body::GlobalWaypointRec::GlobalWaypointRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Latitude = 0;
	m_Longitude = 0;
	m_Altitude = 0;
	m_Roll = 0;
	m_Pitch = 0;
	m_Yaw = 0;
	m_WaypointTolerance = 0;
	m_PathTolerance = 0;
}

ReportGlobalWaypoint::Body::GlobalWaypointRec::GlobalWaypointRec(const GlobalWaypointRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Latitude = 0;
	m_Longitude = 0;
	m_Altitude = 0;
	m_Roll = 0;
	m_Pitch = 0;
	m_Yaw = 0;
	m_WaypointTolerance = 0;
	m_PathTolerance = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_Latitude = value.m_Latitude;
	m_Longitude = value.m_Longitude;
	m_Altitude = value.m_Altitude;
	m_Roll = value.m_Roll;
	m_Pitch = value.m_Pitch;
	m_Yaw = value.m_Yaw;
	m_WaypointTolerance = value.m_WaypointTolerance;
	m_PathTolerance = value.m_PathTolerance;
}

ReportGlobalWaypoint::Body::GlobalWaypointRec::~GlobalWaypointRec()
{
}

ReportGlobalWaypoint::Body::GlobalWaypointRec* const ReportGlobalWaypoint::Body::getGlobalWaypointRec()
{
	return &m_GlobalWaypointRec;
}

int ReportGlobalWaypoint::Body::setGlobalWaypointRec(const GlobalWaypointRec &value)
{
	m_GlobalWaypointRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportGlobalWaypoint::Body::setParentPresenceVector()
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
const unsigned int ReportGlobalWaypoint::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_GlobalWaypointRec.getSize();
	
	return size;
}

void ReportGlobalWaypoint::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_GlobalWaypointRec.encode(bytes + pos);
	pos += m_GlobalWaypointRec.getSize();
}

void ReportGlobalWaypoint::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_GlobalWaypointRec.decode(bytes + pos);
	pos += m_GlobalWaypointRec.getSize();
}

ReportGlobalWaypoint::Body &ReportGlobalWaypoint::Body::operator=(const Body &value)
{
	m_GlobalWaypointRec = value.m_GlobalWaypointRec;
	m_GlobalWaypointRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportGlobalWaypoint::Body::operator==(const Body &value) const
{
	if (m_GlobalWaypointRec != value.m_GlobalWaypointRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportGlobalWaypoint::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportGlobalWaypoint::Body::Body()
{
	m_GlobalWaypointRec.setParent(this);
	/// No Initialization of m_GlobalWaypointRec necessary.
}

ReportGlobalWaypoint::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_GlobalWaypointRec.setParent(this);
	/// No Initialization of m_GlobalWaypointRec necessary.
	
	/// Copy the values
	m_GlobalWaypointRec = value.m_GlobalWaypointRec;
	m_GlobalWaypointRec.setParent(this);
	/// This code is currently not supported
}

ReportGlobalWaypoint::Body::~Body()
{
}

ReportGlobalWaypoint::Body* const ReportGlobalWaypoint::getBody()
{
	return &m_Body;
}

int ReportGlobalWaypoint::setBody(const Body &value)
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
const unsigned int ReportGlobalWaypoint::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportGlobalWaypoint::encode(unsigned char *bytes)
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

void ReportGlobalWaypoint::decode(const unsigned char *bytes)
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

ReportGlobalWaypoint &ReportGlobalWaypoint::operator=(const ReportGlobalWaypoint &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportGlobalWaypoint::operator==(const ReportGlobalWaypoint &value) const
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

bool ReportGlobalWaypoint::operator!=(const ReportGlobalWaypoint &value) const
{
	return !((*this) == value);
}

ReportGlobalWaypoint::ReportGlobalWaypoint()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportGlobalWaypoint::ReportGlobalWaypoint(const ReportGlobalWaypoint &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportGlobalWaypoint::~ReportGlobalWaypoint()
{
}


}
