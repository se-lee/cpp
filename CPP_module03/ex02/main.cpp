#include "FragTrap.hpp"

int main()
{
	FragTrap a("A");
	FragTrap b("B");
	std::cout << "=========================================" << std::endl;
	a.attack(b.getName());
	std::cout << "=========================================" << std::endl;
	b.highFivesGuys();
	std::cout << "=========================================" << std::endl;

	return (0);
}