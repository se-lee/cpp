#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_Name;

	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &diamondtrap);
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap &operator=(const DiamondTrap &diamondtrap);
		using	ScavTrap::attack;

		void	whoAmI() const;


};

#endif
