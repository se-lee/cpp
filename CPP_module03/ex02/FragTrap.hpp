#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &fragtrap);
		FragTrap(std::string name);
		~FragTrap();

		FragTrap &operator=(const FragTrap &fragtrap);

		void	highFivesGuys(void);

};

#endif