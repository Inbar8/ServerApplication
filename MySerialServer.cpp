

#include <thread>
#include "MySerialServer.h"
#include "TcpServer.h"


server_side::MySerialServer::MySerialServer() {

    this->keepRunning = new bool();
    *(this->keepRunning) = true;

}


void server_side::MySerialServer::open(int port, server_side::IClientHandler *clientHandler) {

    int mainSocketId = TcpServer::listenToPort(port);

    serverThread = std::thread([](int mainSocketId,server_side::IClientHandler *clientHandler, bool* keepRunning){

        while (*keepRunning) {

            int clientSocketId = TcpServer::acceptConnection(mainSocketId);

            clientHandler->handleClient(clientSocketId);

            TcpServer::closeSocket(clientSocketId);

        }

        TcpServer::closeSocket(mainSocketId);

    }, mainSocketId, clientHandler, keepRunning);


}


void server_side::MySerialServer::stop() {

    *(this->keepRunning) = false;

    //wait for the thread to end
    serverThread.join();
    delete this->keepRunning;


}


