#cmake_minimum_required(VERSION 3.12)
#project(ZadClassKcpp)
#
#set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#
#file(GLOB_RECURSE HEADERS CONFIGURE_DEPENDS "include/*.hpp")
#file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "src/*.cpp")
#
#list(REMOVE_ITEM HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/zadania-funkcja-main/ZadMainExample.hpp")
#list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/zadania-funkcja-main/ZadMainExample.cpp")
#
#add_executable(ZadClassKcpp ${SOURCES} ${HEADERS}
#        ../ZadClassKcpp/include/Section.hpp
#        ../ZadClassKcpp/include/Exercise.hpp
#        ../ZadClassKcpp/src/main.cpp
#        ../ZadClassKcpp/src/Exercise.cpp
#        ../ZadClassKcpp/src/Section.cpp
#        ../ZadClassKcpp/include/ZadKccp.hpp
#        ../ZadClassKcpp/src/ZadKccp.cpp
#)
#
#add_executable(
#        ZadMainExample
#        src/zadania-funkcja-main/ZadMainExample.cpp
#        include/zadania-funkcja-main/ZadMainExample.hpp
#)
#
#target_include_directories(ZadClassKcpp PUBLIC include)
#target_include_directories(ZadMainExample PUBLIC include)

cmake_minimum_required(VERSION 3.20)
project(kcpp CXX)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


file(GLOB_RECURSE ZAD_KCPP_HEADERS CONFIGURE_DEPENDS "ZadKcpp/include/*.hpp")
file(GLOB_RECURSE ZAD_KCPP_SOURCES CONFIGURE_DEPENDS "ZadKcpp/src/*.cpp")

list(REMOVE_ITEM ZAD_KCPP_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/ZadKcpp/src/main.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/ZadKcpp/src/zadania-funkcja-main/ZadMainExample.cpp"
)
list(REMOVE_ITEM ZAD_KCPP_HEADERS
        "${CMAKE_CURRENT_SOURCE_DIR}/ZadKcpp/include/zadania-funkcja-main/ZadMainExample.hpp"
)

add_library(ZadKcpp_Lib STATIC ${ZAD_KCPP_SOURCES} ${ZAD_KCPP_HEADERS})
target_include_directories(ZadKcpp_Lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/ZadKcpp/include")

add_executable(ZadKcpp "${CMAKE_CURRENT_SOURCE_DIR}/ZadKcpp/src/main.cpp")
target_link_libraries(ZadKcpp PRIVATE ZadKcpp_Lib)

file(GLOB_RECURSE ZAD_CLASS_KCPP_HEADERS CONFIGURE_DEPENDS "ZadClassKcpp/include/*.hpp")
file(GLOB_RECURSE ZAD_CLASS_KCPP_SOURCES CONFIGURE_DEPENDS "ZadClassKcpp/src/*.cpp")

add_executable(ZadClassKcpp ${ZAD_CLASS_KCPP_SOURCES} ${ZAD_CLASS_KCPP_HEADERS})
target_include_directories(ZadClassKcpp PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/ZadClassKcpp/include")


target_link_libraries(ZadClassKcpp PRIVATE ZadKcpp_Lib)
add_executable(ZadMainExample
        "${CMAKE_CURRENT_SOURCE_DIR}/ZadKcpp/src/zadania-funkcja-main/ZadMainExample.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/ZadKcpp/include/zadania-funkcja-main/ZadMainExample.hpp"
)
target_include_directories(ZadMainExample PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/ZadKcpp/include")

