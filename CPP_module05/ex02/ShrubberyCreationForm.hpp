#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &source);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &source);

		void	execute(Bureaucrat const &executor);

/*

Create a file <target>_shrubbery in the working directory, 
and writes ASCII trees inside it
*/

};

#endif