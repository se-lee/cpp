#include "Zombie.hpp"

int		main()
{
	Zombie	zombie = Zombie("Just_Zombie on the stack");
	Zombie	*newZombie = new Zombie("New_zombie on the heap");
	// Zombie	*another_newZombie = newZombie("another_newZombie");
	
	zombie.announce();
	newZombie->announce();
	// another_newZombie->announce();
	randomChump("random_zombie");

	delete newZombie;

	return (0);
}
