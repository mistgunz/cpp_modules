#include "PhoneBook.hpp"

static int      is_valid_number(std::string number)
{
        int     i;

        i = 0;
        while (number[i])
        {
                if (number[i] == ' ')
                {
                        i++;
                        continue;
                }
                if (number[i] < '0' || number[i] > '9')
                        return (0);
                i++;
        }
        return (1);
}

int valid_data(std::string  data[4])
{
	if(data[0].length() < 1 || data[1].length()<1 || data[2].length()<1
	|| data[3].length()<1 || data[4].length()<1)
		return 0;
	else
		return 1;
}

int main()
{
	PhoneBook	phonebook;
	std::string	data[4];
	std::string	input;
	int 		index;

	while (42)
	{
		std::cout << "\001\033[1;34m\002PhoneBook>>> \001\033[0;0m\002";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "\001\033[1;34m\002\nEnter Contact Information\001\033[0;0m\002" << std::endl;
			std::cout << "First Name: ";
			std::getline(std::cin, data[0]);
			std::cout << "Last Name: ";
			std::getline(std::cin, data[1]);
			std::cout << "NickName: ";
			std::getline(std::cin, data[2]);
			std::cout << "Phone Number: ";
			std::getline(std::cin, data[3]);
			std::cout << "Darkest Secret: ";
			std::getline(std::cin, data[4]);
			if(valid_data(data) && is_valid_number(data[3]))
			{
				phonebook.add_contact(data);
				std::cout << "\001\033[0;32m\002Contact Added Successfully!\001\033[0;32m\002\n" << std::endl;
			}
			else if(!is_valid_number(data[3]))
			{
				std::cout << "Please input a valid number" << std::endl;
			}
			else
			{
				std::cout << "\001\033[0;32m\002empty input erorr \001\033[0;32m\002\n" << std::endl;
			}	
		}
		else if (input == "SEARCH")
		{
			phonebook.display_phonebook();
			std::cout << "\nInsert Index: ";
			std::cin >> index;
			if (std::cin.fail() || index < 0 || index >= phonebook.get_size())
			{
				std::cout << "Invalid Index!\n" << std::endl;
				std::cin.clear();
				std::getline(std::cin, input);
				continue;
			}
			phonebook.display_contact(index);
			std::cin.clear();
			std::getline(std::cin, input);
			continue;
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command\n" << std::endl;
	}
}
