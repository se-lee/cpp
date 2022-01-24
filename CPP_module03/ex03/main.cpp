#include "DiamondTrap.hpp"

int main()
{
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	DiamondTrap	a("A");
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;	
	DiamondTrap b("B");
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	a.whoAmI();
	b.whoAmI();
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	b.attack("A");
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;
	a.attack("B");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	a.beRepaired(10);
	b.beRepaired(20);
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	a.highFivesGuys();
	b.highFivesGuys();
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	a.guardGate();
	b.guardGate();
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;

	return (0);
}