//
// Created by ivan on 12/07/2015.
//

#ifndef BLOCK_BOT_UPDATECOMMAND_H
#define BLOCK_BOT_UPDATECOMMAND_H


#include <map>
#include "Command.h"

class UpdateCommand : public Command {
private:
    typedef void (Game:: *set)(std::string);
    std::map<std::string, set>  commands_;
public:
    void doStuff();
    explicit UpdateCommand(Game *game);
};


#endif //BLOCK_BOT_UPDATECOMMAND_H
