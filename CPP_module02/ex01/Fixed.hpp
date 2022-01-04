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
	Fixed(const Fixed &fixed);
	
	Fixed &operator=(const Fixed &fixed);
	Fixed &operator<<(const Fixed &fixed); // +output stream..??);

	float	toFloat(void);
	int		toInt(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif