#ifndef URN_JAUS_JSS_MOBILITY_PRIMITIVEDRIVER_1_0_INITIALIZED_H
#define URN_JAUS_JSS_MOBILITY_PRIMITIVEDRIVER_1_0_INITIALIZED_H

#include "JausUtils.h"
#include "InternalEvents/InternalEvent.h"
namespace urn_jaus_jss_mobility_PrimitiveDriver_1_0
{

class DllExport Initialized: public JTS::InternalEvent
{
public:
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	Initialized();
	virtual ~Initialized();
};

}

#endif // URN_JAUS_JSS_MOBILITY_PRIMITIVEDRIVER_1_0_INITIALIZED_H
