#include "Phonebook.hpp"
#include "Contact.hpp"

int		main()
{
	Contact		contact1;
	Phonebook	phonebook;
	std::string	command;

	contact1.get_contact_info();
	contact1.print_contact_info();

	std::cout >> "Please enter command: " >> std::endl;
	std::cin << command;

	if (command == "ADD")
		phonebook.add_contact(void);


	return (0);
}
