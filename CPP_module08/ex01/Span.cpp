#include "Span.hpp"

Span::Span( void )
{
}

Span::Span( unsigned int nbr )
{
	this->_size = nbr;
	this->_vector = std::vector<int> (nbr);
	this->_iter = this->_vector.begin;
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
	if (this->_vector.size < this->_size)
		this->_vector.push_back( nbr );
	else
		throw spanIsFullException();
}

unsigned int	Span::shortestSpan( void )
{
//return minimum difference

}

unsigned int 	Span::longestSpan( void )
{
	return ( std::max_element( this->_vector.begin(), this->_vector.end() ) 
		- std::min_element( this->_vector.begin(), this->_vector.end() ) );
}

const char	*Span::spanIsFullException::what() const throw()
{
	return ("Error: cannot add elements");
}
