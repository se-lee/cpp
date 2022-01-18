#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "<" << name << "> Zombie String constructor called"<<std::endl;
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << "> Zombie Destructor called" << std::endl;
}
