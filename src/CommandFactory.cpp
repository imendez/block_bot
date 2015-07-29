//
// Created by ivan on 12/07/2015.
//

#include <iostream>
#include "CommandFactory.h"
#include "SettingsCommand.h"
#include "ActionCommand.h"
#include "UpdateCommand.h"
#include "Util.h"

CommandFactory::CommandFactory(Game *game) {
    commands_["action"] = new ActionCommand(game);
    commands_["settings"] = new SettingsCommand(game);
    commands_["update"] = new UpdateCommand(game);
    commands_["unknown"] = new Command(game);
}

CommandFactory::~CommandFactory() {
    delete commands_["action"];
    delete commands_["settings"];
    delete commands_["update"];
    delete commands_["unknown"];
}

Command *CommandFactory::getCommand(std::string command) {
    std::vector<std::string> parts = Util::split(command, ' ');
    if (commands_.find(parts[0]) == commands_.end()) {
        return commands_["unknown"];
    }
    commands_[parts[0]]->setCommandLine(command);
    return commands_[parts[0]];
}