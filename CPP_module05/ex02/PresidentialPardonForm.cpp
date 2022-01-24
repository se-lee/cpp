#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential_Pardon", 25, 5)
{
	std::cout << "Presidential Default constructor called" << std::endl;
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
	*this = source;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)
{
/*

Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.

*/
}


