#include <iostream>
#include "Command.h"


void Command::doStuff() {
    std::cerr << "Unknown command: " << getCommandLine() << std::endl;
}

Command::Command(Game *game) {
    Command::game = game;
}

void Command::setCommandLine(const std::string &commandLine) {
    Command::commandLine = commandLine;
}

const std::string &Command::getCommandLine() {
    return commandLine;
}