#include "Zombie.hpp"

int		main()
{
	Zombie	zombie = Zombie("Zombie1");
	Zombie	zombie2 = Zombie("Zombie2");

	Zombie	*zombiePtr = new Zombie("new_zombie");

	zombie.announce();
	zombie2.announce();
	zombiePtr->announce();
	
	delete zombiePtr;

	return (0);
}
