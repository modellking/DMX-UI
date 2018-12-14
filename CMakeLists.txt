cmake_minimum_required(VERSION 3.12)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

# cross compile to ARM architecture

# boost

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
set(BOOST_ROOT "C:/Program Files (x86)/boost")

find_package(
        Boost 1.68.0
        REQUIRED

        COMPONENTS
        filesystem
        Asio
        Beast
        Regex
)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(progname file1.cxx file2.cxx)
    target_link_libraries(progname ${Boost_LIBRARIES})
endif()

add_executable(
        untitled1
        main.cpp
        DMXInterface/DMXInterface.h
        DMXInterface/ArtNetInterface.cpp DMXInterface/ArtNetInterface.h
        public/Endpoint.h
        public/Direct.cpp public/Direct.h
)