#include <iostream>
#include "../headers/colors.hpp"

void welcom()
{
	std::cout << BOLD_BLUE  << "-----------------------------------\n" << RESET;
    std::cout << BOLD_WHITE << "       WELCOME ON PHONE BOOK       \n" << RESET;
    std::cout << BOLD_BLUE << "-----------------------------------\n\n" << RESET;
}
void qust()
{
	std::cout << BG_CYAN << "----  What do you want to do ? ----" << RESET << std::endl;
    std::cout << BOLD_GREEN << "   ADD   " << BOLD_WHITE << "|";
	std::cout << BOLD_BLUE << "   SEARCH   "<< BOLD_WHITE << "|";
	std::cout << BOLD_RED << "  EXIT  " << RESET << std::endl;
	std::cout << "       : ";
}
