#include "Form.hpp"

int main()
{
	Form		test_form("TestForm", 2, 1);
	Bureaucrat 	a("A", 150);
	Bureaucrat 	b("B", 1);
	std::cout << std::endl << "=================================" << std::endl << std::endl;
	
	std::cout << test_form << std::endl;;
	std::cout << a;
	std::cout << b;
	a.signForm(test_form);
	std::cout << test_form;
	b.signForm(test_form);
	std::cout << test_form;
	std::cout << std::endl;

	std::cout << std::endl << "=================================" << std::endl << std::endl;
	return 0;

}
