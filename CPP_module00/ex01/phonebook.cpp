/*
When the program starts, the user is prompted for input: 
you should accept the ADD command, the SEARCH command or the EXIT command. 
Any other input is discarded


[ADD]
◦ The program will prompt the user to input a new contact’s information, one
field at a time, until every field is accounted for.
◦ A contact is defined by the following fields: first name, last name, nickname,
phone number,darkest secret.
◦ The PhoneBook must be represented as as an instance of a class in your code
it must contain an array of contact.
◦ A contact MUST be represented as an instance of a class in your code. You’re
free to design the class as you like, but the peer evaluation will check the
consistency of your choices. Go look at today’s videos again if you don’t
understand what I mean (and I don’t mean "use everything" before you ask).


[SEARCH]
◦ The program will display a list of the available non-empty contacts in 4 columns: 
	index, first name, last name and nickname.
◦ Each column must be 10 chars wide, right aligned and separated by a ’|’ character.
	Any output longer than the columns’ width is truncated and
	the last displayable character is replaced by a dot (’.’).
◦ Then the program will prompt again for the index of the desired entry 
	and displays the contact’s information, one field per line. If the input makes no sense,
	define a relevant behavior.

*/

#include "Phonebook.hpp"

//search_contact_info
//display

Phonebook::Phonebook(void)
{
	std::cout << " < Phonebook constructor >" << std::endl;

	Phonebook::_number_of_contact = 0;
	Phonebook::_index_number = 0;

	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "< Phonebook destructor >" << std::endl;

	return ;
}

void	Phonebook::add_contact(void)
{
	Contact	contact;

	if (this->_number_of_contact != 8)
	{
		contact.get_contact_info(void);
		this->_contact_info[this->_number_of_contact] = contact;
		this->_number_of_contact++;
	}
	else
	{
		contact.get_contact_info(void);
		this->_contact_info[this->_index_number] = contact;
		this->_index_number++;
		if (this->_index_number == 8)
			this->_index_number = 0;
	}

	return ;
}

void	Phonebook::search_phonebook(void)
{
	
}

void	Phonebook::display_phonebook(void)
{
	Contact		contact;
		
}
