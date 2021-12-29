#include "Zombie.hpp"

//この関数はZombieのクラス外だから_nameにアクセスできない

Zombie	*zombieHorde( int N, std::string name )
{
	int		i;
	Zombie	*zombies;

	zombies = new Zombie[N];
	
	i = 0;
	while (i < N)
	{
		std::string number = std::to_string(i); 
			//C++ 11 ? am i allowed to use this
		zombies[i].set_name(name + "[" + number + "]");
		i++;
	}
	return (zombies);
}
