#include "Span.hpp"

int main()
{
	Span sp1 = Span(5);

	sp1.addNumber(6);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);

	std::cout << "=== [ span 1 ] === " << std::endl;
	sp1.printSpan();
	std::cout << "shortest: " << sp1.shortestSpan() << std::endl;
	std::cout << "longest:  " << sp1.longestSpan() << std::endl;


	std::cout << "=== [ span 2 ] === " << std::endl;

	Span sp2 = Span(5);	
	
	// sp2.addManyNumbers( sp2.getVector().begin(), sp2.getVector().end(), 3 );
	sp2.addManyNumbers( 3 );
	std::cout << "size: " << sp2.getSize() << std::endl;
	std::cout << "elem: " << sp2.getElementCount() << std::endl;
	sp2.printSpan();

	// sp2.addNumber( 2 );
	// std::cout << std::endl;
	// sp2.printSpan();

	return (0);
}

/*

$> ./ex01
2
14
$>

*/