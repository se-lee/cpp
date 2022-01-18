#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "<" << this->_name << "> Zombie String constructor called"<<std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << "> Zombie Destructor called" << std::endl;
}
