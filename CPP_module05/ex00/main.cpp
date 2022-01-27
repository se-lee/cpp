#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("A", 1);
	Bureaucrat b("B", 150);
	std::cout << "------------------------" << std::endl << std::endl;

	try
	{
		a.decrementGrade();
		std::cout << a;
		a.incrementGrade();
		std::cout << a;
		a.incrementGrade();
		std::cout << a << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "------------------------" << std::endl << std::endl;
	try
	{
		b.incrementGrade();	
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "------------------------" << std::endl << std::endl;

	try
	{
		Bureaucrat c("C", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "------------------------" << std::endl << std::endl;
	try
	{
		Bureaucrat d("D", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << std::endl << "=================================" << std::endl << std::endl;
	return 0;

}
