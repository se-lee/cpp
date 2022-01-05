#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	FragTrap(cont FragTrap &fragtrap);
	FragTrap(std::string name);
	~FragTrap();
};

#endif