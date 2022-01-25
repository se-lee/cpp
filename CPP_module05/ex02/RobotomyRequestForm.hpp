#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm: public Form
{
	private:
		std::string		_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &source);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm &source); 
		std::string		getTarget() const;
		void	execute(Bureaucrat const &executor) const;
};



#endif