#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*Zombie_new = new Zombie(name);

	return (Zombie_new);
}

