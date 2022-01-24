#include "FragTrap.hpp"

int main()
{

	FragTrap	a("a");
	ScavTrap	b("b");

	std::cout << "==============================" << std::endl << std::endl;
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(10);
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.getAttackDamage());
	a.beRepaired(10);
	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;
	b.guardGate();
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl << "==============================" << std::endl;

	return (0);



}
