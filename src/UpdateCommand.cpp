//
// Created by ivan on 12/07/2015.
//

#include "UpdateCommand.h"

void UpdateCommand::doStuff() {
    std::string line = getCommandLine();
    std::vector<std::string> parts = Util::split(line, ' ');

    std::string command = parts[1] + "_" + parts[2];

    if (commands_.find(command) == commands_.end()) {
        std::cerr << "Unknown setting" << std::endl;
        return;
    }
    (this->game->*commands_[command])(parts[3]);
}

UpdateCommand::UpdateCommand(Game *game) : Command(game) {
    commands_["game_round"] = &game->setRound;
    commands_["game_this_piece_type"] = &game->setCurrentPiece;
    commands_["game_next_piece_type"] = &game->setNextPiece;
    commands_["game_this_piece_position"] = &game->setCurrentPiecePosition;
    commands_["player1_row_points"] = &game->setPlayer1RowPoints;
    commands_["player1_combo"] = &game->setPlayer1Combo;
    commands_["player1_field"] = &game->setPlayer1Field;
    commands_["player2_row_points"] = &game->setPlayer2RowPoints;
    commands_["player2_combo"] = &game->setPlayer2Combo;
    commands_["player2_field"] = &game->setPlayer2Field;
}
