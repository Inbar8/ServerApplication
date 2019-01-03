//
// Created by shaked on 1/3/19.
//

#ifndef SERVERAPPLICATION_ICACHEMANAGER_H
#define SERVERAPPLICATION_ICACHEMANAGER_H

namespace server_side{

    class ICacheManager {

    public:

        //my assumption of methods

        virtual void tryLoad() = 0;

        virtual void saveToCache() = 0;

    };

}




#endif //SERVERAPPLICATION_ICACHEMANAGER_H
