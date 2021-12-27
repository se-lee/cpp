#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

public:
	Contact(void); 
	~Contact(void);
	void	get_contact_info(void);
	void	print_contact_info(void);
	void	print_contact_info_short(int index);
};

#endif