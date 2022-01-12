#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default Constructor" << std::endl;
}
Brain::Brain(const Brain &brain)
{
	*this = brain;
	std::cout << "[Brain] Copy Constructor" << std::endl;
}
Brain::~Brain()
{
	std::cout << "[Brain] Destructor" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain)
{
	
}


