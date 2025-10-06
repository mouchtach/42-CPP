
#include "../headers/main.hpp"
#include "../headers/colors.hpp"
#include <iostream>
#include <iomanip>

void	Phonebook::set_index(int i){index = i;}
int		Phonebook::get_index(){return index;}
void	Phonebook::set_contact(Contact new_contact){
	arry[index % 8] = new_contact;
	index++;
}

void	Phonebook::diplay_one(int i)
{
	// `i` is now 0-based array index
	std::cout << "Index choise = " << i + 1 << std::endl;
	std::cout << BLUE << "- First name     : " << RESET << arry[i].get_firstname() << std::endl;
	std::cout << BLUE << "- Last name      : " << RESET << arry[i].get_lastname() << std::endl;
	std::cout << BLUE << "- Nick name      : " << RESET << arry[i].get_nickname() << std::endl;
	std::cout << BLUE << "- Phone number   : " << RESET << arry[i].get_phonenumber() << std::endl;
	std::cout << BLUE << "- Darkest_secret : " << RESET << arry[i].get_secret() << std::endl;
}

std::string get_iput(std::string prompt)
{
	std::string input;
	int i = 3;
	while(i--)
	{
		std::cout <<  BLUE  << prompt << RESET;
		getline(std::cin, input);
		if(std::cin.eof())
			return "";
		if(input.empty())
			std::cout << RED << "Input cannot be empty. Please try again." << RESET << std::endl;
		else
			break;
	}
	return input;
}


void	add_func(Phonebook &phone)
{
	Contact new_contact;
	std::string input;

	input = get_iput("    ----- First name     : ");
	if (input.empty())
		return ;
	new_contact.set_firstname(input);
	input = get_iput("    ----- Last name      : ");
	if (input.empty())
		return ;
	new_contact.set_lastname(input);
	input = get_iput("    ----- Nickname       : ");
	if (input.empty())
		return ;
	new_contact.set_nickname(input);
	input = get_iput("    ----- Phone number   : ");
	if (input.empty())
		return ;
	new_contact.set_phonenumber(input);
	input = get_iput("    ----- darkest_secret : ");
	if (input.empty())
		return ;
	new_contact.set_secret(input);
	phone.set_contact(new_contact);
}

void Phonebook::Search_display()
{
	if(index == 0)
	{
		std::cout << "Phonebook is empty " << std::endl;
		return;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << std::setw(10) << CYAN << "index" << RESET
				<< "|" << GREEN << "first name" << RESET
				<< "|" << YELLOW << " last name" << RESET
				<< "|" << RED << "  nickname" << RESET << "\n";
	std::cout << "---------------------------------------------\n";

	int i = 0;
	while(i < index && i < 8)
	{
		std::cout << std::setw(14) << BLUE << i + 1 << RESET << "|"
					<< std::setw(10)  << arry[i].get_firstname() << "|"
					<< std::setw(10)  << arry[i].get_lastname() << "|"
					<< std::setw(10)  << arry[i].get_nickname() << "|\n";
		i++;
	}
	std::cout << "---------------------------------------------\n";
	int chois;
	i = 3;
	while (i--)
	{
		std::cout << BOLD_YELLOW << "choose index you want : " << RESET;
		std::cin >> chois;
		if(std::cin.eof())
			return ;
		if(std::cin.fail() || chois < 1 || chois > index)
		{
			std::cout << RED << "\" Option faild \"" << RESET << " please choise number < 1 .. " << index << " >\n";
			std::cout << "try (" << i << ")" << std::endl;
			std::cin.clear();
			std::cin.ignore(1000, '\n');
		}
		else {
			std::cin.ignore(1000, '\n');
			diplay_one(chois - 1);
			return;
		}
	}
}


int	unpaces(std::string &line)
{
	size_t start = line.find_first_not_of(" \t\n\r");
	size_t end = line.find_last_not_of(" \t\n\r");
	if(start == end)
		return 1;
	line = line.substr(start, end - start + 1);
	return 0;
}
