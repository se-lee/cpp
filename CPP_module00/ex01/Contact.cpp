#include "Contact.hpp"

Contact::Contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

Contact::~Contact(void)
{
}

void	Contact::get_contact_info(void)
{
	std::cout << "[Please enter the following]: " << std::endl;
	std::cout << "[First name]: ";
	std::cin >> this->_first_name;
	std::cout << "[Last name]: ";
	std::cin >> this->_last_name;
	std::cout << "[Nickname]: ";
	std::cin >> this->_nickname;
	std::cout << "[Phone number]: ";
	std::cin >> this->_phone_number;
	std::cout << "[Darkest secret]: ";
	std::cin >> this->_darkest_secret;
}

void	Contact::print_contact_info(void)
{
	std::cout << "[First name]: " << this->_first_name << std::endl;
	std::cout << "[Last name]: " << this->_last_name << std::endl;
	std::cout << "[Nickname]: " << this->_nickname << std::endl;
	std::cout << "[Phone number]: " << this->_phone_number << std::endl;
	std::cout << "[Darkest secret]: " << this->_darkest_secret << std::endl; 
	}

void	Contact::print_contact_info_short(int index)
{
	std::cout << "|" << std::setw(10) << index << "|"
		<< std::setw(10) << this->_first_name << "|"
		<< std::setw(10) << this->_last_name << "|"
		<< std::setw(10) << this->_nickname << "|" << std::endl;
}

/*
std::string		print_info_short(std::string str)
{
	std::string temp;
	if (str.length() > 10)
	{
		temp = str.substr(0, 9) + ".";
		return (temp);
	}
	else
		return (str);
}

void	Contact::print_contact_info_short(int index)
{
	std::cout << "|" << std::setw(10) << index << "|"
		<< std::setw(10) << print_info_short(this->_first_name) << "|"
		<< std::setw(10) << print_info_short(this->_last_name) << "|"
		<< std::setw(10) << print_info_short(this->_nickname) << "|" << std::endl;

}



*/