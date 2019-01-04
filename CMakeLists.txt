cmake_minimum_required(VERSION 3.12)
project(ServerApplication)

set(CMAKE_CXX_STANDARD 14)

add_executable(ServerApplication main.cpp IServer.h MySerialServer.cpp
        MySerialServer.h IClientHandler.h MyTestClientHandler.h ISolver.h ICacheManager.h FileCacheManager.cpp FileCacheManager.h Searches/BFS.cpp Searches/BFS.h Searches/MyBFS.cpp Searches/MyBFS.h StringReverser.h)