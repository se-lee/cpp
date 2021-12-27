// #include "Contact.hpp"
#include "Phonebook.hpp"

int		main()
{
	// Contact		contact1;
	Phonebook	phonebook;
	std::string	command;

	// contact1.get_contact_info();
	// contact1.print_contact_info();

	while (1)
	{
		std::cout << "Please enter a command: " << std::endl;
		std::cin >> command;
		if (command == "ADD" || command == "add")
			phonebook.add_contact();
		if (command == "SEARCH" || command == "search")
			phonebook.search_phonebook();
		if (command == "EXIT" || command == "exit")
			break ;
	}
	return (0);
}
