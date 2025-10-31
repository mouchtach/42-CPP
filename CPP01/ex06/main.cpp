#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Usage: ./harlFilter <level>\n";
        return 1;
    }

    std::string level = argv[1];
    Harl harl;
    int levelIndex = -1;

    if (level == "DEBUG") 
        levelIndex = 0;
    else if (level == "INFO") 
        levelIndex = 1;
    else if (level == "WARNING") 
        levelIndex = 2;
    else if (level == "ERROR") 
        levelIndex = 3;
    
    switch(levelIndex) {
        case 0: harl.complain("DEBUG");
        case 1: harl.complain("INFO");
        case 2: harl.complain("WARNING");
        case 3: harl.complain("ERROR");
        break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }

    return 0;
}
