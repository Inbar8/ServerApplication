//
// Created by shaked on 1/3/19.
//

#ifndef SERVERAPPLICATION_FILECACHEMANAGER_H
#define SERVERAPPLICATION_FILECACHEMANAGER_H

#include <map>
#include "ICacheManager.h"

namespace server_side{


    class FileCacheManager : public ICacheManager {

        //if we want in O(1)
        //std::map<std::string, std::string>
        //load the map at the beginning of each run or something

    public:

        void tryLoad() override;

        void saveToCache() override;

    };


}





#endif //SERVERAPPLICATION_FILECACHEMANAGER_H
