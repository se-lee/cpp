#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string		_Name();
		int				_Hitpoint(int point);
		int				_EnergyPoint(int point);
		unsigned int	_AttackDamage(unsigned int damage);

	public:
		ClapTrap();
		ClapTrap(std::string str);
		~ClapTrap();
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif