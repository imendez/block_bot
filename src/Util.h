#ifndef BLOCK_BOT_UTIL_H
#define BLOCK_BOT_UTIL_H

#include <iostream>
#include <vector>
#include <sstream>

class Util {
private:
    Util();
public:

    static std::vector<std::string> &split(const std::string&,char , std::vector<std::string>&);
    static std::vector<std::string> split(const std::string&, char);
};

#endif //BLOCK_BOT_UTIL_H
