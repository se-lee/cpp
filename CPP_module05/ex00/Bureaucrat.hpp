#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class  Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &bureau);
		~Bureaucrat();

		std::string		getName(void);
		std::ostream 	&operator<<(std::ostream &out);
		int				getGrade(void);
		void			incrementGrade(void);
		void			decrementGrade(void);

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

#endif
