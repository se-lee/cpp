#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

class Span {

private:
	unsigned int		_size;
	unsigned int		_element_count;
	std::vector<int>	_vector;

public:
	Span( void );
	Span( unsigned int nbr );
	Span( const Span &span );
	~Span( void );

	Span &operator=( const Span &span );

	void			addNumber( int nbr );
	void			addManyNumbers( unsigned int size, int (*gen)() );
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );
	void			printSpan( void );

	unsigned int		getSize( void );
	unsigned int		getElementCount( void );
	std::vector<int>	getVector( void );

	class spanIsFullException: public std::exception {
		public:
			const char *what() const throw ();
	};

	class elementCountException: public std::exception {
		public:
			const char *what() const throw ();
	};
};

#endif
