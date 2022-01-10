#include "Replace.hpp"

Replace::Replace()
{
}

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	this->_filename = filename;
	this->_replace_src = s1;
	this->_replace_dest = s2;
}

Replace::~Replace()
{
}

bool	Replace::set_in_file()
{
	this->_in_file.open(this->_filename);
	if (this->_in_file.fail())
		return (false);
	return (true);
}

bool	Replace::set_out_file()
{
	std::string	out_filename = this->_filename;
	out_filename += ".replace";
	this->_out_file.open(out_filename);
	if (this->_out_file.fail())
	{
		this->_in_file.close();
		return (false);
	}
	return (true);
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

void	Replace::replace_word()
{
	std::string line;
	while(std::getline(this->_in_file, line))
	{
		if (line.find(this->_replace_src) == std::string::npos)
			this->_out_file << line << std::endl;
		else
		{
			while (1)
			{
				this->_out_file << this->before_word(line) << this->_replace_dest;
				line = this->after_word(line);
				if (line.find(this->_replace_src) == std::string::npos)
				{
					this->_out_file << line;
					break ;
				}
			}
			this->_out_file << std::endl;
		}
	}
	this->_in_file.close();
	this->_out_file.close();
}
