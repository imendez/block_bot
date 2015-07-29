#include <iostream>
#include <map>
#include <vector>

#include "SettingsCommand.h"

void SettingsCommand::doStuff() {
    std::string line = getCommandLine();
    std::vector<std::string> parts = Util::split(line, ' ');

    if (settings_.find(parts[1]) == settings_.end()) {
        std::cerr << "Unknown setting" << std::endl;
        return;
    }

    (this->game->*settings_[parts[1]])(parts[2]);
}

SettingsCommand::SettingsCommand(Game *game) : Command(game) {
    settings_["timebank"] = &Game::setTimeBank;
    settings_["time_per_move"] = &Game::setTimePerMove;
    settings_["player_names"] = &Game::setPlayerNames;
    settings_["your_bot"] = &Game::setBotName;
    settings_["field_width"] = &Game::setFieldWidth;
    settings_["field_height"] = &Game::setFieldHeight;
}
