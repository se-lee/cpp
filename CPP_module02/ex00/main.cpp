#include "Fixed.hpp"

int	main()
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << "a) " << a.getRawBits() << std::endl;
	std::cout << "b) " << b.getRawBits() << std::endl;
	std::cout << "c) " << c.getRawBits() << std::endl;
//あとでABC消す

	return (0);
}
