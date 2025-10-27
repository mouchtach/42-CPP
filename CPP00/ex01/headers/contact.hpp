#ifndef CONTACT
#define CONTACT

#include <string>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string darkest_secret;

public:
	void set_firstname(std::string input);
	void set_lastname(std::string input);
	void set_nickname(std::string input);
	void set_phonenumber(std::string input);
	void set_secret(std::string input);
	std::string get_firstname()const;
	std::string get_lastname()const;
	std::string get_nickname()const;
	std::string get_phonenumber()const;
	std::string get_secret()const;
};
#endif
