#include "watever.hpp"

int main (void) 
{
	
	int	a = 2;
	int	b = 3;
	std::cout << "[original] a = " << a << ", b = " << b << std::endl << std::endl;

	::swap( a, b );
	std::cout << "swap (a, b ) a = " << a << ", b = " << b << std::endl;
	std::cout << "min ( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max ( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl;

	std::string c = "string1";
	std::string d = "string2";
	std::cout << "[original] c = " << c << ", d = " << d << std::endl << std::endl;

	::swap( c, d );
	std::cout << "swap( c, d ) c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max (c, d ) << std::endl;

	return (0);
}
