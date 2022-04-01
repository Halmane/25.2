#include <iostream>
#include "computer.h"

struct commands
{
    std::string exit = "exit";
    std::string load = "load";
    std::string save = "save";
    std::string sum = "sum";
    std::string input = "input";
    std::string display = "display";
};

int main()
{
    commands commands;
    std::string command;
    while (command != commands.exit)
    {
        std::cout << "Enter command:";
        std::cin >> command;
        if (command == commands.exit)
        {
            return 0;
        }
        else if (command == commands.load)
        {
            load();
        }
        else if (command == commands.save)
        {
            save();
        }
        else if (command == commands.sum)
        {
            computer();
        }
        else if (command == commands.input)
        {
            write();
        }
        else if (command == commands.display)
        {
            read();
        }
    }
}

