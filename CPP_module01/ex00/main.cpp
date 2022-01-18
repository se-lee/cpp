#include "Zombie.hpp"

int		main()
{
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	Zombie	zombie = Zombie("Just_Zombie on the stack");
	Zombie	*newZombieHeap = new Zombie("New_zombie on the heap");
	Zombie	*newZombiePtr = newZombie("Zombie_Ptr");
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	zombie.announce();
	newZombieHeap->announce();
	newZombiePtr->announce();
	std::cout << std::endl;	
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;	
	randomChump("random_zombie");
	std::cout << std::endl;	
	std::cout << "=========================================" << std::endl;
	
	delete newZombieHeap;
	delete newZombiePtr;
	
	return (0);
}
