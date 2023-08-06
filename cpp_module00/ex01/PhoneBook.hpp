#pragma once

#include "Contact.hpp"

class PhoneBook {
private:
	Contact	contacts[8];
	int 	size;
	int 	index;
public:
	PhoneBook() : size (0), index (0) {}
	int 	get_size(void) ;
	void	add_contact(std::string data[4]);
	void	display_contact(int i) ;
	void	display_phonebook(void) ;
};
