#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery_Creation", 145, 137)
{
	std::cout << "Shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target)
{
	std::cout << "Shrubbery parameter constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source)
{
	*this = source;
	std::cout << "Shrubbery copy constructor called" << std::endl;
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

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::createShrubbery()
{
	std::ofstream	out_file;
	std::string	file_name = this->_target + "_shrubbery";
	out_file.open(file_name);
	if (out_file.fail())
	{
		std::cout << "Shrubbery File creation failed" << std::endl;
		return ;
	}
	else
	{
		out_file << "Very nice big green tree" << std::endl;
	}
	out_file.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (this->getSigned() == false)
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	else
		this->createShrubbery();
}