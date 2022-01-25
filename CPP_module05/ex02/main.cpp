#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	Bureaucrat a("Worker_A", 1);
	Form	*shrub = new ShrubberyCreationForm("shrub");
	std::cout << "-------------" << std::endl;


	// std::cout << "start: " << a; 
	// std::cout << "Form start: " << test_form;
	// try
	// {
	// 	a.decrementGrade();
	// 	a.decrementGrade();
	// 	std::cout << a;
	// 	a.signForm(test_form);

	// }
	// catch(const std::exception &e
	// {
	// 	std::cerr << e.what() << '\n';
	// }


	std::cout << std::endl << "=================================" << std::endl << std::endl;
	return 0;

}
