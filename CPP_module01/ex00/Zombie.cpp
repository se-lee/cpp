#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
	std::cout << "<" << name << "> is heeeerrrreeee"<<std::endl;
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << "< " << this->_name << " >" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "< " << this->_name << " > is deaaaaaaaad" << std::endl;
}
