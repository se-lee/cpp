#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("A");
	ClapTrap	b("B");
	ClapTrap	c("C");

	a.attack("b");
	b.takeDamage(10);

	return (0);
}
