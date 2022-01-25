#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <stdexcept>
# include <fstream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string		_target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &source);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &source);

		std::string getTarget() const;

		void	createShrubbery();
		void	execute(Bureaucrat const &executor);

};

#endif