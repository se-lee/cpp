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
	std::cout << "Brain Assignation operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	return (*this);
}

void	Brain::setIdeas(std::string idea, int i)
{
	this->_ideas[i] = idea;
}

std::string	&Brain::getIdeas(int i)
{
	return (this->_ideas[i]);
}
