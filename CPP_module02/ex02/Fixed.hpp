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
	
	bool	operator>(const Fixed &fixed)const;
	bool	operator<(const Fixed &fixed)const;
	bool	operator>=(const Fixed &fixed)const;
	bool	operator<=(const Fixed &fixed)const;
	bool 	operator==(const Fixed &fixed)const;
	bool	operator!=(const Fixed &fixed)const;

	Fixed &operator+(const Fixed &fixed);
	Fixed &operator-(const Fixed &fixed);
	Fixed &operator*(const Fixed &fixed);
	Fixed &operator/(const Fixed &fixed);

	float	toFloat(void)const;
	int		toInt(void)const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	static Fixed		&min(Fixed &fixed1, Fixed &fixed2);
	static Fixed const	&min(const Fixed &fixed1, const Fixed &fixed2);
	static Fixed		&max(Fixed &fixed1, Fixed &fixed2);
	static Fixed const	&max(const Fixed &fixed1, const Fixed &fixed2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif