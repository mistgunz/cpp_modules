#include "Contact.hpp"


std::string	Contact::get_firstname() 
{
	return (this->firstname);
}

std::string	Contact::get_lastname() 
{
	return (this->lastname);
}

std::string	Contact::get_nickname() 
{
	return (this->nickname);
}

std::string	Contact::get_secret() 
{
	return (this->secret);
}

std::string	Contact::get_number()
{
	return (this->number);
}


void Contact::set_contact(std::string data[4])
{
	this->firstname = data[0];
	this->lastname = data[1];
	this->nickname = data[2];
	this->number = data[3];
	this->secret = data[4];
}
