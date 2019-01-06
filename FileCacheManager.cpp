//
// Created by shaked on 1/3/19.
//

#include <fstream>
#include "FileCacheManager.h"


/**
 * cache structure:
 *
 * problem$solution$problem$solution
 *
 * @param key
 * @return
 */
bool server_side::FileCacheManager::isExistsInCache(std::string key) {

    try {
        loadFromCache(key);
        return true;
    }catch (...){
        return false;
    }



//    std::string fileContent = Utils::readAllFileContent(CACHE);
//
//    std::vector<std::string> splited = Utils::explode(fileContent, '$');
//
//    std::map<std::string, std::string> cacheMap;
//
//    auto it = splited.begin();
//
//    for(;it != splited.end(); it += 2 ) {
//        std::string currKey = *it;
//        std::string currValue = *(it + 1);
//        cacheMap.insert(std::pair<std::string, std::string>(currKey, currValue));
//
//    }
//
//    auto valueIterator = cacheMap.find(key);
//
//    //iterator will be the end if key doesnt exists
//    return valueIterator != cacheMap.end();

}

std::string server_side::FileCacheManager::loadFromCache(std::string key) {


    std::string fileContent = Utils::readAllFileContent(CACHE);

    std::vector<std::string> afterSplit = Utils::explode(fileContent, SPLIT_CHAR);

    std::map<std::string, std::string> cacheMap;

    auto it = afterSplit.begin();

    for(;it != afterSplit.end(); it += 2 ) {
        std::string currKey = *it;
        std::string currValue = *(it + 1);
        cacheMap.insert(std::pair<std::string, std::string>(currKey, currValue));

    }

    auto valueIterator = cacheMap.find(key);

    //iterator will be the end if key doesnt exists
    if(valueIterator != cacheMap.end()){
        return valueIterator->second;
    } else {
        throw "key does not exist in cache! check for existence first";
    }

}


void server_side::FileCacheManager::saveToCache(std::string key, std::string solution) {

    std::string dataToSave = key + SPLIT_CHAR + solution + SPLIT_CHAR;

    Utils::appendToFile(CACHE, dataToSave);

}

















