#include "Zombie.hpp"

int	main()
{
	int	N = 20;
	Zombie	*zombies = zombieHorde(N, "Zzz");
	int	i;

	i = 0;
	while (i < N)
	{
		zombies[i].announce();
		i++;
	}
	delete []zombies;
	return (0);
}

