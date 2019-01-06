

#ifndef SERVERAPPLICATION_MAIN_H
#define SERVERAPPLICATION_MAIN_H

#include <string>
#include "StringReverser.h"
#include "MySerialServer.h"

namespace boot {


    class Main {

    public:

        int mai(int argc, char **argv){

            if(argc < 1) throw "usage: <executable> <port>";

            int port = std::stoi(argv[0]);

            auto stringSolver = new server_side::StringReverser();
            auto serialServer = new server_side::MySerialServer();
            


            using namespace boot;
        }



    };

}




#endif //SERVERAPPLICATION_MAIN_H
