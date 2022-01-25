// #include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;

	Intern	someRandomIntern;
	Form	*rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;

	Form	*shrub;
	shrub = someRandomIntern.makeForm("shrubbery creation", "shrub_target");

	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;

	Form	*pardon;
	pardon = someRandomIntern.makeForm("presidential pardon", "pardon_target");
	std::cout << std::endl << "---------------------------------" << std::endl;

	Form	*random;
	random = someRandomIntern.makeForm("random form", "random target");

	std::cout << std::endl << "---------------------------------" << std::endl;

	delete	rrf;
	delete	shrub;
	delete	pardon;
	delete	random;

	return 0;
}
