#ifndef PHONEBOOK
#define PHONEBOOK

#include "contact.hpp"

class Phonebook
{
	Contact arry[8];
	int index;

public:
	void	set_index(int i);
	int		get_index();
	void	set_contact(Contact new_contact);
	void	diplay_one(int i);
	void	display_contacts();
	void 	Search_display();
};

#endif
