//
// Created by ivan on 12/07/2015.
//

#include "Player.h"

void Player::setName(std::string name) {
    Player::name = name;
}

void Player::setRowPoints(unsigned int rowPoints) {
    Player::rowPoints = rowPoints;
}

void Player::setCombo(unsigned int combo) {
    Player::combo = combo;
}

std::vector<std::vector<int>> Player::getField() {
    return field;
}

void Player::setField(std::vector<std::vector<int>> field) {
    Player::field = field;
}
