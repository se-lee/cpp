#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy_Request", 72, 45)
{
	std::cout << "Robotomy Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target)
{
	std::cout << "Robotomy parameter constructor called" << std::endl;
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

std::string		RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::robotize()
{
	std::cout << "(LOUD DRILLING NOISES) [" << this->_target << "] has been robotomized"<< std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	if (this->getSigned() == false)
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	else
		this->robotize();
/*
Makes some drilling noises. 
Then, informs that <target> has been robotomized
successfully 50% of the time. 
Otherwise, informs that the robotomy failed
*/
}


