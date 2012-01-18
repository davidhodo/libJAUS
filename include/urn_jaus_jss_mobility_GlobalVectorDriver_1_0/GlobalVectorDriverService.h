

#ifndef GLOBALVECTORDRIVERSERVICE_H
#define GLOBALVECTORDRIVERSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_mobility_GlobalVectorDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_GlobalVectorDriver_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "urn_jaus_jss_core_Transport_1_0/TransportService.h"
#include "urn_jaus_jss_core_Events_1_0/EventsService.h"
#include "urn_jaus_jss_core_AccessControl_1_0/AccessControlService.h"
#include "urn_jaus_jss_core_Management_1_0/ManagementService.h"
#include "GlobalVectorDriver_ReceiveFSM.h"
#include "GlobalVectorDriver_SendFSM.h"


namespace urn_jaus_jss_mobility_GlobalVectorDriver_1_0
{
	
class DllExport GlobalVectorDriverService : public JTS::Service
{
public:
	GlobalVectorDriverService( JTS::JausRouter* jausRouter , urn_jaus_jss_core_Transport_1_0::TransportService* pTransportService, urn_jaus_jss_core_Events_1_0::EventsService* pEventsService, urn_jaus_jss_core_AccessControl_1_0::AccessControlService* pAccessControlService, urn_jaus_jss_core_Management_1_0::ManagementService* pManagementService);
	virtual ~GlobalVectorDriverService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	GlobalVectorDriver_ReceiveFSM* pGlobalVectorDriver_ReceiveFSM;
	GlobalVectorDriver_SendFSM* pGlobalVectorDriver_SendFSM;
	


	
protected:
	virtual void run();

};

};

#endif // GLOBALVECTORDRIVERSERVICE_H
