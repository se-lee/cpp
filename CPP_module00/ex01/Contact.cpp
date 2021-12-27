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


#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor test" << std::endl;

	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";

	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructor test" << std::endl;
	return ;
}

void	Contact::get_contact_info(void)
{
	std::cout << "Please enter the following: " << std::endl;
	std::cout << "First name: ";
	std::cin >> this->_first_name;
	std::cout << "Last name: ";
	std::cin >> this->_last_name;
	std::cout << "Nickname: ";
	std::cin >> this->_nickname;
	std::cout << "Phone number: ";
	std::cin >> this->_phone_number;
	std::cout << "Darkest secret: ";
	std::cin >> this->_darkest_secret;

	return ;
}

void	Contact::print_contact_info(void)
{

	std::cout << "<< PRINT CONTACT >>" << std::endl;

	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl; 

	return ;
}

/*
index
first name
last name
nickname
*/

