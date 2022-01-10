#include "Replace.hpp"

Replace::Replace()
{
	std::cout << "Default constructor" << std::endl;
}

Replace::Replace(std::string in_filename, std::string s1, std::string s2)
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

size_t	Replace::find_position(std::string line)
{
	size_t	start_pos;

	start_pos = line.find(this->_replace_src);
	std::cout << "start_pos: " << start_pos << std::endl;
	
	return (start_pos);
}

std::string Replace::replace_word(std::string line)
{
	std::string	temp;
	std::string new_line;

	// temp = line.erase(line.find(this->_replace_src), this->_replace_src.size());
	// new_line = temp.insert(line.find(this->_replace_src), this->_replace_dest);
	new_line = line.substr(0, line.find(this->_replace_src));
	// std::cout << "- erase: " << temp << std::endl;
	std::cout << "+ substr: " << new_line << std::endl;
	return (new_line);
}



