//
// Created by ivan on 12/07/2015.
//

#ifndef BLOCK_BOT_ACTIONCOMMAND_H
#define BLOCK_BOT_ACTIONCOMMAND_H


#include "Command.h"

class ActionCommand : public Command {
    void doStuff();

public:
    explicit ActionCommand(Game *game);
};


#endif //BLOCK_BOT_ACTIONCOMMAND_H
