#include "Span.hpp"

int RandomNumber () { 
	return (std::rand()); 
}

int main() {
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "=== [ span 1 ] === " << std::endl;
		sp.printSpan();
		std::cout << std::endl;

		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp.longestSpan() << std::endl;
		std::cout << "size: " << sp.getSize() << std::endl;
		std::cout << "elem: " << sp.getElementCount() << std::endl;
	}

	{
		std::cout << "=== [ span 2 ] === " << std::endl;

		Span sp = Span(5);	
		std::vector<int> v;

		for (int i = 0; i < 5; ++i)
			v.push_back(std::rand());
		sp.addNumbers(v.begin(), v.end());

		sp.printSpan();
		std::cout << std::endl;

		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp.longestSpan() << std::endl;
		std::cout << "size: " << sp.getSize() << std::endl;
		std::cout << "elem: " << sp.getElementCount() << std::endl;

	}

	{
		std::cout << "=== [ 10000 tests ] === " << std::endl;

		Span sp(10000);
		std::srand(time(NULL));

		for (int i = 0; i < 10000; i++){
			sp.addNumber(std::rand());
		}

		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp.longestSpan() << std::endl;
		std::cout << "size: " << sp.getSize() << std::endl;
		std::cout << "elem: " << sp.getElementCount() << std::endl;
	}

	{
		std::cout << "=== [ 10000 tests 2 ] === " << std::endl;
		Span sp(10000);

		std::srand(time(NULL));
		sp.addManyNumbers( sp.getSize(), RandomNumber );

		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp.longestSpan() << std::endl;
		std::cout << "size: " << sp.getSize() << std::endl;
		std::cout << "elem: " << sp.getElementCount() << std::endl;
	}

	{
		std::cout << "=== [ 10000 tests 3 ] === " << std::endl;

		Span sp;
		std::vector<int> v;
		for (int i = 0; i < 10000; ++i)
			v.push_back(std::rand());
		sp.addNumbers(v.begin(), v.end());

		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp.longestSpan() << std::endl;
		std::cout << "size: " << sp.getSize() << std::endl;
		std::cout << "elem: " << sp.getElementCount() << std::endl;
	}

	return (0);
}
