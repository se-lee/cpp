#include "Fixed.hpp"

int	main()
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "[a]  : " << a << std::endl;
	std::cout << "[++a]: " << ++a << std::endl;
	std::cout << "[a]  : "<< a << std::endl;
	std::cout << "[a++]: " << a++ << std::endl;
	std::cout << "[a]  : " << a << std::endl;
	std::cout << std::endl;
	std::cout << "[b]  : " << b << std::endl;

	std::cout << "[max]: " << Fixed::max(a, b) << std::endl;

	return (0);
}


/*

$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016

*/