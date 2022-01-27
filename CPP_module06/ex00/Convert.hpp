#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <stdexcept>
# include <iostream>
# include <string>
# include <stdlib.h>
# include <cmath>
# include <cctype>

class Convert
{
	private:
		char			*_input;
		double			_value;

	public:
		Convert();
		Convert(const Convert &src);
		Convert(char *str);
		~Convert();

		Convert	&operator=(const Convert &src);

		char	*getInput() const;
		double	getValue() const;
		char	toChar();
		int		toInt();
		float	toFloat();
		double	toDouble();

		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();

// exception: out of range? impossible to convert?

};

#endif