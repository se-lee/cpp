#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
	std::cout << "constructor test: " << name << std::endl;
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is deaaaaaaaad" << std::endl;
}
