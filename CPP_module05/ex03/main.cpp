#include "Intern.hpp"

int main()
{

	Intern	someRandomIntern;
	Form	*rrf;
	Form	*shrub;
	Form	*pardon;
	Form	*random;

	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;

	shrub = someRandomIntern.makeForm("shrubbery creation", "Shrub_target");
	

	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;

	pardon = someRandomIntern.makeForm("presidential pardon", "Pardon_target");
	
	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;

	random = someRandomIntern.makeForm("random form", "Random target");

	std::cout << std::endl << "---------------------------------" << std::endl;

	delete	rrf;
	delete	shrub;
	delete	pardon;
	delete	random;

	return 0;
}
