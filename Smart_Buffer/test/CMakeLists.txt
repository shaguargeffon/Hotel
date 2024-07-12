cmake_minimum_required(VERSION 3.0)

#set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
#set(THREADS_PREFER_PTHREAD_FLAG TRUE)


#project(HOTEL)

find_package(GTest REQUIRED)
#find_package(GMock REQUIRED)



set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Threads REQUIRED)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/EventHandler)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/com)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/frame)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/database)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/server)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../inc)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)


### add_library needs to be added in each file which uses the library.
#add_library(frame_lib frame/frame.cpp)
#add_library(com_lib com/com.cpp)
#add_library(server_lib server/server.cpp)
#add_library(event_handler_lib EventHandler/event_handler.cpp)
#add_library(database_lib database/database.cpp)
#add_library(SmartBufferTest.cpp)


#add_library(smartbuffer_lib src/SmartBuffer.cpp)
add_executable(runTests  SmartBufferTest.cpp ../src/SmartBuffer.cpp)

#find_package(sqlite3)


#target_compile_features(myhotel PUBLIC cxx_std_17)

#target_link_libraries(myhotel PRIVATE execution_manager database_lib com_lib service_lib)

#target_link_libraries(myhotel PRIVATE com_lib frame_handler_lib frame_lib)

target_link_libraries(runTests ${GTEST_LIBRARIES} ${GMOCK_LIBRARIES} pthread)


