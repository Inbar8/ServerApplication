

#ifndef SERVERAPPLICATION_MYTESTCLIENTHANDLER_H
#define SERVERAPPLICATION_MYTESTCLIENTHANDLER_H

#include "IClientHandler.h"
#include "ISolver.h"
#include "ICacheManager.h"
#include "TcpServer.h"

#define END "end"

namespace server_side {


    class MyTestClientHandler : public IClientHandler {

        ISolver<std::string, std::string> *solver;
        ICacheManager *cacheManager;



    public:
        MyTestClientHandler(ISolver<std::string, std::string> *Solver, ICacheManager *cacheManager) : solver(Solver),
            cacheManager(cacheManager) {}

        void handleClient(int socketID) override {

            std::string curLine;

            while (END != (curLine = TcpServer::readLine(socketID))){

                std::string reversed;

                if (cacheManager->isExistsInCache(curLine)){
                    reversed = cacheManager->loadFromCache(curLine);
                } else {
                    reversed = solver->solve(curLine);
                    cacheManager->saveToCache(curLine, reversed);
                }

                TcpServer::writeToClient(socketID, reversed);
            }







        }

    };


}



#endif //SERVERAPPLICATION_MYTESTCLIENTHANDLER_H
