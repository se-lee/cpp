#include "MutantStack.hpp"
#include <list>

/*
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
	std::cout << "++it: " << *++it << std::endl << std::endl;
	std::cout << "it: " << *it << std::endl;

	std::cout << "======== < stack > ========" << std::endl;

	std::cout << "ite: " << *ite << std::endl;
	mstack.push(7);
	std::cout << "ite: " << *ite << std::endl << std::endl;

	std::cout << "======== < stack > ========" << std::endl;	

	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;

	std::cout << "======== < stack > ========" << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << "it: " << *it << "  ite: " << *ite << std::endl;
		it++;
	}

	std::cout << "======== < list > ========" << std::endl;

	std::list<int>	test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);

	std::cout << "list front: " << test.front() << std::endl;
	std::cout << "list back: " << test.back() << std::endl;

	std::cout << "======== < list > ========" << std::endl;
	std::list<int>::iterator list_it = test.begin();
	std::list<int>::iterator list_ite = test.end();

	while (list_it != list_ite)
	{
		std::cout << "list_it: " << *list_it << " list_ite: " << *list_ite << std::endl;
		list_it++;
	}

	std::cout << "======== < list (push) > ========" << std::endl;

	test.push_back(5);
	test.push_back(6);
	test.push_back(7);
	std::cout << "list front: " << test.front() << std::endl;
	std::cout << "list back: " << test.back() << std::endl;

	list_it = test.begin();
	list_ite = test.end();


	while (list_it != list_ite)
	{
		std::cout << "list_it: " << *list_it << " list_ite: " << *list_ite << std::endl;
		list_it++;
	}


	return (0);
}
*/


int	main()
{
	MutantStack<int>	mstack;

	std::cout << "======== < stack: Push> ========" << std::endl;

	mstack.push(1);
	mstack.push(2);
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top:  " << mstack.top() << std::endl;

	std::cout << "========< stack: Pop >==============" << std::endl;
	
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top:  " << mstack.top() << std::endl;

	std::cout << "========< stack: Push multiple >==============" << std::endl;
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top:  " << mstack.top() << std::endl;

	std::cout << "========< stack: iterator >==============" << std::endl;
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();


	return 0;
}
