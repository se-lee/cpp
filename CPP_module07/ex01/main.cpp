#include "iter.hpp"
#include <string>

template < typename T >
void	addTwo(T &arg)
{
	arg += 2;
}

int main( void )
{
	int array[5] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++)
		std::cout << array[i] << ", ";
	std::cout << std::endl;

	iter(array, 5, addTwo);
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << ", ";
	std::cout << std::endl;


	char	str1[6] = "12345";

	std::cout << str1 << std::endl;
	iter(str1, strlen(str1), addTwo);
	std::cout << str1 << std::endl;

	return 0;
}

/*
class Awesome {

private:
	int	_n;

public:
	Awesome( void ): _n(42) { return ; }
	int get( void ) const { return this->_n; }

};
std::ostream &operator<<( std::ostream &o, Awesome const &rhs ) { o << rhs.get(); return o; }

template < typename T >
void print(T const & x) { std::cout << x << std::endl; return ; }

int main( void ) {
	int tab[] = {0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print);
	iter( tab2, 5, print);

	return 0;

}

*/