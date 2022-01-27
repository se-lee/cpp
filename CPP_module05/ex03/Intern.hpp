#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &intern);
		~Intern();

		Intern &operator=(const Intern &intern);
		Form *makeForm(std::string formName, std::string formTarget);
		static std::string const	name_set[3];
};

#endif
