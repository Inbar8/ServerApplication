cmake_minimum_required(VERSION 3.12)
project(ServerApplication)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread -lpthread")

add_executable(ServerApplication IServer.h MySerialServer.cpp
        MySerialServer.h IClientHandler.h MyTestClientHandler.h ISolver.h ICacheManager.h
        FileCacheManager.cpp FileCacheManager.h Searches/BFS.cpp Searches/BFS.h Searches/MyBFS.cpp
        Searches/MyBFS.h StringReverser.h TcpServer.cpp TcpServer.h Main.cpp Main.h main.cpp)