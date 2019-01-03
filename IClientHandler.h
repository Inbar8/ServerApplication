//
// Created by shaked on 1/3/19.
//

#ifndef SERVERAPPLICATION_CLIENTHANDLER_H
#define SERVERAPPLICATION_CLIENTHANDLER_H

#include <iostream>

namespace server_side{



    class IClientHandler {

    public:

        virtual void handleClient(std::istream inputStream, std::ostream outputStream) = 0;

    };




}




#endif //SERVERAPPLICATION_CLIENTHANDLER_H
