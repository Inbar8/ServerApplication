

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

            std::vector<std::string> linesVector;

            std::string curLine;

            while (END != (curLine = TcpServer::readLine(socketID))){
                linesVector.push_back(curLine);
            }

            if (linesVector.size() > 1) throw "input is longer than 1 line";

            std::string reversed = solver->solve(linesVector.at(0));

            TcpServer::writeToClient(socketID, reversed);

        }

    };


}



#endif //SERVERAPPLICATION_MYTESTCLIENTHANDLER_H
