#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("A", 1);
	std::cout << "-------------" << std::endl;

	std::cout << "start: " << a; 
	try
	{
		a.decrementGrade();
		std::cout << a;
		a.incrementGrade();
		std::cout << a;
		a.decrementGrade();
		std::cout << a;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "=================================" << std::endl << std::endl;

	Bureaucrat b("B", 150);
	std::cout << "-------------" << std::endl;
	std::cout << "start: " << b;

	try
	{
		b.incrementGrade();	
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << "=================================" << std::endl << std::endl;
	return 0;

}
