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
	Fixed(const Fixed &fixed);
	
	Fixed &operator=(Fixed const &fixed);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif