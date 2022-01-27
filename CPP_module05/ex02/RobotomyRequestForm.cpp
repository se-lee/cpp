#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy_Request", 72, 45)
{
	this->_target = "Unknown";
	std::cout << "Robotomy Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy_Request", 75, 45)
{
	this->_target = target;
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
	this->_target = source._target;
	return (*this);
}

std::string		RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	else
	{
		std::srand(std::time(nullptr));
		int i = std::rand() % 2;
		switch (i)
		{
			case 0:
				std::cout << "(LOUD DRILLING NOISES) [" << this->_target << "] has been robotized"<< std::endl;
				break ;
			case 1:
				std::cout << "Oh No! robotization failed" << std::endl;
				break ;
		}
	}
}


