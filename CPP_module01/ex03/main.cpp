#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		std::cout << "===================================" << std::endl;
		Weapon		club = Weapon("crude spiked club");
		HumanA		bob("bob", club);
		std::cout << "===================================" << std::endl << std::endl;
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		std::cout << std::endl << "===================================" << std::endl;

	}

	{
		std::cout << "===================================" << std::endl;
		Weapon		club = Weapon("crude spiked club");
		HumanB		jim("Jim");
		std::cout << "===================================" << std::endl << std::endl;

		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();

		std::cout << std::endl << "===================================" << std::endl;
	}

}