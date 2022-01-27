#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery_Creation", 145, 137)
{
	this->_target = "Unknown";
	// std::cout << "Shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery_Creation", 145, 137)
{
	this->_target = target;
	std::cout << "target: " << this->_target << std::endl;
	// std::cout << "Shrubbery parameter constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source)
{
	*this = source;
	// std::cout << "Shrubbery copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "Shrubbery destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &source)
{
	this->_target = source._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	else
	{
		std::ofstream	out_file;
		std::string	file_name = this->_target + "_shrubbery";
		out_file.open(file_name);
		if (out_file.fail())
		{
			std::cout << "Shrubbery File creation failed" << std::endl;
			return ;
		}
		else
		{
			out_file << "_" << std::endl;
			out_file << "| | " << std::endl;
			out_file << "| |_ _ __ ___  ___ " << std::endl;
			out_file << "| __| '__/ _ \\/ _ \\" << std::endl;
			out_file << "| |_| | |  __/  __/" << std::endl;
			out_file << " \\__|_|  \\___|\\___|" << std::endl;
			out_file << std::endl;
			out_file << "                                                     ." << std::endl;
			out_file << "                                              .         ;  " << std::endl;
			out_file << "                 .              .              ;%     ;;   " << std::endl;
			out_file << "                   ,           ,                :;%  %;   " << std::endl;
			out_file << "                    :         ;                   :;%;'     .,   " << std::endl;
			out_file << "           ,.        %;     %;            ;        %;'    ,; " << std::endl;
			out_file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl;
			out_file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
			out_file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
			out_file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
			out_file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
			out_file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
			out_file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
			out_file << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
			out_file << "                          `@%%. `@%%    ;@@%;        " << std::endl;
			out_file << "                            ;@%. :@%%  %@@%;       " << std::endl;
			out_file << "                              %@bd%%%bd%%:;     " << std::endl;
			out_file << "                                #@%%%%%:;;" << std::endl;
			out_file << "                                %@@%%%::;" << std::endl;
			out_file << "                                %@@@%(o);  . '         " << std::endl;
			out_file << "                                %@@@o%;:(.,'         " << std::endl;
			out_file << "                            `.. %@@@o%::;         " << std::endl;
			out_file << "                               `)@@@o%::;         " << std::endl;
			out_file << "                                %@@(o)::;        " << std::endl;
			out_file << "                               .%@@@@%::;         " << std::endl;
			out_file << "                               ;%@@@@%::;.          " << std::endl;
			out_file << "                              ;%@@@@%%:;;;. " << std::endl;
			out_file << "                          ...;%@@@@@%%:;;;;,..  " << std::endl << std::endl;
		}
		out_file.close();
	}
}
