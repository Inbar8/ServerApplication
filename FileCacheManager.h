//
// Created by shaked on 1/3/19.
//

#ifndef SERVERAPPLICATION_FILECACHEMANAGER_H
#define SERVERAPPLICATION_FILECACHEMANAGER_H


#include <map>


#include "ICacheManager.h"
#include "Utils.h"
#define CACHE "cache_file.txt"
#define SPLIT_CHAR '$'

namespace server_side{


    class FileCacheManager : public ICacheManager {

        //if we want in O(1)
        //std::map<std::string, std::string>
        //load the map at the beginning of each run or something

    public:


        bool isExistsInCache(std::string key) override;

        std::string loadFromCache(std::string key) override;

        void saveToCache(std::string key, std::string solution) override;

    };


}





#endif //SERVERAPPLICATION_FILECACHEMANAGER_H
