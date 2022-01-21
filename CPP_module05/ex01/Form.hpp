#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Form: public Bureaucrat
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

		void				beSigned(Bureaucrat &bureaucrat);
		void				signForm();

};

std::ostream	&operator<<(std::ostream &out, const Form &form, const Bureaucrat &bureaucrat);


#endif