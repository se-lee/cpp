#include "Zombie.hpp"

Zombie::Zombie()
{
}

/*
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "< " << this->_name << " > appeared (ahhhhh)" << std::endl;  
}*/
// default constructor じゃないからCompile errorでた。からDefault constructor作った

Zombie::~Zombie(void)
{
	std::cout << "< " << this->_name << " > is deaaaad" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "< " << this->_name << " >" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}
