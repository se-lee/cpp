#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	Phonebook::_number_of_contact = 0;
	Phonebook::_index_number = 0;

	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::add_contact(void)
{
	Contact	contact;

	if (this->_number_of_contact != 8)
	{
		contact.get_contact_info();
		this->_contact_info[this->_number_of_contact] = contact;
		this->_number_of_contact++;
	}
	else
	{
		contact.get_contact_info();
		this->_contact_info[this->_index_number] = contact;
		this->_index_number++;
		if (this->_index_number == 8)
			this->_index_number = 0;
	}
	return ;
}

void	Phonebook::display_phonebook(void)
{
	Phonebook	phonebook;
	int			i;

	std::cout << "|" << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nickname" << "|" << std::endl;
	i = 0;
	while (i < this->_number_of_contact)
	{
		this->_contact_info[i].print_contact_info_short(i);
		i++;
	}
	return ;
}

void	Phonebook::search_phonebook(void)
{
	int		index;

	if (this->_number_of_contact == 0)
	{
		std::cout << "No Contacts! Phonebook is empty" << std::endl; 
	}
	else
	{
		Phonebook::display_phonebook();
		std::cout << "Enter index number: " << std::endl;
		std::cin >> index;
		if (index >= 0 && index <= 8)
			this->_contact_info[index].print_contact_info();
		else
			std::cout << "Invalid index" << std::endl;
	}
	return ;
}

