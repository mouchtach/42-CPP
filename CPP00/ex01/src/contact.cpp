#include "../headers/contact.hpp"

void Contact::set_firstname(std::string input){first_name = input;}
void Contact::set_lastname(std::string input){last_name = input;}
void Contact::set_nickname(std::string input){nickname = input;}
void Contact::set_phonenumber(std::string input){phone_number = input;}
void Contact::set_secret(std::string input){darkest_secret = input;}

std::string Contact::get_firstname()const{return first_name;}
std::string Contact::get_lastname()const{return last_name;}
std::string Contact::get_nickname()const{return nickname;}
std::string Contact::get_phonenumber()const{return phone_number;}
std::string Contact::get_secret()const{return darkest_secret;}
