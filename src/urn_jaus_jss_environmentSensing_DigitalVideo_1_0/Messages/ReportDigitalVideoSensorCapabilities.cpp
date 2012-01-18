#include "urn_jaus_jss_environmentSensing_DigitalVideo_1_0/Messages/ReportDigitalVideoSensorCapabilities.h"

namespace urn_jaus_jss_environmentSensing_DigitalVideo_1_0
{

void ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::setParent(AppHeader* parent)
{
	m_parent = parent;
}

void ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::encode(unsigned char *bytes)
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

void ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::decode(const unsigned char *bytes)
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

ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec &ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::operator=(const HeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::operator==(const HeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::operator!=(const HeaderRec &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::HeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4808;
}

ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::HeaderRec(const HeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4808;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec::~HeaderRec()
{
}

ReportDigitalVideoSensorCapabilities::AppHeader::HeaderRec* const ReportDigitalVideoSensorCapabilities::AppHeader::getHeaderRec()
{
	return &m_HeaderRec;
}

int ReportDigitalVideoSensorCapabilities::AppHeader::setHeaderRec(const HeaderRec &value)
{
	m_HeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportDigitalVideoSensorCapabilities::AppHeader::setParentPresenceVector()
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
const unsigned int ReportDigitalVideoSensorCapabilities::AppHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_HeaderRec.getSize();
	
	return size;
}

void ReportDigitalVideoSensorCapabilities::AppHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.encode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

void ReportDigitalVideoSensorCapabilities::AppHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_HeaderRec.decode(bytes + pos);
	pos += m_HeaderRec.getSize();
}

ReportDigitalVideoSensorCapabilities::AppHeader &ReportDigitalVideoSensorCapabilities::AppHeader::operator=(const AppHeader &value)
{
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
	
	return *this;
}

bool ReportDigitalVideoSensorCapabilities::AppHeader::operator==(const AppHeader &value) const
{
	if (m_HeaderRec != value.m_HeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportDigitalVideoSensorCapabilities::AppHeader::operator!=(const AppHeader &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorCapabilities::AppHeader::AppHeader()
{
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
}

ReportDigitalVideoSensorCapabilities::AppHeader::AppHeader(const AppHeader &value)
{
	/// Initiliaze the protected variables
	m_HeaderRec.setParent(this);
	/// No Initialization of m_HeaderRec necessary.
	
	/// Copy the values
	m_HeaderRec = value.m_HeaderRec;
	m_HeaderRec.setParent(this);
}

ReportDigitalVideoSensorCapabilities::AppHeader::~AppHeader()
{
}

ReportDigitalVideoSensorCapabilities::AppHeader* const ReportDigitalVideoSensorCapabilities::getAppHeader()
{
	return &m_AppHeader;
}

int ReportDigitalVideoSensorCapabilities::setAppHeader(const AppHeader &value)
{
	m_AppHeader = value;
	return 0;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::setParent(DigitalVideoSensorList* parent)
{
	m_parent = parent;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedByte)pvBitSet.to_ulong();
	return 0;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

jUnsignedShortInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::getSensorID()
{
	return m_SensorID;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::setSensorID(jUnsignedShortInteger value)
{
	m_SensorID = value;
	setParentPresenceVector();
	return 0;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::isMinimumBitRateValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

jUnsignedShortInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::getMinimumBitRate()
{
	return m_MinimumBitRate;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::setMinimumBitRate(jUnsignedShortInteger value)
{
	m_MinimumBitRate = value;
	setPresenceVector(0);
	setParentPresenceVector();
	return 0;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::isMaximumBitRateValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

jUnsignedShortInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::getMaximumBitRate()
{
	return m_MaximumBitRate;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::setMaximumBitRate(jUnsignedShortInteger value)
{
	m_MaximumBitRate = value;
	setPresenceVector(1);
	setParentPresenceVector();
	return 0;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::isMinimumFrameRateValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

jUnsignedByte ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::getMinimumFrameRate()
{
	return m_MinimumFrameRate;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::setMinimumFrameRate(jUnsignedByte value)
{
	m_MinimumFrameRate = value;
	setPresenceVector(2);
	setParentPresenceVector();
	return 0;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::isMaximumFrameRateValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

jUnsignedByte ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::getMaximumFrameRate()
{
	return m_MaximumFrameRate;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::setMaximumFrameRate(jUnsignedByte value)
{
	m_MaximumFrameRate = value;
	setPresenceVector(3);
	setParentPresenceVector();
	return 0;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setParent(DigitalVideoSensorCapabilitiesRec* parent)
{
	m_parent = parent;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setPresenceVector(4);
		m_parent->setParentPresenceVector();
	}
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getWvga_852x480()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 15; index <= 15; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setWvga_852x480(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 15; index <= 15; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getWxga_1366x768()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 16; index <= 16; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setWxga_1366x768(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 16; index <= 16; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getWsxga_1600x1024()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 17; index <= 17; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setWsxga_1600x1024(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 17; index <= 17; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getWuxga_1920x1200()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 18; index <= 18; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setWuxga_1920x1200(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 18; index <= 18; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getWoxga_2560x1600()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 19; index <= 19; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setWoxga_2560x1600(jUnsignedInteger value)
{
	if ((value == 1) || (value == 0))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 19; index <= 19; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getWqsxga_3200x2048()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 20; index <= 20; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setWqsxga_3200x2048(jUnsignedInteger value)
{
	if ((value == 1) || (value == 0))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 20; index <= 20; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getWquxga_3840x2400()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 21; index <= 21; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setWquxga_3840x2400(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 21; index <= 21; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getWhsxga_6400x4096()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 22; index <= 22; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setWhsxga_6400x4096(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 22; index <= 22; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getWhuxga_7680x4800()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 23; index <= 23; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setWhuxga_7680x4800(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 23; index <= 23; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getSqcif_128x96()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 0; index <= 0; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setSqcif_128x96(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 0; index <= 0; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getQcif_176x144()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 1; index <= 1; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setQcif_176x144(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 1; index <= 1; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getCga_320x200()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 24; index <= 24; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setCga_320x200(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 24; index <= 24; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getCif_352x288()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 2; index <= 2; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setCif_352x288(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 2; index <= 2; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getCif4_704x576()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 3; index <= 3; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setCif4_704x576(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 3; index <= 3; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getEga_640x350()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 25; index <= 25; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setEga_640x350(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 25; index <= 25; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getCif16_1408x1152()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 4; index <= 4; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setCif16_1408x1152(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 4; index <= 4; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getQqvga_160x120()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 5; index <= 5; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setQqvga_160x120(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 5; index <= 5; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getHd480_852x480()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 26; index <= 26; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setHd480_852x480(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 26; index <= 26; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getQvga_320x240()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 6; index <= 6; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setQvga_320x240(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 6; index <= 6; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getVga_640x480()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 7; index <= 7; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setVga_640x480(jUnsignedInteger value)
{
	if ((value == 1) || (value == 0))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 7; index <= 7; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getHd720_1280x720()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 27; index <= 27; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setHd720_1280x720(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 27; index <= 27; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getSvga_800x600()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 8; index <= 8; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setSvga_800x600(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 8; index <= 8; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getXga_1024x768()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 9; index <= 9; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setXga_1024x768(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 9; index <= 9; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getHd1080_1920x1080()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 28; index <= 28; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setHd1080_1920x1080(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 28; index <= 28; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getUxga_1600x1200()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 10; index <= 10; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setUxga_1600x1200(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 10; index <= 10; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getQxga_2048x1536()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 11; index <= 11; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setQxga_2048x1536(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 11; index <= 11; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getSxga_1280x1024()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 12; index <= 12; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setSxga_1280x1024(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 12; index <= 12; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getQsxga_2560x2048()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 13; index <= 13; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setQsxga_2560x2048(jUnsignedInteger value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 13; index <= 13; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getHsxga_5120x4096()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 14; index <= 14; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::setHsxga_5120x4096(jUnsignedInteger value)
{
	if ((value == 1) || (value == 0))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 14; index <= 14; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
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
const unsigned int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedInteger);
	
	return size;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedInteger m_SubFieldsTemp;
	
	m_SubFieldsTemp = JSIDL_v_1_0::correctEndianness(m_SubFields);
	memcpy(bytes + pos, &m_SubFieldsTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedInteger m_SubFieldsTemp;
	
	memcpy(&m_SubFieldsTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_SubFields = JSIDL_v_1_0::correctEndianness(m_SubFieldsTemp);
	pos += sizeof(jUnsignedInteger);
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes &ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::operator=(const SupportedFrameSizes &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::operator==(const SupportedFrameSizes &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::operator!=(const SupportedFrameSizes &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::SupportedFrameSizes()
{
	m_parent = NULL;
	m_SubFields = 0;
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::SupportedFrameSizes(const SupportedFrameSizes &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes::~SupportedFrameSizes()
{
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::isSupportedFrameSizesValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedFrameSizes* const ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::getSupportedFrameSizes()
{
	return &m_SupportedFrameSizes;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::setSupportedFrameSizes(const SupportedFrameSizes &value)
{
	m_SupportedFrameSizes = value;
	setPresenceVector(4);
	setParentPresenceVector();
	return 0;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::setParent(DigitalVideoSensorCapabilitiesRec* parent)
{
	m_parent = parent;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setPresenceVector(5);
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::getMPEG2()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 2; index <= 2; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::setMPEG2(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 2; index <= 2; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::getH263()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 3; index <= 3; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::setH263(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 3; index <= 3; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::getH263plus()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 4; index <= 4; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::setH263plus(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 4; index <= 4; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::getMPEG4_Visual()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 5; index <= 5; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::setMPEG4_Visual(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 5; index <= 5; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::getMPEG4_AVC_h264()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 6; index <= 6; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::setMPEG4_AVC_h264(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 6; index <= 6; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::getAVI()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 0; index <= 0; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::setAVI(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 0; index <= 0; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::getMJPEG()
{
	std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
	std::bitset<1> sfbs;
	int i = 0;
	
	for (int index = 1; index <= 1; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedByte)(sfbs.to_ulong());
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::setMJPEG(jUnsignedByte value)
{
	if ((value == 0) || (value == 1))
	{
		std::bitset<sizeof(jUnsignedByte) * 8> bfbs((int)m_SubFields);
		std::bitset<1> sfbs((int)value);
		int i = 0;
		
		for (int index = 1; index <= 1; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedByte)bfbs.to_ulong();
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
const unsigned int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	return size;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_SubFieldsTemp;
	
	m_SubFieldsTemp = JSIDL_v_1_0::correctEndianness(m_SubFields);
	memcpy(bytes + pos, &m_SubFieldsTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_SubFieldsTemp;
	
	memcpy(&m_SubFieldsTemp, bytes + pos, sizeof(jUnsignedByte));
	m_SubFields = JSIDL_v_1_0::correctEndianness(m_SubFieldsTemp);
	pos += sizeof(jUnsignedByte);
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats &ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::operator=(const SupportedDigitalFormats &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::operator==(const SupportedDigitalFormats &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::operator!=(const SupportedDigitalFormats &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::SupportedDigitalFormats()
{
	m_parent = NULL;
	m_SubFields = 0;
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::SupportedDigitalFormats(const SupportedDigitalFormats &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats::~SupportedDigitalFormats()
{
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::isSupportedDigitalFormatsValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::SupportedDigitalFormats* const ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::getSupportedDigitalFormats()
{
	return &m_SupportedDigitalFormats;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::setSupportedDigitalFormats(const SupportedDigitalFormats &value)
{
	m_SupportedDigitalFormats = value;
	setPresenceVector(5);
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
const unsigned int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
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
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(3))
	{
		size += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(4))
	{
		size += m_SupportedFrameSizes.getSize();
	}
	if (checkPresenceVector(5))
	{
		size += m_SupportedDigitalFormats.getSize();
	}
	
	return size;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::encode(unsigned char *bytes)
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
	jUnsignedShortInteger m_SensorIDTemp;
	
	m_SensorIDTemp = JSIDL_v_1_0::correctEndianness(m_SensorID);
	memcpy(bytes + pos, &m_SensorIDTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedShortInteger m_MinimumBitRateTemp;
		
		m_MinimumBitRateTemp = JSIDL_v_1_0::correctEndianness(m_MinimumBitRate);
		memcpy(bytes + pos, &m_MinimumBitRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_MaximumBitRateTemp;
		
		m_MaximumBitRateTemp = JSIDL_v_1_0::correctEndianness(m_MaximumBitRate);
		memcpy(bytes + pos, &m_MaximumBitRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedByte m_MinimumFrameRateTemp;
		
		m_MinimumFrameRateTemp = JSIDL_v_1_0::correctEndianness(m_MinimumFrameRate);
		memcpy(bytes + pos, &m_MinimumFrameRateTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedByte m_MaximumFrameRateTemp;
		
		m_MaximumFrameRateTemp = JSIDL_v_1_0::correctEndianness(m_MaximumFrameRate);
		memcpy(bytes + pos, &m_MaximumFrameRateTemp, sizeof(jUnsignedByte));
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(4))
	{
		m_SupportedFrameSizes.encode(bytes + pos);
		pos += m_SupportedFrameSizes.getSize();
	}
	if (checkPresenceVector(5))
	{
		m_SupportedDigitalFormats.encode(bytes + pos);
		pos += m_SupportedDigitalFormats.getSize();
	}
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::decode(const unsigned char *bytes)
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
	jUnsignedShortInteger m_SensorIDTemp;
	
	memcpy(&m_SensorIDTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_SensorID = JSIDL_v_1_0::correctEndianness(m_SensorIDTemp);
	pos += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		jUnsignedShortInteger m_MinimumBitRateTemp;
		
		memcpy(&m_MinimumBitRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_MinimumBitRate = JSIDL_v_1_0::correctEndianness(m_MinimumBitRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_MaximumBitRateTemp;
		
		memcpy(&m_MaximumBitRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_MaximumBitRate = JSIDL_v_1_0::correctEndianness(m_MaximumBitRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedByte m_MinimumFrameRateTemp;
		
		memcpy(&m_MinimumFrameRateTemp, bytes + pos, sizeof(jUnsignedByte));
		m_MinimumFrameRate = JSIDL_v_1_0::correctEndianness(m_MinimumFrameRateTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedByte m_MaximumFrameRateTemp;
		
		memcpy(&m_MaximumFrameRateTemp, bytes + pos, sizeof(jUnsignedByte));
		m_MaximumFrameRate = JSIDL_v_1_0::correctEndianness(m_MaximumFrameRateTemp);
		pos += sizeof(jUnsignedByte);
	}
	if (checkPresenceVector(4))
	{
		m_SupportedFrameSizes.decode(bytes + pos);
		pos += m_SupportedFrameSizes.getSize();
	}
	if (checkPresenceVector(5))
	{
		m_SupportedDigitalFormats.decode(bytes + pos);
		pos += m_SupportedDigitalFormats.getSize();
	}
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec &ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::operator=(const DigitalVideoSensorCapabilitiesRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_SensorID = value.m_SensorID;
	m_MinimumBitRate = value.m_MinimumBitRate;
	m_MaximumBitRate = value.m_MaximumBitRate;
	m_MinimumFrameRate = value.m_MinimumFrameRate;
	m_MaximumFrameRate = value.m_MaximumFrameRate;
	m_SupportedFrameSizes = value.m_SupportedFrameSizes;
	m_SupportedDigitalFormats = value.m_SupportedDigitalFormats;
	
	return *this;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::operator==(const DigitalVideoSensorCapabilitiesRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_SensorID != value.m_SensorID)
	{
		return false;
	}
	if (m_MinimumBitRate != value.m_MinimumBitRate)
	{
		return false;
	}
	if (m_MaximumBitRate != value.m_MaximumBitRate)
	{
		return false;
	}
	if (m_MinimumFrameRate != value.m_MinimumFrameRate)
	{
		return false;
	}
	if (m_MaximumFrameRate != value.m_MaximumFrameRate)
	{
		return false;
	}
	
	if (m_SupportedFrameSizes != value.m_SupportedFrameSizes)
	{
		return false;
	}
	
	if (m_SupportedDigitalFormats != value.m_SupportedDigitalFormats)
	{
		return false;
	}
	
	return true;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::operator!=(const DigitalVideoSensorCapabilitiesRec &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::DigitalVideoSensorCapabilitiesRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_SensorID = 0;
	m_MinimumBitRate = 0;
	m_MaximumBitRate = 0;
	m_MinimumFrameRate = 0;
	m_MaximumFrameRate = 0;
	m_SupportedFrameSizes.setParent(this);
	m_SupportedDigitalFormats.setParent(this);
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::DigitalVideoSensorCapabilitiesRec(const DigitalVideoSensorCapabilitiesRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_SensorID = 0;
	m_MinimumBitRate = 0;
	m_MaximumBitRate = 0;
	m_MinimumFrameRate = 0;
	m_MaximumFrameRate = 0;
	m_SupportedFrameSizes.setParent(this);
	m_SupportedDigitalFormats.setParent(this);
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_SensorID = value.m_SensorID;
	m_MinimumBitRate = value.m_MinimumBitRate;
	m_MaximumBitRate = value.m_MaximumBitRate;
	m_MinimumFrameRate = value.m_MinimumFrameRate;
	m_MaximumFrameRate = value.m_MaximumFrameRate;
	m_SupportedFrameSizes = value.m_SupportedFrameSizes;
	m_SupportedDigitalFormats = value.m_SupportedDigitalFormats;
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec::~DigitalVideoSensorCapabilitiesRec()
{
}

unsigned int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::getNumberOfElements() const
{
	return (unsigned int) m_DigitalVideoSensorCapabilitiesRec.size();
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorCapabilitiesRec* const ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::getElement(unsigned int index)
{
	return &m_DigitalVideoSensorCapabilitiesRec.at(index);
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::setElement(unsigned int index, const DigitalVideoSensorCapabilitiesRec &value)
{
	if(m_DigitalVideoSensorCapabilitiesRec.size()-1 < index)
	{
		return 1;
	}
	
	m_DigitalVideoSensorCapabilitiesRec.at(index) = value;
	m_DigitalVideoSensorCapabilitiesRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::addElement(const DigitalVideoSensorCapabilitiesRec &value)
{
	m_DigitalVideoSensorCapabilitiesRec.push_back(value);
	m_DigitalVideoSensorCapabilitiesRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::deleteElement(unsigned int index)
{
	if(m_DigitalVideoSensorCapabilitiesRec.size()-1 < index)
	{
		return 1;
	}
	
	m_DigitalVideoSensorCapabilitiesRec.erase(m_DigitalVideoSensorCapabilitiesRec.begin()+index);
	return 0;
}

int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::deleteLastElement()
{
	m_DigitalVideoSensorCapabilitiesRec.pop_back();
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
const unsigned int ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	for (int i = 0; i < m_DigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		size += m_DigitalVideoSensorCapabilitiesRec[i].getSize();
	}
	
	return size;
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size = (jUnsignedShortInteger) m_DigitalVideoSensorCapabilitiesRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_DigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_DigitalVideoSensorCapabilitiesRec[i].encode(bytes + pos);
		pos += m_DigitalVideoSensorCapabilitiesRec[i].getSize();
	}
}

void ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_DigitalVideoSensorCapabilitiesRec.resize(size);
	for (int i = 0; i < m_DigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_DigitalVideoSensorCapabilitiesRec[i].decode(bytes + pos);
		pos += m_DigitalVideoSensorCapabilitiesRec[i].getSize();
	}
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList &ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::operator=(const DigitalVideoSensorList &value)
{
	m_DigitalVideoSensorCapabilitiesRec.clear();
	
	for (int i = 0; i < value.m_DigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_DigitalVideoSensorCapabilitiesRec.push_back(value.m_DigitalVideoSensorCapabilitiesRec[i]);
		m_DigitalVideoSensorCapabilitiesRec[i].setParent(this);
	}
	
	return *this;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::operator==(const DigitalVideoSensorList &value) const
{
	for (int i = 0; i < m_DigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		if (m_DigitalVideoSensorCapabilitiesRec[i] !=  value.m_DigitalVideoSensorCapabilitiesRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::operator!=(const DigitalVideoSensorList &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_DigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_DigitalVideoSensorCapabilitiesRec[i].setParent(this);
	}
	/// No Initialization of m_DigitalVideoSensorCapabilitiesRec necessary.
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::DigitalVideoSensorList(const DigitalVideoSensorList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_DigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_DigitalVideoSensorCapabilitiesRec[i].setParent(this);
	}
	/// No Initialization of m_DigitalVideoSensorCapabilitiesRec necessary.
	
	/// Copy the values
	m_DigitalVideoSensorCapabilitiesRec.clear();
	
	for (int i = 0; i < value.m_DigitalVideoSensorCapabilitiesRec.size(); i++)
	{
		m_DigitalVideoSensorCapabilitiesRec.push_back(value.m_DigitalVideoSensorCapabilitiesRec[i]);
		m_DigitalVideoSensorCapabilitiesRec[i].setParent(this);
	}
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList::~DigitalVideoSensorList()
{
}

ReportDigitalVideoSensorCapabilities::Body::DigitalVideoSensorList* const ReportDigitalVideoSensorCapabilities::Body::getDigitalVideoSensorList()
{
	return &m_DigitalVideoSensorList;
}

int ReportDigitalVideoSensorCapabilities::Body::setDigitalVideoSensorList(const DigitalVideoSensorList &value)
{
	m_DigitalVideoSensorList = value;
	setParentPresenceVector();
	return 0;
}

void ReportDigitalVideoSensorCapabilities::Body::setParentPresenceVector()
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
const unsigned int ReportDigitalVideoSensorCapabilities::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_DigitalVideoSensorList.getSize();
	
	return size;
}

void ReportDigitalVideoSensorCapabilities::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DigitalVideoSensorList.encode(bytes + pos);
	pos += m_DigitalVideoSensorList.getSize();
}

void ReportDigitalVideoSensorCapabilities::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DigitalVideoSensorList.decode(bytes + pos);
	pos += m_DigitalVideoSensorList.getSize();
}

ReportDigitalVideoSensorCapabilities::Body &ReportDigitalVideoSensorCapabilities::Body::operator=(const Body &value)
{
	m_DigitalVideoSensorList = value.m_DigitalVideoSensorList;
	m_DigitalVideoSensorList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportDigitalVideoSensorCapabilities::Body::operator==(const Body &value) const
{
	if (m_DigitalVideoSensorList != value.m_DigitalVideoSensorList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportDigitalVideoSensorCapabilities::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorCapabilities::Body::Body()
{
	m_DigitalVideoSensorList.setParent(this);
	/// No Initialization of m_DigitalVideoSensorList necessary.
}

ReportDigitalVideoSensorCapabilities::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_DigitalVideoSensorList.setParent(this);
	/// No Initialization of m_DigitalVideoSensorList necessary.
	
	/// Copy the values
	m_DigitalVideoSensorList = value.m_DigitalVideoSensorList;
	m_DigitalVideoSensorList.setParent(this);
	/// This code is currently not supported
}

ReportDigitalVideoSensorCapabilities::Body::~Body()
{
}

ReportDigitalVideoSensorCapabilities::Body* const ReportDigitalVideoSensorCapabilities::getBody()
{
	return &m_Body;
}

int ReportDigitalVideoSensorCapabilities::setBody(const Body &value)
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
const unsigned int ReportDigitalVideoSensorCapabilities::getSize()
{
	unsigned int size = 0;
	
	size += m_AppHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportDigitalVideoSensorCapabilities::encode(unsigned char *bytes)
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

void ReportDigitalVideoSensorCapabilities::decode(const unsigned char *bytes)
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

ReportDigitalVideoSensorCapabilities &ReportDigitalVideoSensorCapabilities::operator=(const ReportDigitalVideoSensorCapabilities &value)
{
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportDigitalVideoSensorCapabilities::operator==(const ReportDigitalVideoSensorCapabilities &value) const
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

bool ReportDigitalVideoSensorCapabilities::operator!=(const ReportDigitalVideoSensorCapabilities &value) const
{
	return !((*this) == value);
}

ReportDigitalVideoSensorCapabilities::ReportDigitalVideoSensorCapabilities()
{
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportDigitalVideoSensorCapabilities::ReportDigitalVideoSensorCapabilities(const ReportDigitalVideoSensorCapabilities &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_AppHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_AppHeader = value.m_AppHeader;
	m_Body = value.m_Body;
}

ReportDigitalVideoSensorCapabilities::~ReportDigitalVideoSensorCapabilities()
{
}


}
