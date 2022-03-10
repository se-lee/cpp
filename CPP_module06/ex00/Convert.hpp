#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string.h>
# include <cctype>

class Convert
{
	private:
		char			*_input;
		double			_value;
		bool			_dot;
		bool			_isnan;
		bool			_isinf;

	public:
		Convert();
		Convert(const Convert &src);
		Convert(char *str);
		virtual ~Convert();

		Convert	&operator=(const Convert &src);

		char	*getInput() const;
		double	getValue() const;
		bool	getDot() const;
		std::string	putDot();
	
		char	toChar();
		int		toInt();
		float	toFloat();
		double	toDouble();

		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();

};

#endif