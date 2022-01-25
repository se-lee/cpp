#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeSign;
		int const			_gradeExecute;

	public:
		Form();
		Form(std::string const name, int gradeSign, int gradeExe);
		Form(const Form &form);
		virtual ~Form();

		Form &operator=(const Form &form);

		std::string const	getName() const;
		bool				getSigned() const;
		int					getGradeSign() const;
		int					getGradeExecute() const;
		void				beSigned(Bureaucrat &bureaucrat);

		virtual void		execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

std::ostream	&operator<<(std::ostream &out, const Form &form);


#endif