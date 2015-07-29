cmake_minimum_required(VERSION 3.2)
project(block_bot)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

set(SOURCE_FILES src/main.cpp)
add_executable(block_bot ${SOURCE_FILES} src/Util.cpp src/Util.h src/CommandFactory.cpp src/CommandFactory.h src/Command.cpp src/Command.h src/SettingsCommand.cpp src/SettingsCommand.h src/ActionCommand.cpp src/ActionCommand.h src/UpdateCommand.cpp src/UpdateCommand.h src/Game.cpp src/Game.h src/Player.cpp src/Player.h)