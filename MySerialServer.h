
#ifndef SERVERAPPLICATION_MYSERIALSERVER_H
#define SERVERAPPLICATION_MYSERIALSERVER_H

#include <thread>
#include "IServer.h"

namespace server_side{

    class MySerialServer : public IServer  {

        bool* keepRunning;
        std::thread serverThread;

    public:

        MySerialServer();

        void open(int port, IClientHandler *clientHandler) override;

        void stop() override;

    };



}



#endif //SERVERAPPLICATION_MYSERIALSERVER_H
