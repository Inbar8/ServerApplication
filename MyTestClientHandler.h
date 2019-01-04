

#ifndef SERVERAPPLICATION_MYTESTCLIENTHANDLER_H
#define SERVERAPPLICATION_MYTESTCLIENTHANDLER_H

#include "IClientHandler.h"
#include "ISolver.h"
#include "ICacheManager.h"

namespace server_side {


    class MyTestClientHandler : public IClientHandler {

        ISolver<std::string, std::string> *Solver;
        ICacheManager *cacheManager;



    public:
        MyTestClientHandler(ISolver<std::string, std::string> *Solver, ICacheManager *cacheManager) : Solver(Solver),
            cacheManager(cacheManager) {}

        void handleClient(std::istream inputStream, std::ostream outputStream) override {
            //TODO




        }

    };


}



#endif //SERVERAPPLICATION_MYTESTCLIENTHANDLER_H
