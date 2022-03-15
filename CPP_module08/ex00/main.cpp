#include "easyfind.hpp"

int main()
{
	int		arr[] = {1, 2, 3, 4, 5, 6, 7};
	int		*p;

	p = std::find(arr, arr + sizeof(arr)/sizeof(arr[0]), 5);
	std::cout << "array find: " << *p << std::endl;

	std::vector<int> v1;
	std::vector<int>::iterator	it;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);

	std::cout << "real find: " << *(std::find(v1.begin(), v1.end(), 5)) << std::endl;
	
	try 
	{
		std::cout << "easyfind 1: " << *(easyfind(v1, 5)) << std::endl;
		std::cout << "easyfind 2: " << *(easyfind(v1, 10)) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}

