#ifndef BLOCK_BOT_SETTINGSCOMMAND_H
#define BLOCK_BOT_SETTINGSCOMMAND_H

#include <iostream>
#include <map>
#include <vector>

#include "Command.h"

class SettingsCommand : public Command {
private:
    typedef void (Game:: *set)(std::string);
    std::map<std::string, set> settings_;

public:
    void doStuff();
    explicit SettingsCommand(Game *game);
};


#endif //BLOCK_BOT_SETTINGSCOMMAND_H
