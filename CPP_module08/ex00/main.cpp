#include "easyfind.hpp"

int main()
{
	int		arr[] = {1, 2, 3, 4, 5, 6, 7};
	int		*p;

	p = std::find(arr, arr+7, 5);
	std::cout << *p << std::endl;

	std::vector<int> v1;
	std::vector<int>::iterator	it;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);

	it = std::find(v1.begin(), v1.end(), 5);
	std::cout << *it << std::endl;
	
	std::vector<int>::iterator it2 = easyfind(v1, 5);
	std::cout << *it2 << std::endl;

	return (0);
}





