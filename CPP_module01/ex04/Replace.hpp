#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
#include <fstream>

class Replace
{
	private:
		std::ifstream	in_file;
		std::ofstream	out_file;
		std::string		_replace_src;
		std::string		_replace_dest;

	public:
		Replace(void);
		Replace(std::string s1, std::string s2);
		~Replace();
		size_t			find_position(std::string line);
		std::string		replace_word(std::string line);

};

#endif