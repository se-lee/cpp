#include "Zombie.hpp"

int		main()
{
	Zombie	zombie = Zombie("Just_Zombie on the stack");
	Zombie	*newZombieHeap = new Zombie("New_zombie on the heap");
	Zombie	*newZombiePtr = newZombie("name");
	/* compile error and I have no idea why */
	
	zombie.announce();
	newZombieHeap->announce();
	newZombiePtr->announce();
	randomChump("random_zombie");

	delete newZombieHeap;
	// delete zewNombie;
	
	return (0);
}
