

#ifndef SERVERAPPLICATION_MAIN_H
#define SERVERAPPLICATION_MAIN_H

#include <string>

namespace boot {


    class Main {

    public:

        int mai(int argc, char **argv){

            if(argc < 1) throw "usage: <executable> <port>";

            int port = std::stoi(argv[0]);



        }



    };

}




#endif //SERVERAPPLICATION_MAIN_H
