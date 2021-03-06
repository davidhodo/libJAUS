Project (jts_common)

# add compiler flag for tinyxml compilation
ADD_DEFINITIONS(-DTIXML_USE_STL) # tell tinyxml to use the STL

SET(COMMONLIB_SRCS
    InternalEvents/InternalEventHandler.cpp 
    Service.cpp 
    SimpleThread.cpp 
    EventReceiver.cpp
    Transport/Address.cpp 
    Transport/JausAddress.cpp 
    Transport/JausTransport.cpp 
    jFixedLengthString.cpp
    Transport/JuniorAPI.cpp
    Transport/JrSockets.cpp
    Transport/JuniorMgr.cpp
    Transport/JuniorRTE.cpp
    Transport/OS.cpp
    Transport/JrLogger.cpp
    Transport/XmlConfig.cpp
    Transport/JUDPTransport.cpp
    Transport/JUDPTransportLB.cpp
    Transport/JSerial.cpp
    Transport/ChecksumCRC.cpp
    Transport/TCPConnection.cpp
    Transport/JTCPTransport.cpp
    Transport/tinyxml/tinyxml.cpp
    Transport/tinyxml/tinyxmlerror.cpp
    Transport/tinyxml/tinyxmlparser.cpp
    InternalEvents/Send_1_0.cpp
    InternalEvents/Receive_1_0.cpp
    InternalEvents/Send_1_1.cpp
    InternalEvents/Receive_1_1.cpp    
)

SET(COMMONLIB_HEADERS
    ../../include/jts_common/InternalEvents/InternalEventHandler.h 
    ../../include/jts_common/Service.h 
    ../../include/jts_common/SimpleThread.h 
    ../../include/jts_common/EventReceiver.h
    ../../include/jts_common/Transport/Address.h 
    ../../include/jts_common/Transport/JausAddress.h 
    ../../include/jts_common/Transport/JausTransport.h 
    ../../include/jts_common/jFixedLengthString.h
    ../../include/jts_common/Transport/JuniorAPI.h
    ../../include/jts_common/Transport/JrSockets.h
    ../../include/jts_common/Transport/JuniorMgr.h
    ../../include/jts_common/Transport/OS.h
    ../../include/jts_common/Transport/JrLogger.h
    ../../include/jts_common/Transport/XmlConfig.h
    ../../include/jts_common/Transport/JUDPTransport.h
    ../../include/jts_common/Transport/JUDPTransportLB.h
    ../../include/jts_common/Transport/JSerial.h
    ../../include/jts_common/Transport/ChecksumCRC.h
    ../../include/jts_common/Transport/TCPConnection.h
    ../../include/jts_common/Transport/JTCPTransport.h
    ../../include/jts_common/InternalEvents/Send_1_0.h
    ../../include/jts_common/InternalEvents/Receive_1_0.h
    ../../include/jts_common/InternalEvents/Send_1_1.h
    ../../include/jts_common/InternalEvents/Receive_1_1.h    
)

# Build static library
ADD_LIBRARY(JAUS_common ${COMMONLIB_SRCS})

## Setup installation 
# Configure make install
IF(NOT CMAKE_INSTALL_PREFIX)
SET(CMAKE_INSTALL_PREFIX /usr/local)
ENDIF(NOT CMAKE_INSTALL_PREFIX)

# install headers
INSTALL( FILES ${COMMONLIB_HEADERS} DESTINATION ${CMAKE_INSTALL_PREFIX}/include/jts_common)

#install libraries
INSTALL(TARGETS JAUS_common
RUNTIME DESTINATION bin
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib
)

IF(NOT CMAKE_FIND_INSTALL_PATH)
set(CMAKE_FIND_INSTALL_PATH ${CMAKE_ROOT})
ENDIF(NOT CMAKE_FIND_INSTALL_PATH)

INSTALL(FILES ../../Findjaus.cmake DESTINATION ${CMAKE_FIND_INSTALL_PATH}/Modules/)

ADD_CUSTOM_TARGET(uninstall @echo uninstall package)

IF (UNIX)
ADD_CUSTOM_COMMAND(
COMMENT "uninstall package"
COMMAND xargs ARGS rm < install_manifest.txt

TARGET  uninstall
)
ELSE(UNIX)
ADD_CUSTOM_COMMAND(
COMMENT "uninstall only implemented in unix"
TARGET  uninstall
)
ENDIF(UNIX)
