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
	DiamondTrap c("C");
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	b.attack("C");
	c.takeDamage(b.getAttackDamage());
	c.beRepaired(10);
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	a.highFivesGuys();
	b.highFivesGuys();
	c.highFivesGuys();
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	a.guardGate();
	b.guardGate();
	c.guardGate();
	std::cout << std::endl;
	std::cout << "=========================================" << std::endl;

	return (0);
}