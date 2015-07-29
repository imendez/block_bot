#ifndef BLOCK_BOT_COMMAND_H
#define BLOCK_BOT_COMMAND_H

#include <string>
#include "Game.h"

class Command {
private:
    std::string commandLine;
protected:
    Game *game;
public:
    explicit Command(Game *);

    virtual void doStuff();

    void setCommandLine(const std::string &commandLine);

    const std::string &getCommandLine();

};

#endif //BLOCK_BOT_COMMAND_H
