#include "Phonebook.hpp"

int		main()
{
	Phonebook	phonebook;
	std::string	command;

	while (1)
	{
		std::cout << "[Please enter a command]: " << std::endl;
		std::cin >> command;
		if (command == "ADD" || command == "add")
			phonebook.add_contact();
		else if (command == "SEARCH" || command == "search")
			phonebook.search_phonebook();
		else if (command == "EXIT" || command == "exit")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
