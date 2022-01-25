#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential_Pardon", 25, 5)
{
	std::cout << "Presidential Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target)
{
	std::cout << "Presidential parameter constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source)
{
	*this = source;
	std::cout << "Presidential Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &source)
{
	this->_target = source._target;
	return (*this);
}

void	PresidentialPardonForm::pardon()
{
	std::cout << "[" << this->_target << "] has been pardoned by the great Zaphod Beeblebrox" << std::endl;
}


void	PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	if (this->getSigned() == false)
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	else
		this->pardon();
/*

Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.

*/
}


