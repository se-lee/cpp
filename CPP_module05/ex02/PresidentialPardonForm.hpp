#ifndef	PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm: public Form
{
	private:

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &source);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(const PresidentialPardonForm &source);

		void	execute(Bureaucrat const &executor);
	};

#endif