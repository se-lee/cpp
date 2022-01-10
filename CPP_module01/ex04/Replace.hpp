#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>

class Replace
{
	private:
		std::string		_replace_src;
		std::string		_replace_dest;

	public:
		Replace(void);
		Replace(std::string s1, std::string s2);
		~Replace();

		size_t				find_position(std::string line);
		std::string			put_before(std::string line);
		std::string			put_after(std::string line);
		const std::string	&getReplaceSrc(void);
		const std::string	&getReplaceDest(void);
};

#endif