#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "< " << this->_name << " > appeared (ahhhhh)" << std::endl;  
}

Zombie::~Zombie(void)
{
	std::cout << "< " << this->_name << " > is deaaaad" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "< " << this->_name << " >" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
