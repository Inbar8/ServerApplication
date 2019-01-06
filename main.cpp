

#include <string>
#include "StringReverser.h"
#include "MySerialServer.h"
#include "FileCacheManager.h"
#include "MyTestClientHandler.h"


int main(int argc, char **argv) {

    if(argc < 1) throw "usage: <executable> <port>";

    int port = std::stoi(argv[0]);

    auto stringSolver = new server_side::StringReverser();
    auto serialServer = new server_side::MySerialServer();
    auto fCacheManager = new server_side::FileCacheManager();
    auto handler = new server_side::MyTestClientHandler(stringSolver, fCacheManager);

    serialServer->open(port, handler);

    return 0;

}