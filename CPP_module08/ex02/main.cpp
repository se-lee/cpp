#include "MutantStack.hpp"
#include <list>

int	main()
{
	{
	MutantStack<int>	mstack;

	std::cout << "============== < stack: Push> ==============" << std::endl;

	mstack.push(1);
	mstack.push(2);
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top:  " << mstack.top() << std::endl;

	std::cout << "============== < stack: Pop > ==============" << std::endl;
	
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top:  " << mstack.top() << std::endl;

	std::cout << "======== < stack: Push multiple > ==============" << std::endl;
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);
	mstack.push(5);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	while (it != ite)
	{
		std::cout << "it: " << *it << "  ite: " << *ite << std::endl;
		it++;
	}

	std::cout << std::endl;


	std::cout << "=================== < list > ==================" << std::endl;

	std::list<int>	test;
	test.push_back(1);
	test.push_back(2);

	std::cout << "size: " << test.size() << std::endl;
	std::cout << "top : " << test.back() << std::endl;

	std::cout << "================ < list: Pop > ================" << std::endl;

	test.pop_back();
	std::cout << "list size: " << test.size() << std::endl;
	std::cout << "list back: " << test.back() << std::endl;

	std::cout << "======== < list: Push multiple > ==============" << std::endl;

	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);

	std::list<int>::iterator list_it = test.begin();
	std::list<int>::iterator list_ite = test.end();

	while (list_it != list_ite)
	{
		std::cout << "list_it: " << *list_it << " list_ite: " << *list_ite << std::endl;
		list_it++;
	}
	}
	std::cout << "=================================================" << std::endl;

	{
		std::cout << std::endl << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);

 	}
/*	Test with List */
 	{
	 
		std::cout << std::endl << std::endl;
		std::list<int> test;
		test.push_back(5);
		test.push_back(17);
		std::cout << test.back() << std::endl;
		test.pop_back();
		std::cout << test.size() << std::endl;
		test.push_back(3);
		test.push_back(5);
		test.push_back(737);
		//[...]
		test.push_back(0);
		std::list<int>::iterator it = test.begin();
		std::list<int>::iterator ite = test.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}

	}
	return 0;
}
