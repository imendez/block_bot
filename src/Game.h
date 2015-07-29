//
// Created by ivan on 12/07/2015.
//

#ifndef BLOCK_BOT_GAME_H
#define BLOCK_BOT_GAME_H

#include <string>

#include "Player.h"
#include "Util.h"

class Game {
private:
    unsigned int timeBank;
    unsigned int timePerMove;

    Player player1;
    Player player2;

    std::string botname;


    unsigned int round;
    char currentPiece;
    int currentPiecePosition[2];
    char nextPiece;

    unsigned int fieldHeight = 20;
    unsigned int fieldWidth = 10;

public:
    Game();

    void setTimeBank(std::string timeBank);

    void setTimePerMove(std::string timePerMove);

    void setPlayerNames(std::string players);

    void setBotName(std::string botName);

    void setFieldWidth(std::string width);

    void setFieldHeight(std::string height);

    void setRound(std::string);

    void setCurrentPiece(std::string);

    void setNextPiece(std::string);

    void setCurrentPiecePosition(std::string);

    void setPlayer1RowPoints(std::string);

    void setPlayer1Combo(std::string);

    void setPlayer1Field(std::string);

    void setPlayer2RowPoints(std::string);

    void setPlayer2Combo(std::string);

    void setPlayer2Field(std::string);

    void createField();

    void fillVector(std::string &field, std::vector<std::vector<int>> &fieldVector);
};


#endif //BLOCK_BOT_GAME_H
