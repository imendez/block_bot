#include "Util.h"

std::vector<std::string> &Util::split(const std::string &string, char delimiter, std::vector<std::string> &elements) {
    std::stringstream stringStream(string);
    std::string item;
    while(std::getline(stringStream, item, delimiter)) {
        elements.push_back(item);
    }
    return elements;
}

std::vector<std::string> Util::split(const std::string &string, char delimiter) {
    std::vector<std::string> elements;
    split(string, delimiter, elements);
    return elements;
}

Util::Util() {

}
