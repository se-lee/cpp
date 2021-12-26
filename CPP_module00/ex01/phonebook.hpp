#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class Phonebook
{
private:
	Contact	contact_info[8];
	int		contact_number;
	int		index_number;

public:
	void	add_contact(void);
	void	search_phonebook(void);
	void	display_phonebook(void);
	void	exit_phonebook(void)
};

#endif