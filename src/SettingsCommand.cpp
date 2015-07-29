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
    settings_["time_bank"] = &game->setTimeBank;
    settings_["time_per_move"] = &game->setTimePerMove;
    settings_["player_names"] = &game->setPlayerNames;
    settings_["your_bot"] = &game->setBotName;
    settings_["field_width"] = &game->setFieldWidth;
    settings_["field_height"] = &game->setFieldHeight;
}
