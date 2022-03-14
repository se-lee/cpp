#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	mstack;

	
	mstack.push(1);
	mstack.push(2);

	std::cout << "top: " << mstack.top() << std::endl;

	// mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl << std::endl;

	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	std::cout << "top: " << mstack.top() << std::endl;

	std::cout << "size: " << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "it: " << *it << std::endl;
	std::cout << "ite: " << *ite << std::endl;
	std::cout << "++it: " << *++it << std::endl;

	mstack.push(7);
	std::cout << "ite: " << *ite << std::endl;

	// ++it;
	// --it;

	std::cout << "======== < stack > ========" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}
