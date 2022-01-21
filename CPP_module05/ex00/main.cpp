#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("A", 1);

	a.decrementGrade();
	std::cout << a.getGrade() << std::endl;
	a.decrementGrade();
	std::cout << a.getGrade() << std::endl;
	return 0;
/*

	try
	{
		// actions to take
	}
	catch(PEBKACException &e)
	{

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
*/

}
