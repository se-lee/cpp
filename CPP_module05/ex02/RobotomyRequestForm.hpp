#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &source);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm &source); 

		void	execute(Bureaucrat const &executor);
};



#endif