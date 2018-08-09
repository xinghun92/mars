cmake_minimum_required (VERSION 2.8)

project (mars)

set(CMAKE_CXX_FLAGS "-Os -std=c++11 -frtti -fPIC")
set(CMAKE_C_FLAGS "-fPIC")

include_directories(./ mars/ mars/comm/)

file(GLOB LOG_SRC "mars/log/src/*.cc")
file(GLOB CRYPT_SRC "mars/log/crypt/*.cc")
file(GLOB ECC_SRC "mars/log/crypt/micro-ecc-master/*.c")
file(GLOB COMMON_SRC_CC "mars/comm/*.cc")
file(GLOB COMMON_SRC_C "mars/comm/*.c")
file(GLOB COMMON_THREAD_C "mars/comm/thread/*.cc")
file(GLOB COMMON_CRYPT_CC "mars/comm/crypt/*.cc")
file(GLOB COMMON_CRYPT_C "mars/comm/crypt/*.c")
file(GLOB COMMON_NETWORK_CC "mars/comm/network/*.c")
file(GLOB COMMON_DNS_RESOLVE_CC "mars/comm/DnsResolve/*.cc")
file(GLOB COMMON_MESSAGE_QUEUE_CC "mars/comm/messagequeue/*.cc")
file(GLOB COMMON_SOCKET_CC "mars/comm/socket/*.cc")
file(GLOB COMMON_SOCKET_C "mars/comm/socket/*.c")
file(GLOB COMMON_COREPATTERN "mars/comm/corepattern/*.cc")
file(GLOB COMMON_COROUTINE "mars/comm/coroutine/*.cc")
file(GLOB COMMON_UNIX_SOCKET_CC "mars/comm/unix/socket/*.cc")
file(GLOB COMMON_DEBUGGER_CC "mars/comm/debugger/*.cc")
file(GLOB COMMON_HTTP_CC "mars/comm/http/*.cc")
file(GLOB COMMON_DND_CC "mars/comm/dns/*.cc")
file(GLOB COMMON_ASSERT_C "mars/comm/assert/*.c")
file(GLOB COMMON_XLOGGER_C "mars/comm/xlogger/*.c")
if(UNIX)
if(NOT APPLE)
file(GLOB COMMON_THREADINFO "mars/comm/jni/xlogger_threadinfo.cc")
else()
file(GLOB COMMON_THREADINFO "mars/comm/objc/xlogger_threadinfo.mm")
endif()
endif()
file(GLOB BOOST_FILESYSTEM "mars/boost/libs/filesystem/src/*.cpp")
file(GLOB BOOST_IOSTREAM "mars/boost/libs/iostreams/src/*.cpp")
file(GLOB BOOST_SYSTEM "mars/boost/libs/system/src/*.cpp")

add_library(xlog ${LOG_SRC} ${CRYPT_SRC} ${ECC_SRC} ${COMMON_SRC_CC}
${COMMON_SRC_CC} ${COMMON_SRC_C} ${COMMON_THREAD_C} ${COMMON_CRYPT_CC}
${COMMON_CRYPT_C}
${COMMON_MESSAGE_QUEUE_CC}
${COMMON_COREPATTERN}
${COMMON_DEBUGGER_CC} ${COMMON_HTTP_CC} ${COMMON_DND_CC} ${COMMON_ASSERT_C}
${COMMON_XLOGGER_C} ${COMMON_THREADINFO} ${BOOST_FILESYSTEM} ${BOOST_IOSTREAM} ${BOOST_SYSTEM})