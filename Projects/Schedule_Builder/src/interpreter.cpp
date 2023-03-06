//
// Created by mohan on 3/6/2023.
//

#include "interpreter.h"
#include <iostream>
#include <vector>

namespace core
{
    bool strcmp(const std::string &str0, const std::string &str1);

    int helpCommand();
    int quitCommand();
    int displayCommand();
    int setCommand(std::vector<std::string> tokens);
    int saveCommand();  // TODO: Finalize arguments
    int loadCommand();  // TODO: Finalize arguments


    int interpreter(std::vector<std::string> tokens)
    {
        if(tokens.empty())
        {
            return -1; // TODO: INVALID COMMAND ERROR
        }

        std::string command = tokens[0]; // Command name

        if (strcmp(command, "help"))
            return helpCommand();
        else if (strcmp(command, "quit") || strcmp(command, "exit"))
            return quitCommand();
        else if (strcmp(command, "display"))
            return displayCommand();
        else if (strcmp(command, "set"))
            return setCommand(tokens);
        else if (strcmp(command, "save"))
            return saveCommand();
        else if (strcmp(command, "load"))
            return loadCommand();

    }

    bool strcmp(const std::string &str0, const std::string &str1)
    {
        unsigned int size = str0.size();
        if (size != str1.size())
            return false;

        for (unsigned int i = 0; i < size; i++)
            if(toupper(str0[i]) != toupper(str1[i]))
                return false;
        return true;
    }
} // core