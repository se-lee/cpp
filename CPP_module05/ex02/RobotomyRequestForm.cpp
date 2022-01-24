#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy_Request", 72, 45)
{
	std::cout << "Robotomy Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &source)
{
	*this = source;
	std::cout << "Robotomy Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &source)
{
	*this = source;
	return (*this);
}


void	RobotomyRequestForm::execute(Bureaucrat const &executor)
{

/*
Makes some drilling noises. 
Then, informs that <target> has been robotomized
successfully 50% of the time. 
Otherwise, informs that the robotomy failed

*/
}


