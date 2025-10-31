#include "Harl.hpp"
#include <iostream>
#include <string>

void Harl::debug( void ) {
    std::cout << "[DEBUG]\nlove having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do!\n" << std::endl;
}

void Harl::info( void ) {
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void Harl::error( void ) {
    std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain( std::string level ) {

    void (Harl::*functions[])() = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    
    for (size_t i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return;
        }
    } 
    std::cout << "[UNKNOWN LEVEL] No such complaint level." << std::endl;
}