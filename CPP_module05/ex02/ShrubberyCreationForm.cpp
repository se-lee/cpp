#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery_Creation", 145, 137)
{
	std::cout << "Shrubbery Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source)
{
	*this = source;
	std::cout << "Shrubbery Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &source)
{
	*this = source;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
/*
Create a file <target>_shrubbery in the working directory, 
and writes ASCII trees inside it
*/
}