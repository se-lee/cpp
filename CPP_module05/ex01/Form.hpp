#ifndef FORM_HPP
# define FORM_HPP

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
		~Form();

		Form &operator=(const Form &form);

		std::string const	getName() const;
		bool				getSigned() const;
		int					getGradeSign() const;
		int					getGradeExecute() const;
		void				beSigned(Bureaucrat &bureaucrat);

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

};

std::ostream	&operator<<(std::ostream &out, const Form &form);


#endif