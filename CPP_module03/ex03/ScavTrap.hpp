#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
private:
	bool	_guardGate_mode;

protected:
	unsigned int	_Hitpoint;
	unsigned int	_EnergyPoint;
	unsigned int	_AttackDamage;

public:
	ScavTrap();
	ScavTrap(const ScavTrap &scavtrap);
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &scavtrap);

	void	attack(std::string const &target);
	void	guardGate(void);

};

#endif