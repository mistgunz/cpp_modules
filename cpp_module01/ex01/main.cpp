#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	std::string zombiesClass;
	int			hordeSize;
	Zombie 		*zombie;

	while (1)
	{
		std::cout << "Enter the size of the zombie's horde: " << std::endl;
		std::cin >> hordeSize;
		if (std::cin.fail() || hordeSize <= 0)
		{
			std::cout << "Invalid input. Try again with a positive integer." << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
		else
			break ;
	}
	std::cout << "Now enter a name for your zombies class: " << std::endl;
	std::cin >> zombiesClass;
	
	zombie = zombieHorde(hordeSize, zombiesClass);
	for (int i = 0; i < hordeSize; i++)
		zombie[i].announce();
	delete [] zombie;
}
