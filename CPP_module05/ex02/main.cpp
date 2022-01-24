#include "Form.hpp"

int main()
{
	Bureaucrat a("A", 1);
	Form	test_form("TestForm", 2, 1);
	std::cout << "-------------" << std::endl;

	std::cout << "start: " << a; 
	std::cout << "Form start: " << test_form;
	try
	{
		a.decrementGrade();
		a.decrementGrade();
		std::cout << a;
		a.signForm(test_form);

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	// std::cout << std::endl << "=================================" << std::endl << std::endl;

	// Bureaucrat b("B", 150);
	// std::cout << "-------------" << std::endl;
	// std::cout << "start: " << b;

	std::cout << std::endl << "=================================" << std::endl << std::endl;
	return 0;

}
