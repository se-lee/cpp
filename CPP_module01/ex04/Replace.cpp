#include "Replace.hpp"

Replace::Replace()
{
}

Replace::Replace(std::string s1, std::string s2)
{
	this->_replace_src = s1;
	this->_replace_dest = s2;
}

Replace::~Replace()
{
}

const std::string	&Replace::getReplaceSrc()
{
	return (this->_replace_src);
}

const std::string	&Replace::getReplaceDest()
{
	return (this->_replace_dest);
}

std::string Replace::before_word(std::string line)
{
	std::string new_line;

	new_line = line.substr(0, line.find(this->_replace_src));
	return (new_line);
}

std::string	Replace::after_word(std::string line)
{
	std::string new_line;
	new_line = line.substr(line.find(this->_replace_src) + this->_replace_src.size());
	return (new_line);
}
