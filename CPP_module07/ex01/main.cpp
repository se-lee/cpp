#include "iter.hpp"
#include <string>

template < typename T >
void	addTwo(T &arg)
{
	arg += 2;
}

int main( void )
{
/****************[ Int ]***********************/
	int array[5] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++)
		std::cout << array[i] << ", ";
	std::cout << std::endl;

	iter(array, 5, &addTwo);
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << ", ";
	std::cout << std::endl;

/******************[ Char ]*********************/

	char	str1[6] = "12345";

	std::cout << str1 << std::endl;
	iter(str1, strlen(str1), &addTwo);
	std::cout << str1 << std::endl;

	return 0;
}
