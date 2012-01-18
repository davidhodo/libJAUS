

#ifndef LOCALPOSESENSORCOMPONENT_H
#define LOCALPOSESENSORCOMPONENT_H

#include <vector>
#include "EventReceiver.h"
#include "Transport/JausTransport.h"
#include "InternalEvents/InternalEvent.h"
#include "urn_jaus_jss_core_Transport_1_0/TransportService.h"
#include "urn_jaus_jss_core_Events_1_0/EventsService.h"
#include "urn_jaus_jss_core_AccessControl_1_0/AccessControlService.h"
#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensorService.h"

namespace libJAUS {

class LocalPoseSensorComponent : public JTS::EventReceiver
{
public:
	LocalPoseSensorComponent(unsigned int subsystem, unsigned short node, unsigned short component);
	virtual ~LocalPoseSensorComponent();
	
	void startComponent();
	void shutdownComponent();
	
protected:
	virtual void processInternalEvent(JTS::InternalEvent* ie);
	
	std::vector<JTS::Service*> serviceList;
	JTS::JausRouter* jausRouter;
	
};

};
#endif // LIBJAUSCOMPONENT_H
