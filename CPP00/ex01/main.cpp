#include "headers/main.hpp"
#include "headers/colors.hpp"
#include <iostream>

int	main()
{
	std::string line;
	Phonebook phone;
	phone.set_index(0);

	welcom();
	while(1)
	{
		if(std::cin.eof())
			break;
		qust();
		getline(std::cin, line);
		if(std::cin.eof())
			break;
		if(unpaces(line)) {
			continue;
		}
		if(line == "ADD")
			add_func(phone);
		else if(line == "SEARCH")
			phone.Search_display();
		else if(line == "EXIT")
		{
			std::cout << BG_RED << "  _-_- Exiting the program... -_-_ " << RESET << std::endl;
			break;
		}
	}
}
