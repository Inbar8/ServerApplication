#ifndef SERVERAPPLICATION_ISERVER_H
#define SERVERAPPLICATION_ISERVER_H

namespace server_side{

    class IServer{

    public:

        virtual void open(int port) = 0;

        virtual void recv() = 0;

        virtual void stop() = 0;



    };



}



#endif //SERVERAPPLICATION_ISERVER_H
