#include "iter.hpp"

int main( void )
{
	int array[5] = {1, 3, 4, 5, 6};

	for (int i = 0; i < 5; i++)
		std::cout << array[i] << ", ";
	std::cout << std::endl;

	return 0;
}
