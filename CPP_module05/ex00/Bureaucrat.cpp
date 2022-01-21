#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("(name)"), _grade(150)
{
	std::cout << "Bureauctrat Default constructor called" << std::endl;
}


Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	std::cout << "Bureauctrat variable constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureau)
{
	std::cout << "Bureauctrat copy constructor called" << std::endl;
	*this = bureau;
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
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}
