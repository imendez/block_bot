#include <iostream>
#include "Util.h"
#include "CommandFactory.h"

int main() {
    Game *game = new Game();
    for(std::string line; std::getline(std::cin, line);) {
        if (line.empty()) {
            continue;
        }
        CommandFactory factory = CommandFactory(game);
        Command* command = factory.getCommand(line);
        command->doStuff();
    }
    delete game;
    return 0;
}