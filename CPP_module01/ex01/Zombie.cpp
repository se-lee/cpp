#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "<" << name << "> Zombie String constructor called"<<std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << "> Zombie Destructor called" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "< " << this->_name << " >" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}
