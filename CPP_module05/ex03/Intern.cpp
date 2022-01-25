#include "Intern.hpp"

std::string const	Intern::name_set[3] = 
					{"shrubbery creation",
					"robotomy request",
					"presidential pardon"};

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &intern)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = intern;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl; 
}

Intern	&Intern::operator=(const Intern &intern)
{
	std::cout << "Intern assignment operator" << std::endl;
	(void)intern;
	// *this = intern;
	return (*this);
}

Form	*Intern::makeForm(std::string formName, std::string formTarget)
{
	Form	*ret;
	int	i = 0;

	while (i < 3)
	{
		if (!name_set[i].compare(formName))
			break;
		i++;
	}
	switch (i) 
	{
		case 0:
			ret = new ShrubberyCreationForm(formTarget);
			break ;
		case 1:
			ret = new RobotomyRequestForm(formTarget);
			break ;
		case 2:
			ret = new PresidentialPardonForm(formTarget);
			break ;
		default:
			std::cout << "Invalid form name" << std::endl;
			ret = NULL;
	}
	// if (ret != NULL)
		std::cout << "Intern creates " << formName << std::endl;
	return (ret);
}


