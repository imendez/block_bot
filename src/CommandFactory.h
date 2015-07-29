//
// Created by ivan on 12/07/2015.
//

#ifndef BLOCK_BOT_COMMANDFACTORY_H
#define BLOCK_BOT_COMMANDFACTORY_H


#include <map>

#include "Command.h"
#include "Game.h"

class CommandFactory {
private:
    std::map<std::string, Command *> commands_;
public:
    explicit CommandFactory(Game *);

    ~CommandFactory();

    Command *getCommand(std::string);
};


#endif //BLOCK_BOT_COMMANDFACTORY_H
