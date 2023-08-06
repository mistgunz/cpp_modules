#pragma once

#include <string>
#include <iostream>


class Contact {
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	secret;
	std::string	number;
public:
 	std::string	get_firstname(void) ;
	std::string	get_lastname(void) ;
	std::string	get_nickname(void) ;
	std::string	get_secret(void) ;
	std::string	get_number(void) ;
	
	void	set_contact(std::string data[4]);
};
