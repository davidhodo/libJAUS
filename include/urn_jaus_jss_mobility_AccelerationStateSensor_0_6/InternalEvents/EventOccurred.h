#ifndef URN_JAUS_JSS_MOBILITY_ACCELERATIONSTATESENSOR_0_6_EVENTOCCURRED_H
#define URN_JAUS_JSS_MOBILITY_ACCELERATIONSTATESENSOR_0_6_EVENTOCCURRED_H

#include "JausUtils.h"
#include "InternalEvents/InternalEvent.h"
namespace urn_jaus_jss_mobility_AccelerationStateSensor_0_6
{

class DllExport EventOccurred: public JTS::InternalEvent
{
public:
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	EventOccurred();
	virtual ~EventOccurred();
};

}

#endif // URN_JAUS_JSS_MOBILITY_ACCELERATIONSTATESENSOR_0_6_EVENTOCCURRED_H
