#include "Zombie.hpp"

int	main()
{
	int	N = 20;
	Zombie	*zombies = zombieHorde(N, "Zom");
	int	i;

	i = 0;
	while (i < N)
	{
		zombies[i].announce();
		i++;
	}
	std::cout << std::endl << "==================================" << std::endl << std::endl;
	delete []zombies;
	return (0);
}

