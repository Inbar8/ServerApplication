//
// Created by shaked on 1/3/19.
//

#ifndef SERVERAPPLICATION_ICACHEMANAGER_H
#define SERVERAPPLICATION_ICACHEMANAGER_H

#include <string>

namespace server_side {

    class ICacheManager {

    public:

        //my assumption of methods
        virtual bool isExistsInCache(std::string key) = 0;

        virtual std::string loadFromCache(std::string key) = 0;

        virtual void saveToCache(std::string key, std::string solution) = 0;

    };

}




#endif //SERVERAPPLICATION_ICACHEMANAGER_H
