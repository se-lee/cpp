#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fp_value;
	static int const	_fract_bit = 8;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &fixed);
	
	Fixed &operator=(Fixed const &fixed);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif