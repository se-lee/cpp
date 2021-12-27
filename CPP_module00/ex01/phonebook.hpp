#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class Phonebook
{
private:

	Contact	_contact_info[8];
	int		_number_of_contact;
	int		_index_number;

public:
	Phonebook(void);
	~Phonebook(void);
	void	add_contact(void);
	void	search_phonebook(void);
	void	display_phonebook(void);
	void	exit_phonebook(void);
};

#endif