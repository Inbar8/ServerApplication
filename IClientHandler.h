#ifndef SERVERAPPLICATION_CLIENTHANDLER_H
#define SERVERAPPLICATION_CLIENTHANDLER_H

#include <iostream>

namespace server_side{



    class IClientHandler {

    public:

        virtual void handleClient(int socketID) = 0;

    };




}




#endif //SERVERAPPLICATION_CLIENTHANDLER_H
