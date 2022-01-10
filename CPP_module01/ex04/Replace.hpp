#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>

# define SUCCESS	0
# define ERROR		1

class Replace
{
	private:
		std::string		_filename;
		std::string		_replace_src;
		std::string		_replace_dest;
		std::ifstream	_in_file;
		std::ofstream	_out_file;

	public:
		Replace(void);
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace();

		bool				set_in_file(void);
		bool				set_out_file(void);
		std::string			before_word(std::string line);
		std::string			after_word(std::string line);
		void				replace_word();
};

#endif