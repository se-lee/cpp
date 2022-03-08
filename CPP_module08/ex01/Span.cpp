#include "Span.hpp"

Span::Span( void )
{
}

Span::Span( unsigned int nbr )
{
	this->_size = nbr;
	this->_vector = std::vector<int> (nbr);
}

Span::Span( const Span &span )
{
}

Span::~Span()
{
}

Span	&Span::operator=( const Span &span )
{
	this->_size = span._size;
	return ( *this );
}

void	Span::addNumber( int nbr )
{
	if (this->_vector.size() < this->_size)
		this->_vector.push_back( nbr );
	else
		throw spanIsFullException();
}

unsigned int	Span::shortestSpan( void )
{
	unsigned int	shortest;
	unsigned int	temp;

	if ( this->_vector.size() < 2)
		throw elementCountException();
	shortest = this->longestSpan();

	std::vector<int>:: iterator it;
// *** これだとVectorそのものがソートされてしまうため、コピーつくって行った方が良さそう
	std::sort( this->_vector.begin(), this->_vector.end() );
	for (it = this->_vector.begin(); it != this->_vector.end(); it++)
	{
		temp = *(it + 1) - *it;
		if ( shortest > temp )
			shortest = temp;
	}
	return shortest;
}

unsigned int 	Span::longestSpan( void )
{
	if (this->_vector.size() < 2)
		throw elementCountException();

	int	max = *std::max_element( this->_vector.begin(), this->_vector.end() );
	int	min = *std::min_element( this->_vector.begin(), this->_vector.end() );
	
	return ( max - min );
}

const char	*Span::spanIsFullException::what() const throw()
{
	return ("Error: cannot add elements");
}

const char	*Span::elementCountException::what() const throw()
{
	return ("Error: Not enough element");
}
