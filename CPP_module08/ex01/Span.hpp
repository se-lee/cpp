#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span {

private:



public:
	Span( void );
	Span( unsigned int nbr );
	Span(const Span &span);
	virtual ~Span( void );

	Span &operator=(const Span &span);

	void	addNumber( int nbr );
	int		shortestSpan( void );
	int		longestSpan( void );

//Any attempt to add a new element if there are already N elements stored should throw an exception


};





#endif