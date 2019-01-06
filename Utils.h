
#ifndef SERVERAPPLICATION_UTILS_H
#define SERVERAPPLICATION_UTILS_H

#include <fstream>
#include <string>
#include <vector>


class Utils {


public:

    static std::string readAllFileContent(std::string fileName);

    /**
     * appends to a given file name. creates him if he haven't been created yet
     */
    static void appendToFile(std::string fileName, std::string dataToAppend);

    static const std::vector<std::string> explode(std::string &s, const char &c);

};


#endif //SERVERAPPLICATION_UTILS_H
