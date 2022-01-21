#include "Form.hpp"

Form::Form(): _name("(name)"), _signed(false), _gradeSign(1), _gradeExecute(1)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const name, int gradeSign, int gradeExe)
	: _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExe)
{
	std::cout << "Form variable constructor called" << std::endl;
}

Form::Form(const Form &form)
{
	*this = form;
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("");
}

std::ostream	&operator<<(std::ostream &out, const Form &form, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << " signed " << form.getName;
}
