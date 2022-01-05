#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:

	protected:
		std::string		_Name;
		unsigned int	_Hitpoint;
		unsigned int	_EnergyPoint;
		unsigned int	_AttackDamage;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap(std::string name);
		~ClapTrap();
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif