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

Form::Form(const Form &form): _name(form._name), _signed(form._signed), _gradeSign(form._gradeSign), _gradeExecute(form._gradeExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form	&Form::operator=(const Form &form)
{
	// this->_name = form._name;
	this->_signed = form._signed;
	return (*this);
}

std::string const	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int	Form::getGradeExecute() const
{
	return (this->_gradeExecute);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

const char	*Form::FormNotSignedException::what() const throw()
{
	return ("form is not sigend");
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	out << "The form named, " << form.getName() << " requires Grade " << form.getGradeSign() << " to sign and Grade " << form.getGradeExecute() << " to execute." << std::endl;
	return (out);
}
