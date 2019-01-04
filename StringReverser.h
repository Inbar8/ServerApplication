

#ifndef SERVERAPPLICATION_STRINGREVERSER_H
#define SERVERAPPLICATION_STRINGREVERSER_H


#include <string>
#include <bits/stdc++.h>
#include "ISolver.h"

namespace server_side{

    class StringReverser : public ISolver<std::string, std::string>{
    public:
        std::string solve(std::string p) override {
            std::string reversed;
            for (auto c : p){
                reversed = c + reversed;
            }
            return reversed;
        }
    };

}



#endif //SERVERAPPLICATION_STRINGREVERSER_H
