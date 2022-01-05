#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
private:
	bool	guardGate_mode;

public:
	ScavTrap();
	ScavTrap(const ScavTrap &scavtrap);
	ScavTrap(std::string name);
	~ScavTrap();

	void	guardGate(void);

};

#endif