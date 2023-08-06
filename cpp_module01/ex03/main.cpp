#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	{
		Weapon  club = Weapon("ultra great sword");

		HumanA bob("guss", club);
		bob.attack();
		club.setType("Knife");
		bob.attack();
	}
	{
		Weapon  club = Weapon("rusty Axe");

		HumanB jim("jill");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Knife");
		jim.attack();
	}
	return 0;
}