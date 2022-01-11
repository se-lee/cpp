#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_value;
	static int const	_bit;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(const int nbr);
	Fixed(const float nbr);
	Fixed(const Fixed &fixed); //copy constructor
	
	Fixed &operator=(const Fixed &fixed);

	float	toFloat(void)const;
	int		toInt(void)const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
//this must be global (istream and ostream)

#endif