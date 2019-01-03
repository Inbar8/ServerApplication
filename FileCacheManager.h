//
// Created by shaked on 1/3/19.
//

#ifndef SERVERAPPLICATION_FILECACHEMANAGER_H
#define SERVERAPPLICATION_FILECACHEMANAGER_H

#include "ICacheManager.h"

namespace server_side{


    class FileCacheManager : public ICacheManager {


    public:

        void tryLoad() override;

        void saveToCache() override;

    };


}





#endif //SERVERAPPLICATION_FILECACHEMANAGER_H
