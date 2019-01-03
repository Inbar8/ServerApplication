

#include <thread>
#include "MySerialServer.h"


server_side::MySerialServer::MySerialServer() {run = true;}


void server_side::MySerialServer::open(int port, server_side::IClientHandler clientHandler) {

            //TODO open different thread

    while (run) {

        //TODO listen to client at given port
        //TODO open input and output stream with the client and send to handleClient

        clientHandler.handleClient()

    }
            //TODO open different thread


}


void server_side::MySerialServer::stop() {

    this->run = false;

}


