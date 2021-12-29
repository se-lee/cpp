#include "Zombie.hpp"

int		main()
{
	Zombie	zombie = Zombie("Just_Zombie on the stack");
	Zombie	*newZombie = new Zombie("New_zombie on the heap");
	Zombie	*zewNombie = newZombie("name");
	/* compile error and I have no idea why */
	
	zombie.announce();
	newZombie->announce();
	zewNombie->announce();
	randomChump("random_zombie");

	delete newZombie;
	delete zewNombie;
	
	return (0);
}
