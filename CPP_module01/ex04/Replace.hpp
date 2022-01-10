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
		std::string		_replace_src;
		std::string		_replace_dest;

	public:
		Replace(void);
		Replace(std::string s1, std::string s2);
		~Replace();

		std::string			before_word(std::string line);
		std::string			after_word(std::string line);
		const std::string	&getReplaceSrc(void);
		const std::string	&getReplaceDest(void);
};

#endif