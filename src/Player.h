//
// Created by ivan on 12/07/2015.
//

#ifndef BLOCK_BOT_PLAYER_H
#define BLOCK_BOT_PLAYER_H


#include <string>
#include <vector>

class Player {
private:
    std::string name;
    unsigned int rowPoints;
    unsigned int combo;
    std::vector<std::vector<int>> field;
public:
    void setName(std::string);
    void setRowPoints(unsigned int rowPoints);
    void setCombo(unsigned int combo);
    std::vector<std::vector<int>> getField();
    void setField(std::vector<std::vector<int>>);
};


#endif //BLOCK_BOT_PLAYER_H
