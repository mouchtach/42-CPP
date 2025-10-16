
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

void	unpaces(std::string &line)
{
	size_t start = 0;
	size_t end = line.length();
	for (; std::isspace(line[start]); start++);
	for (; std::isspace(line[--end]););
	line = line.substr(start, end - start + 1);
}

bool is_numbers(std::string input)
{
	int i = 0;
	while(input[i])
	{
		if(!std::isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}

void	Phonebook::diplay_one(int i)
{
	std::cout << "Index choise = " << i + 1 << std::endl;
	std::cout << BLUE << "- First name     : " << RESET << arry[i].get_firstname() << std::endl;
	std::cout << BLUE << "- Last name      : " << RESET << arry[i].get_lastname() << std::endl;
	std::cout << BLUE << "- Nick name      : " << RESET << arry[i].get_nickname() << std::endl;
	std::cout << BLUE << "- Phone number   : " << RESET << arry[i].get_phonenumber() << std::endl;
	std::cout << BLUE << "- Darkest_secret : " << RESET << arry[i].get_secret() << std::endl;
}

std::string get_iput(std::string prompt, bool number)
{
	std::string input;
	int i = 3;

	while(i--)
	{
		std::cout <<  BLUE  << prompt << RESET;
		getline(std::cin, input);
		if(std::cin.eof())
			return "";
		unpaces(input);
		if (input.find('\t') != std::string::npos) {
			std::cout << RED << "No Tabs palizz ):" << RESET << std::endl;
			if(i == 0)
				return "";
		}
		if(input.empty())
		{
			std::cout << RED << "Input cannot be empty. Please try again." << RESET << std::endl;
			if(i == 0)
				return "";
		}
		else if(number && !is_numbers(input))
		{
			std::cout << RED << "Input Not digit. Please try again." << RESET << std::endl;
			if(i == 0)
				return "";
		}
		else
			break;
	}
	return input;
}


void	add_func(Phonebook &phone)
{
	Contact new_contact;
	std::string input;

	input = get_iput("    ----- First name     : ", false);
	if (input.empty())
		return ;
	new_contact.set_firstname(input);
	input = get_iput("    ----- Last name      : ", false);
	if (input.empty())
		return ;
	new_contact.set_lastname(input);
	input = get_iput("    ----- Nickname       : ", false);
	if (input.empty())
		return ;
	new_contact.set_nickname(input);
	input = get_iput("    ----- Phone number   : ", true);
	if (input.empty())
		return ;
	new_contact.set_phonenumber(input);
	input = get_iput("    ----- darkest_secret : ", false);
	if (input.empty())
		return ;
	new_contact.set_secret(input);
	phone.set_contact(new_contact);
}

void display_10char(std::string str)
{
	if (str.length() > 10)
	{
		std::cout << std::setw(9) << str.substr(0, 9) << "." << "|";
	}
	else
	{
		std::cout << std::setw(10)  << str << "|";
	}
}

void Phonebook::Search_display()
{
	if(index == 0)
	{
		std::cout << "Phonebook is empty " << std::endl;
		return;
	}
	std::cout << "--------------------------------------------\n";
	std::cout << CYAN << std::setw(10) << "index" << RESET
			<< "|" << GREEN << std::setw(10) << "first name" << RESET
			<< "|" << YELLOW << std::setw(10) << "last name" << RESET
			<< "|" << RED << std::setw(10) << "nickname " << RESET << "|\n";
	std::cout << "--------------------------------------------\n";

	int i = 0;
	while(i < index && i < 8)
	{
		std::cout << std::setw(14) << BLUE << (i + 1) << RESET << "|";
		display_10char(arry[i].get_firstname());
		display_10char(arry[i].get_lastname());
		display_10char(arry[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << "--------------------------------------------\n";
	int in;
	i = 3;
	while (i--)
	{
		std::cout << BOLD_YELLOW << "choose index you want : " << RESET;
		std::cin >> in;
		if(std::cin.eof())
			return ;
		if(std::cin.fail() || in < 1 || in > 8 || in > index)
		{
			std::cout << RED << "\" Option faild \"" << RESET << " please choise number < 1 .. " << index << " >\n";
			std::cout << "try (" << i << ")" << std::endl;
			std::cin.clear();
			std::cin.ignore(1000, '\n');
		}
		else {
			std::cin.ignore(1000, '\n');
			diplay_one(in - 1);
			return;
		}
	}
}

