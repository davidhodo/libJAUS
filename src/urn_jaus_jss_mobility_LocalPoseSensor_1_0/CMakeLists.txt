Project (LocalPoseSensor)

INCLUDE_DIRECTORIES(../../include)
INCLUDE_DIRECTORIES(../../) # because they somes put the include/ in the include statement. WTF??!!

SET(LOCALPOSESENSORLIB_SRCS
  	InternalEvents/BroadcastGlobal.cpp
	InternalEvents/BroadcastLocal.cpp
	InternalEvents/EventError.cpp
	InternalEvents/EventOccurred.cpp
	InternalEvents/Timeout.cpp
	LocalPoseSensorComponent.cpp
	LocalPoseSensorService.cpp
	LocalPoseSensor_ReceiveFSM.cpp
	LocalPoseSensor_ReceiveFSM_sm.cpp
	LocalPoseSensor_SendFSM.cpp
	LocalPoseSensor_SendFSM_sm.cpp
	Messages/CancelEvent.cpp
	Messages/ConfirmControl.cpp
	Messages/ConfirmEventRequest.cpp
	Messages/CreateEvent.cpp
	Messages/Event.cpp
	Messages/QueryAuthority.cpp
	Messages/QueryControl.cpp
	Messages/QueryEvents.cpp
	Messages/QueryLocalPose.cpp
	Messages/QueryTimeout.cpp
	Messages/RejectControl.cpp
	Messages/RejectEventRequest.cpp
	Messages/ReleaseControl.cpp
	Messages/ReportAuthority.cpp
	Messages/ReportControl.cpp
	Messages/ReportEvents.cpp
	Messages/ReportLocalPose.cpp
	Messages/ReportTimeout.cpp
	Messages/RequestControl.cpp
	Messages/SetAuthority.cpp
	Messages/SetLocalPose.cpp
	Messages/UpdateEvent.cpp
)

SET(LOCALPOSESENSORLIB_HEADERS
  	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/InternalEvents/BroadcastGlobal.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/InternalEvents/BroadcastLocal.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/InternalEvents/EventError.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/InternalEvents/EventOccurred.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/InternalEvents/Timeout.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensorComponent.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensorService.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensor_ReceiveFSM.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensor_ReceiveFSM_sm.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensor_SendFSM.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensor_SendFSM_sm.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/CancelEvent.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/ConfirmControl.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/ConfirmEventRequest.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/CreateEvent.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/Event.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/QueryAuthority.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/QueryControl.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/QueryEvents.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/QueryLocalPose.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/QueryTimeout.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/RejectControl.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/RejectEventRequest.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/ReleaseControl.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/ReportAuthority.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/ReportControl.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/ReportEvents.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/ReportLocalPose.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/ReportTimeout.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/RequestControl.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/SetAuthority.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/SetLocalPose.h
	../../include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/UpdateEvent.h
)

# Build static library
ADD_LIBRARY(JAUS_localPose ${LOCALPOSESENSORLIB_SRCS})

## Setup installation 
# Configure make install
IF(NOT CMAKE_INSTALL_PREFIX)
SET(CMAKE_INSTALL_PREFIX /usr/local)
ENDIF(NOT CMAKE_INSTALL_PREFIX)

# install headers
INSTALL( FILES ${LOCALPOSESENSORLIB_HEADERS} DESTINATION ${CMAKE_INSTALL_PREFIX}/include/urn_jaus_jss_mobility_LocalPoseSensor_1_0)

#install libraries
INSTALL(TARGETS JAUS_localPose
RUNTIME DESTINATION bin
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib
)

