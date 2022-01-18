#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


class FragTrap: virtual public ClapTrap
{
	private:

	protected:

	public:
		FragTrap();
		FragTrap(const FragTrap &fragtrap);
		FragTrap(std::string name);
		~FragTrap();

		FragTrap &operator=(const FragTrap &fragtrap);

		void	highFivesGuys(void);

};

#endif