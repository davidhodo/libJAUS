#include "urn_jaus_jss_mobility_PrimitiveDriver_1_0/Messages/SetWrenchEffort.h"

namespace urn_jaus_jss_mobility_PrimitiveDriver_1_0
{

void SetWrenchEffort::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void SetWrenchEffort::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetWrenchEffort::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int SetWrenchEffort::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int SetWrenchEffort::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void SetWrenchEffort::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void SetWrenchEffort::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

SetWrenchEffort::AppHeader::HeaderRec &SetWrenchEffort::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool SetWrenchEffort::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool SetWrenchEffort::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

SetWrenchEffort::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x0405;
}

SetWrenchEffort::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x0405;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

SetWrenchEffort::AppHeader::HeaderRec::~HeaderRec()
{
}

SetWrenchEffort::AppHeader::HeaderRec* const SetWrenchEffort::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int SetWrenchEffort::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void SetWrenchEffort::AppHeader::setParentPresenceVector()
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
const unsigned int SetWrenchEffort::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void SetWrenchEffort::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void SetWrenchEffort::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

SetWrenchEffort::AppHeader &SetWrenchEffort::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool SetWrenchEffort::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool SetWrenchEffort::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

SetWrenchEffort::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

SetWrenchEffort::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

SetWrenchEffort::AppHeader::~AppHeader()
{
}

SetWrenchEffort::AppHeader* const SetWrenchEffort::getAppHeader()
{
	return &m_AppHeader;
}

int SetWrenchEffort::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void SetWrenchEffort::Body::WrenchEffortRec::setParent(Body* parent)
{
	m_parent = parent;
}

void SetWrenchEffort::Body::WrenchEffortRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetWrenchEffort::Body::WrenchEffortRec::getPresenceVector()
{
	return m_PresenceVector;
}

int SetWrenchEffort::Body::WrenchEffortRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedShortInteger)pvBitSet.to_ulong();
	return 0;
}

bool SetWrenchEffort::Body::WrenchEffortRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

bool SetWrenchEffort::Body::WrenchEffortRec::isPropulsiveLinearEffortXValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getPropulsiveLinearEffortX()
{
	double value;
	
	double scaleFactor = ( 100 - -100 ) / 65535.0;
	double bias = -100;
	
	value = m_PropulsiveLinearEffortX * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setPropulsiveLinearEffortX(double value)
{
	if ((value >= -100) && (value <= 100))
	{
		double scaleFactor = ( 100 - -100 ) / 65535.0;
		double bias = -100;
		
		m_PropulsiveLinearEffortX= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(0);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isPropulsiveLinearEffortYValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getPropulsiveLinearEffortY()
{
	double value;
	
	double scaleFactor = ( 100 - -100 ) / 65535.0;
	double bias = -100;
	
	value = m_PropulsiveLinearEffortY * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setPropulsiveLinearEffortY(double value)
{
	if ((value >= -100) && (value <= 100))
	{
		double scaleFactor = ( 100 - -100 ) / 65535.0;
		double bias = -100;
		
		m_PropulsiveLinearEffortY= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isPropulsiveLinearEffortZValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getPropulsiveLinearEffortZ()
{
	double value;
	
	double scaleFactor = ( 100 - -100 ) / 65535.0;
	double bias = -100;
	
	value = m_PropulsiveLinearEffortZ * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setPropulsiveLinearEffortZ(double value)
{
	if ((value >= -100) && (value <= 100))
	{
		double scaleFactor = ( 100 - -100 ) / 65535.0;
		double bias = -100;
		
		m_PropulsiveLinearEffortZ= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(2);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isPropulsiveRotationalEffortXValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getPropulsiveRotationalEffortX()
{
	double value;
	
	double scaleFactor = ( 100 - -100 ) / 65535.0;
	double bias = -100;
	
	value = m_PropulsiveRotationalEffortX * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setPropulsiveRotationalEffortX(double value)
{
	if ((value >= -100) && (value <= 100))
	{
		double scaleFactor = ( 100 - -100 ) / 65535.0;
		double bias = -100;
		
		m_PropulsiveRotationalEffortX= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isPropulsiveRotationalEffortYValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getPropulsiveRotationalEffortY()
{
	double value;
	
	double scaleFactor = ( 100 - -100 ) / 65535.0;
	double bias = -100;
	
	value = m_PropulsiveRotationalEffortY * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setPropulsiveRotationalEffortY(double value)
{
	if ((value >= -100) && (value <= 100))
	{
		double scaleFactor = ( 100 - -100 ) / 65535.0;
		double bias = -100;
		
		m_PropulsiveRotationalEffortY= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(4);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isPropulsiveRotationalEffortZValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getPropulsiveRotationalEffortZ()
{
	double value;
	
	double scaleFactor = ( 100 - -100 ) / 65535.0;
	double bias = -100;
	
	value = m_PropulsiveRotationalEffortZ * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setPropulsiveRotationalEffortZ(double value)
{
	if ((value >= -100) && (value <= 100))
	{
		double scaleFactor = ( 100 - -100 ) / 65535.0;
		double bias = -100;
		
		m_PropulsiveRotationalEffortZ= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(5);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isResistiveLinearEffortXValid() const
{
	if (checkPresenceVector(6))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getResistiveLinearEffortX()
{
	double value;
	
	double scaleFactor = ( 100 - 0 ) / 255.0;
	double bias = 0;
	
	value = m_ResistiveLinearEffortX * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setResistiveLinearEffortX(double value)
{
	if ((value >= 0) && (value <= 100))
	{
		double scaleFactor = ( 100 - 0 ) / 255.0;
		double bias = 0;
		
		m_ResistiveLinearEffortX= (jUnsignedByte)((value - bias) / scaleFactor);
		setPresenceVector(6);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isResistiveLinearEffortYValid() const
{
	if (checkPresenceVector(7))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getResistiveLinearEffortY()
{
	double value;
	
	double scaleFactor = ( 100 - 0 ) / 255.0;
	double bias = 0;
	
	value = m_ResistiveLinearEffortY * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setResistiveLinearEffortY(double value)
{
	if ((value >= 0) && (value <= 100))
	{
		double scaleFactor = ( 100 - 0 ) / 255.0;
		double bias = 0;
		
		m_ResistiveLinearEffortY= (jUnsignedByte)((value - bias) / scaleFactor);
		setPresenceVector(7);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isResistiveLinearEffortZValid() const
{
	if (checkPresenceVector(8))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getResistiveLinearEffortZ()
{
	double value;
	
	double scaleFactor = ( 100 - 0 ) / 255.0;
	double bias = 0;
	
	value = m_ResistiveLinearEffortZ * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setResistiveLinearEffortZ(double value)
{
	if ((value >= 0) && (value <= 100))
	{
		double scaleFactor = ( 100 - 0 ) / 255.0;
		double bias = 0;
		
		m_ResistiveLinearEffortZ= (jUnsignedByte)((value - bias) / scaleFactor);
		setPresenceVector(8);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isResistiveRotationalEffortXValid() const
{
	if (checkPresenceVector(9))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getResistiveRotationalEffortX()
{
	double value;
	
	double scaleFactor = ( 100 - 0 ) / 255.0;
	double bias = 0;
	
	value = m_ResistiveRotationalEffortX * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setResistiveRotationalEffortX(double value)
{
	if ((value >= 0) && (value <= 100))
	{
		double scaleFactor = ( 100 - 0 ) / 255.0;
		double bias = 0;
		
		m_ResistiveRotationalEffortX= (jUnsignedByte)((value - bias) / scaleFactor);
		setPresenceVector(9);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isResistiveRotationalEffortYValid() const
{
	if (checkPresenceVector(10))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getResistiveRotationalEffortY()
{
	double value;
	
	double scaleFactor = ( 100 - 0 ) / 255.0;
	double bias = 0;
	
	value = m_ResistiveRotationalEffortY * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setResistiveRotationalEffortY(double value)
{
	if ((value >= 0) && (value <= 100))
	{
		double scaleFactor = ( 100 - 0 ) / 255.0;
		double bias = 0;
		
		m_ResistiveRotationalEffortY= (jUnsignedByte)((value - bias) / scaleFactor);
		setPresenceVector(10);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetWrenchEffort::Body::WrenchEffortRec::isResistiveRotationalEffortZValid() const
{
	if (checkPresenceVector(11))
	{
		return true;
	}
	return false;
}

double SetWrenchEffort::Body::WrenchEffortRec::getResistiveRotationalEffortZ()
{
	double value;
	
	double scaleFactor = ( 100 - 0 ) / 255.0;
	double bias = 0;
	
	value = m_ResistiveRotationalEffortZ * scaleFactor + bias;
	
	return value;
}

int SetWrenchEffort::Body::WrenchEffortRec::setResistiveRotationalEffortZ(double value)
{
	if ((value >= 0) && (value <= 100))
	{
		double scaleFactor = ( 100 - 0 ) / 255.0;
		double bias = 0;
		
		m_ResistiveRotationalEffortZ= (jUnsignedByte)((value - bias) / scaleFactor);
		setPresenceVector(11);
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
const unsigned int SetWrenchEffort::Body::WrenchEffortRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		size += sizeof(jUnsignedShortInteger);
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
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(7))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(8))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(9))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(10))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(11))
	{
		size += sizeof(jUnsignedByte);
	}
	
	return size;
}

void SetWrenchEffort::Body::WrenchEffortRec::encode(unsigned char *bytes)
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
	if (checkPresenceVector(0))
	{
		jUnsignedShortInteger m_PropulsiveLinearEffortXTemp;
		
		m_PropulsiveLinearEffortXTemp = JSIDL_v_1_0::correctEndianness(m_PropulsiveLinearEffortX);
		memcpy(bytes + pos, &m_PropulsiveLinearEffortXTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_PropulsiveLinearEffortYTemp;
		
		m_PropulsiveLinearEffortYTemp = JSIDL_v_1_0::correctEndianness(m_PropulsiveLinearEffortY);
		memcpy(bytes + pos, &m_PropulsiveLinearEffortYTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedShortInteger m_PropulsiveLinearEffortZTemp;
		
		m_PropulsiveLinearEffortZTemp = JSIDL_v_1_0::correctEndianness(m_PropulsiveLinearEffortZ);
		memcpy(bytes + pos, &m_PropulsiveLinearEffortZTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedShortInteger m_PropulsiveRotationalEffortXTemp;
		
		m_PropulsiveRotationalEffortXTemp = JSIDL_v_1_0::correctEndianness(m_PropulsiveRotationalEffortX);
		memcpy(bytes + pos, &m_PropulsiveRotationalEffortXTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedShortInteger m_PropulsiveRotationalEffortYTemp;
		
		m_PropulsiveRotationalEffortYTemp = JSIDL_v_1_0::correctEndianness(m_PropulsiveRotationalEffortY);
		memcpy(bytes + pos, &m_PropulsiveRotationalEffortYTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedShortInteger m_PropulsiveRotationalEffortZTemp;
		
		m_PropulsiveRotationalEffortZTemp = JSIDL_v_1_0::correctEndianness(m_PropulsiveRotationalEffortZ);
		memcpy(bytes + pos, &m_PropulsiveRotationalEffortZTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedByte m_ResistiveLinearEffortXTemp;
		
		m_ResistiveLinearEffortXTemp = JSIDL_v_1_0::correctEndianness(m_ResistiveLinearEffortX);
		memcpy(bytes + pos, &m_ResistiveLinearEffortXTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedByte m_ResistiveLinearEffortYTemp;
		
		m_ResistiveLinearEffortYTemp = JSIDL_v_1_0::correctEndianness(m_ResistiveLinearEffortY);
		memcpy(bytes + pos, &m_ResistiveLinearEffortYTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(8))
	{
		jUnsignedByte m_ResistiveLinearEffortZTemp;
		
		m_ResistiveLinearEffortZTemp = JSIDL_v_1_0::correctEndianness(m_ResistiveLinearEffortZ);
		memcpy(bytes + pos, &m_ResistiveLinearEffortZTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(9))
	{
		jUnsignedByte m_ResistiveRotationalEffortXTemp;
		
		m_ResistiveRotationalEffortXTemp = JSIDL_v_1_0::correctEndianness(m_ResistiveRotationalEffortX);
		memcpy(bytes + pos, &m_ResistiveRotationalEffortXTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(10))
	{
		jUnsignedByte m_ResistiveRotationalEffortYTemp;
		
		m_ResistiveRotationalEffortYTemp = JSIDL_v_1_0::correctEndianness(m_ResistiveRotationalEffortY);
		memcpy(bytes + pos, &m_ResistiveRotationalEffortYTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(11))
	{
		jUnsignedByte m_ResistiveRotationalEffortZTemp;
		
		m_ResistiveRotationalEffortZTemp = JSIDL_v_1_0::correctEndianness(m_ResistiveRotationalEffortZ);
		memcpy(bytes + pos, &m_ResistiveRotationalEffortZTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
}

void SetWrenchEffort::Body::WrenchEffortRec::decode(const unsigned char *bytes)
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
	if (checkPresenceVector(0))
	{
		jUnsignedShortInteger m_PropulsiveLinearEffortXTemp;
		
		memcpy(&m_PropulsiveLinearEffortXTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_PropulsiveLinearEffortX = JSIDL_v_1_0::correctEndianness(m_PropulsiveLinearEffortXTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_PropulsiveLinearEffortYTemp;
		
		memcpy(&m_PropulsiveLinearEffortYTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_PropulsiveLinearEffortY = JSIDL_v_1_0::correctEndianness(m_PropulsiveLinearEffortYTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedShortInteger m_PropulsiveLinearEffortZTemp;
		
		memcpy(&m_PropulsiveLinearEffortZTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_PropulsiveLinearEffortZ = JSIDL_v_1_0::correctEndianness(m_PropulsiveLinearEffortZTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedShortInteger m_PropulsiveRotationalEffortXTemp;
		
		memcpy(&m_PropulsiveRotationalEffortXTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_PropulsiveRotationalEffortX = JSIDL_v_1_0::correctEndianness(m_PropulsiveRotationalEffortXTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedShortInteger m_PropulsiveRotationalEffortYTemp;
		
		memcpy(&m_PropulsiveRotationalEffortYTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_PropulsiveRotationalEffortY = JSIDL_v_1_0::correctEndianness(m_PropulsiveRotationalEffortYTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedShortInteger m_PropulsiveRotationalEffortZTemp;
		
		memcpy(&m_PropulsiveRotationalEffortZTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_PropulsiveRotationalEffortZ = JSIDL_v_1_0::correctEndianness(m_PropulsiveRotationalEffortZTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedByte m_ResistiveLinearEffortXTemp;
		
		memcpy(&m_ResistiveLinearEffortXTemp, bytes + pos, sizeof(jUnsignedByte));
		m_ResistiveLinearEffortX = JSIDL_v_1_0::correctEndianness(m_ResistiveLinearEffortXTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedByte m_ResistiveLinearEffortYTemp;
		
		memcpy(&m_ResistiveLinearEffortYTemp, bytes + pos, sizeof(jUnsignedByte));
		m_ResistiveLinearEffortY = JSIDL_v_1_0::correctEndianness(m_ResistiveLinearEffortYTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(8))
	{
		jUnsignedByte m_ResistiveLinearEffortZTemp;
		
		memcpy(&m_ResistiveLinearEffortZTemp, bytes + pos, sizeof(jUnsignedByte));
		m_ResistiveLinearEffortZ = JSIDL_v_1_0::correctEndianness(m_ResistiveLinearEffortZTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(9))
	{
		jUnsignedByte m_ResistiveRotationalEffortXTemp;
		
		memcpy(&m_ResistiveRotationalEffortXTemp, bytes + pos, sizeof(jUnsignedByte));
		m_ResistiveRotationalEffortX = JSIDL_v_1_0::correctEndianness(m_ResistiveRotationalEffortXTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(10))
	{
		jUnsignedByte m_ResistiveRotationalEffortYTemp;
		
		memcpy(&m_ResistiveRotationalEffortYTemp, bytes + pos, sizeof(jUnsignedByte));
		m_ResistiveRotationalEffortY = JSIDL_v_1_0::correctEndianness(m_ResistiveRotationalEffortYTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(11))
	{
		jUnsignedByte m_ResistiveRotationalEffortZTemp;
		
		memcpy(&m_ResistiveRotationalEffortZTemp, bytes + pos, sizeof(jUnsignedByte));
		m_ResistiveRotationalEffortZ = JSIDL_v_1_0::correctEndianness(m_ResistiveRotationalEffortZTemp);
		pos += sizeof(jUnsignedByte);
	}
}

SetWrenchEffort::Body::WrenchEffortRec &SetWrenchEffort::Body::WrenchEffortRec::operator=(const WrenchEffortRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_PropulsiveLinearEffortX = value.m_PropulsiveLinearEffortX;
	m_PropulsiveLinearEffortY = value.m_PropulsiveLinearEffortY;
	m_PropulsiveLinearEffortZ = value.m_PropulsiveLinearEffortZ;
	m_PropulsiveRotationalEffortX = value.m_PropulsiveRotationalEffortX;
	m_PropulsiveRotationalEffortY = value.m_PropulsiveRotationalEffortY;
	m_PropulsiveRotationalEffortZ = value.m_PropulsiveRotationalEffortZ;
	m_ResistiveLinearEffortX = value.m_ResistiveLinearEffortX;
	m_ResistiveLinearEffortY = value.m_ResistiveLinearEffortY;
	m_ResistiveLinearEffortZ = value.m_ResistiveLinearEffortZ;
	m_ResistiveRotationalEffortX = value.m_ResistiveRotationalEffortX;
	m_ResistiveRotationalEffortY = value.m_ResistiveRotationalEffortY;
	m_ResistiveRotationalEffortZ = value.m_ResistiveRotationalEffortZ;
	
	return *this;
}

bool SetWrenchEffort::Body::WrenchEffortRec::operator==(const WrenchEffortRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_PropulsiveLinearEffortX != value.m_PropulsiveLinearEffortX)
	{
		return false;
	}
	if (m_PropulsiveLinearEffortY != value.m_PropulsiveLinearEffortY)
	{
		return false;
	}
	if (m_PropulsiveLinearEffortZ != value.m_PropulsiveLinearEffortZ)
	{
		return false;
	}
	if (m_PropulsiveRotationalEffortX != value.m_PropulsiveRotationalEffortX)
	{
		return false;
	}
	if (m_PropulsiveRotationalEffortY != value.m_PropulsiveRotationalEffortY)
	{
		return false;
	}
	if (m_PropulsiveRotationalEffortZ != value.m_PropulsiveRotationalEffortZ)
	{
		return false;
	}
	if (m_ResistiveLinearEffortX != value.m_ResistiveLinearEffortX)
	{
		return false;
	}
	if (m_ResistiveLinearEffortY != value.m_ResistiveLinearEffortY)
	{
		return false;
	}
	if (m_ResistiveLinearEffortZ != value.m_ResistiveLinearEffortZ)
	{
		return false;
	}
	if (m_ResistiveRotationalEffortX != value.m_ResistiveRotationalEffortX)
	{
		return false;
	}
	if (m_ResistiveRotationalEffortY != value.m_ResistiveRotationalEffortY)
	{
		return false;
	}
	if (m_ResistiveRotationalEffortZ != value.m_ResistiveRotationalEffortZ)
	{
		return false;
	}
	
	return true;
}

bool SetWrenchEffort::Body::WrenchEffortRec::operator!=(const WrenchEffortRec &value) const
{
	return !((*this) == value);
}

SetWrenchEffort::Body::WrenchEffortRec::WrenchEffortRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_PropulsiveLinearEffortX = 0;
	m_PropulsiveLinearEffortY = 0;
	m_PropulsiveLinearEffortZ = 0;
	m_PropulsiveRotationalEffortX = 0;
	m_PropulsiveRotationalEffortY = 0;
	m_PropulsiveRotationalEffortZ = 0;
	m_ResistiveLinearEffortX = 0;
	m_ResistiveLinearEffortY = 0;
	m_ResistiveLinearEffortZ = 0;
	m_ResistiveRotationalEffortX = 0;
	m_ResistiveRotationalEffortY = 0;
	m_ResistiveRotationalEffortZ = 0;
}

SetWrenchEffort::Body::WrenchEffortRec::WrenchEffortRec(const WrenchEffortRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_PropulsiveLinearEffortX = 0;
	m_PropulsiveLinearEffortY = 0;
	m_PropulsiveLinearEffortZ = 0;
	m_PropulsiveRotationalEffortX = 0;
	m_PropulsiveRotationalEffortY = 0;
	m_PropulsiveRotationalEffortZ = 0;
	m_ResistiveLinearEffortX = 0;
	m_ResistiveLinearEffortY = 0;
	m_ResistiveLinearEffortZ = 0;
	m_ResistiveRotationalEffortX = 0;
	m_ResistiveRotationalEffortY = 0;
	m_ResistiveRotationalEffortZ = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_PropulsiveLinearEffortX = value.m_PropulsiveLinearEffortX;
	m_PropulsiveLinearEffortY = value.m_PropulsiveLinearEffortY;
	m_PropulsiveLinearEffortZ = value.m_PropulsiveLinearEffortZ;
	m_PropulsiveRotationalEffortX = value.m_PropulsiveRotationalEffortX;
	m_PropulsiveRotationalEffortY = value.m_PropulsiveRotationalEffortY;
	m_PropulsiveRotationalEffortZ = value.m_PropulsiveRotationalEffortZ;
	m_ResistiveLinearEffortX = value.m_ResistiveLinearEffortX;
	m_ResistiveLinearEffortY = value.m_ResistiveLinearEffortY;
	m_ResistiveLinearEffortZ = value.m_ResistiveLinearEffortZ;
	m_ResistiveRotationalEffortX = value.m_ResistiveRotationalEffortX;
	m_ResistiveRotationalEffortY = value.m_ResistiveRotationalEffortY;
	m_ResistiveRotationalEffortZ = value.m_ResistiveRotationalEffortZ;
}

SetWrenchEffort::Body::WrenchEffortRec::~WrenchEffortRec()
{
}

SetWrenchEffort::Body::WrenchEffortRec* const SetWrenchEffort::Body::getWrenchEffortRec()
{
	return &m_WrenchEffortRec;
}

int SetWrenchEffort::Body::setWrenchEffortRec(const WrenchEffortRec &value)
{
	m_WrenchEffortRec = value;
	setParentPresenceVector();
	return 0;
}

void SetWrenchEffort::Body::setParentPresenceVector()
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
const unsigned int SetWrenchEffort::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_WrenchEffortRec.getSize();
	
	return size;
}

void SetWrenchEffort::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_WrenchEffortRec.encode(bytes + pos);
	pos += m_WrenchEffortRec.getSize();
}

void SetWrenchEffort::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_WrenchEffortRec.decode(bytes + pos);
	pos += m_WrenchEffortRec.getSize();
}

SetWrenchEffort::Body &SetWrenchEffort::Body::operator=(const Body &value)
{
	m_WrenchEffortRec = value.m_WrenchEffortRec;
	m_WrenchEffortRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool SetWrenchEffort::Body::operator==(const Body &value) const
{
	if (m_WrenchEffortRec != value.m_WrenchEffortRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool SetWrenchEffort::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

SetWrenchEffort::Body::Body()
{
	m_WrenchEffortRec.setParent(this);
	/// No Initialization of m_WrenchEffortRec necessary.
}

SetWrenchEffort::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_WrenchEffortRec.setParent(this);
	/// No Initialization of m_WrenchEffortRec necessary.
	
	/// Copy the values
	m_WrenchEffortRec = value.m_WrenchEffortRec;
	m_WrenchEffortRec.setParent(this);
	/// This code is currently not supported
}

SetWrenchEffort::Body::~Body()
{
}

SetWrenchEffort::Body* const SetWrenchEffort::getBody()
{
	return &m_Body;
}

int SetWrenchEffort::setBody(const Body &value)
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
const unsigned int SetWrenchEffort::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void SetWrenchEffort::encode(unsigned char *bytes)
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

void SetWrenchEffort::decode(const unsigned char *bytes)
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

SetWrenchEffort &SetWrenchEffort::operator=(const SetWrenchEffort &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool SetWrenchEffort::operator==(const SetWrenchEffort &value) const
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

bool SetWrenchEffort::operator!=(const SetWrenchEffort &value) const
{
	return !((*this) == value);
}

SetWrenchEffort::SetWrenchEffort()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

SetWrenchEffort::SetWrenchEffort(const SetWrenchEffort &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

SetWrenchEffort::~SetWrenchEffort()
{
}


}
