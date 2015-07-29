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
    commands_ = {
            {"game_round",               &Game::setRound},
            {"game_this_piece_type",     &Game::setCurrentPiece},
            {"game_next_piece_type",     &Game::setNextPiece},
            {"game_this_piece_position", &Game::setCurrentPiecePosition},
            {"player1_row_points",       &Game::setPlayer1RowPoints},
            {"player1_combo",            &Game::setPlayer1Combo},
            {"player1_field",            &Game::setPlayer1Field},
            {"player2_row_points",       &Game::setPlayer2RowPoints},
            {"player2_combo",            &Game::setPlayer2Combo},
            {"player2_field",            &Game::setPlayer2Field},
    };
}
