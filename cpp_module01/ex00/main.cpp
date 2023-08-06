#include "Zombie.hpp"



int	main()
{
	Zombie *zombie = newZombie("green");
	randomChump("red");

	zombie->announce();

	delete zombie;
	

	randomChump("Random");
	return (0);
}