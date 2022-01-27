#ifndef CONVERT_HPP
# define CONVERT_HPP

class Convert
{
	public:
		Convert();
		Convert(const Convert &src);
		~Convert();

		Convert	&operator=(const Convert &src);
		

// exception: out of range? impossible to convert?


};

#endif