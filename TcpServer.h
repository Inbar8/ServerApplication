#ifndef SERVERAPPLICATION_TCPSERVER_H
#define SERVERAPPLICATION_TCPSERVER_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>

/**
 * static class for TCP server connection
 */

namespace server_side {

    class TcpServer {


    public:

        //return new main socketId
        static int listenToPort(int serverPort);

        //return new socketId
        static int acceptConnection(int mainSocketId);

        static std::string readLine(int socketId);

        static void writeToClient(int socketId, std::string message);

        static void closeSocket(int socketId);


    };

}

#endif //SERVERAPPLICATION_TCPSERVER_H
