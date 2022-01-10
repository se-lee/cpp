#include "Replace.hpp"

Replace::Replace()
{
	std::cout << "Default constructor" << std::endl;
}

Replace::Replace(std::string s1, std::string s2)
{
	this->_replace_src = s1;
	this->_replace_dest = s2;
	std::cout << "[String constructor]  "; 
	std::cout << "  _src: " << this->_replace_src;
	std::cout << "  _dest: " << this->_replace_dest << std::endl;
}

Replace::~Replace()
{
	std::cout << "Destructor" << std::endl;
}

const std::string	&Replace::getReplaceSrc()
{
	return (this->_replace_src);
}

const std::string	&Replace::getReplaceDest()
{
	return (this->_replace_dest);
}

size_t	Replace::find_position(std::string line)
{
	size_t	start_pos;

	start_pos = line.find(this->_replace_src);
	std::cout << "start_pos: " << start_pos << std::endl;
	
	return (start_pos);
}

std::string Replace::put_before(std::string line)
{
	std::string new_line;

	new_line = line.substr(0, line.find(this->_replace_src));
	std::cout << "+ before: " << new_line << std::endl;
	return (new_line);
}

std::string	Replace::put_after(std::string line)
{
	std::string new_line;

	new_line = line.substr(line.find(this->_replace_src) + this->_replace_src.size());
	std::cout << "+ after: " << new_line << std::endl;
	return (new_line);
}



