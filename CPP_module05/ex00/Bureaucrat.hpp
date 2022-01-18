#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class  Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	protected:


	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat();

		std::string		getName(void);
		std::ostream 	&operator<<(std::ostream &out);
		int				getGrade(void);
		void			incrementGrade(void);
		void			decrementGrade(void);
};

// Bureaucrat::GradeTooHighException
// Bureaucrat::GradeTooLowException

#endif
