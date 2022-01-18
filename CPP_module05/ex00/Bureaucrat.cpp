#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(0)
{
	std::cout << "Bureauctrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureauctrat variable constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::string		Bureaucrat::getName()
{
	return (this->_name);
}

int	Bureaucrat::getGrade()
{
	return (this->_grade);
}

std::ostream	&Bureaucrat::operator<<(std::ostream &out)
{
	out << this->getName() << ", bureaucrat grade <" << this->getGrade() << ">" << std::endl; 
	return (out);
}

void	Bureaucrat::incrementGrade()
{
	this->_grade++;	
}

void	Bureaucrat::decrementGrade()
{
	this->_grade--;
}