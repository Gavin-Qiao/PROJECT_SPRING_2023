//
//TODO: Calendar meta-structure, events module
//
#include <iostream>
#include <vector>
#include <sstream>

#include "interpreter.h"

namespace core
{
    std::string getCommandFromTUI()
    {
        std::string temp;
        std::getline(std::cin, temp);
        return temp;
    }

    void parser(const std::string& command, std::vector<std::string> &parsedCommand)
    {
        std::stringstream commandStream(command);
        std::string temp;
        while(std::getline(commandStream, temp, ' '))
        {
            parsedCommand.push_back(temp);
        }
    }

    void shellTUI()
    {
        std::cout << "Welcome to MySchedule Builder" << std::endl;
        while(1)
        {
            std::cout << "\n$" << std::endl;        // Prompt cursor
            std::string command;                    // Command buffer
            std::vector<std::string> parsedCommand; // Command tokens

            command = getCommandFromTUI();          // Read command from TUI
            parser(command, parsedCommand);      // Tokenize command

            int errCode = interpreter(parsedCommand);

            // TODO: Deal with errCode
            if (errCode == -1)
            {

            }
        }
    }

    int main()
    {
        //shellTUI();


    }
}


