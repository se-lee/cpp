#ifndef CONTACT_HPP
# define CONATCT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact(); 
	~Contact();
	void	get_contact_info(void);
	void	print_contact_info(void);

};

#endif