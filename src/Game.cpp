//
// Created by ivan on 12/07/2015.
//

#include <string>

#include "Game.h"

void Game::setTimeBank(std::string timeBank) {
    Game::timeBank = std::stoul(timeBank);
}

void Game::setTimePerMove(std::string timePerMove) {
    Game::timePerMove = std::stoul(timePerMove);
}

void Game::setPlayerNames(std::string players) {
    std::vector<std::string> playerNames = Util::split(players, ',');
    Game::player1.setName(playerNames[0]);
    Game::player2.setName(playerNames[1]);
}

void Game::setBotName(std::string botName) {
    Game::botname = botName;
}

void Game::setFieldWidth(std::string width) {
    Game::fieldWidth = std::stoul(width);
    createField();
}

void Game::setFieldHeight(std::string height) {
    Game::fieldHeight = std::stoul(height);
}

void Game::setRound(std::string round) {
    Game::round = std::stoul(round);
}

void Game::setCurrentPiece(std::string currentPiece) {
    Game::currentPiece = currentPiece.at(0);
}

void Game::setNextPiece(std::string nextPiece) {
    Game::nextPiece = nextPiece.at(0);
}

void Game::setCurrentPiecePosition(std::string currentPosition) {
    std::vector<std::string> position = Util::split(currentPosition, ',');
    Game::currentPiecePosition[0] = std::stoi(position[0]);
    Game::currentPiecePosition[0] = std::stoi(position[1]);
}

void Game::setPlayer1RowPoints(std::string rowPoints) {
    Game::player1.setRowPoints(std::stoul(rowPoints));
}

void Game::setPlayer1Combo(std::string combo) {
    Game::player1.setCombo(std::stoul(combo));
}

void Game::setPlayer1Field(std::string field) {
    std::vector<std::vector<int>> fieldVector = Game::player1.getField();
    fillVector(field, fieldVector);
    Game::player1.setField(fieldVector);
}

void Game::setPlayer2RowPoints(std::string rowPoints) {
    Game::player1.setRowPoints(std::stoul(rowPoints));
}

void Game::setPlayer2Combo(std::string combo) {
    Game::player1.setCombo(std::stoul(combo));
}

void Game::setPlayer2Field(std::string field) {
    std::vector<std::vector<int>> fieldVector = Game::player2.getField();
    fillVector(field, fieldVector);
    Game::player2.setField(fieldVector);
}

void Game::fillVector(std::string &field, std::vector<std::vector<int>> &fieldVector) {
    std::vector<std::string> rows = Util::split(field, ';');
    for (int i = 0; i < rows.size(); ++i) {
        std::vector<std::string> cols = Util::split(rows[i], ',');
        for (int j = 0; j < cols.size(); ++j) {
            fieldVector[i][j] = stoi(cols[j]);
        }
    }
}

Game::Game() {
    createField();
}

void Game::createField() {
    std::vector<std::vector<int>> fieldVector;
    fieldVector.resize(Game::fieldHeight);
    for (int i = 0; i < Game::fieldHeight; ++i) {
        fieldVector[i].resize(Game::fieldWidth);
    }
    Game::player1.setField(fieldVector);
    Game::player2.setField(fieldVector);
}
