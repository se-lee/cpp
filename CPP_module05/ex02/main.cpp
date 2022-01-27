#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	a("Worker_A", 1);
	Bureaucrat	b("Worker_B", 80);
	std::cout << std::endl << a;
	std::cout << b;
	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;
	Form		*shrub = new ShrubberyCreationForm("Shrub");
	std::cout << *shrub;
	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;
	a.signForm(*shrub);
	b.signForm(*shrub);
	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;
	a.executeForm(*shrub);
	b.executeForm(*shrub);
	std::cout << std::endl << "=================================" << std::endl << std::endl;
	
	Form	*robo = new RobotomyRequestForm("Robo");
	std::cout << *robo;
	std::cout << std::endl;
	a.signForm(*robo);
	b.signForm(*robo);
	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;
	a.executeForm(*robo);
	b.executeForm(*robo);
	std::cout << std::endl << "=================================" << std::endl << std::endl;

	Form	*pardon = new PresidentialPardonForm("Pardon");
	std::cout << *pardon;
	std::cout << std::endl;
	a.signForm(*pardon);
	b.signForm(*pardon);
	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;
	a.executeForm(*pardon);
	b.executeForm(*pardon);
	std::cout << std::endl << "=================================" << std::endl << std::endl;

	delete	shrub;
	delete	robo;
	delete	pardon;

	return 0;
}
