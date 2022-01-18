#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	int		i;
	Zombie	*zombies;

	zombies = new Zombie[N];
	
	i = 0;
	while (i < N)
	{
		std::string number = std::to_string(i); 
		zombies[i].set_name(name + "[" + number + "]");
		i++;
	}
	return (zombies);
}
