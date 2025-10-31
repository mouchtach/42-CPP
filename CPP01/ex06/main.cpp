#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Usage: ./harlFilter <level>\n";
        return 1;
    }
    Harl harl;
    std::string level = argv[1];
    harl.complain(level);
    return 0;
}
