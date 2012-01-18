

#ifndef GLOBALWAYPOINTLISTDRIVERSERVICE_H
#define GLOBALWAYPOINTLISTDRIVERSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "urn_jaus_jss_core_Transport_1_0/TransportService.h"
#include "urn_jaus_jss_core_Events_1_0/EventsService.h"
#include "urn_jaus_jss_core_AccessControl_1_0/AccessControlService.h"
#include "urn_jaus_jss_core_Management_1_0/ManagementService.h"
#include "urn_jaus_jss_mobility_ListManager_1_0/ListManagerService.h"
#include "GlobalWaypointListDriver_ReceiveFSM.h"
#include "GlobalWaypointListDriver_SendFSM.h"


namespace urn_jaus_jss_mobility_GlobalWaypointListDriver_1_0
{
	
class DllExport GlobalWaypointListDriverService : public JTS::Service
{
public:
	GlobalWaypointListDriverService( JTS::JausRouter* jausRouter , urn_jaus_jss_core_Transport_1_0::TransportService* pTransportService, urn_jaus_jss_core_Events_1_0::EventsService* pEventsService, urn_jaus_jss_core_AccessControl_1_0::AccessControlService* pAccessControlService, urn_jaus_jss_core_Management_1_0::ManagementService* pManagementService, urn_jaus_jss_mobility_ListManager_1_0::ListManagerService* pListManagerService);
	virtual ~GlobalWaypointListDriverService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	GlobalWaypointListDriver_ReceiveFSM* pGlobalWaypointListDriver_ReceiveFSM;
	GlobalWaypointListDriver_SendFSM* pGlobalWaypointListDriver_SendFSM;
	


	
protected:
	virtual void run();

};

};

#endif // GLOBALWAYPOINTLISTDRIVERSERVICE_H
