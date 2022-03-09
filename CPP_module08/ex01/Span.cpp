#include "Span.hpp"

Span::Span( void )
{//do i need this constructor ?
}

Span::Span( unsigned int nbr )
{
	this->_size = nbr;
	this->_element_count = 0;
}

Span::Span( const Span &span )
{
	this->_size = span._size;
	this->_element_count = span._element_count;
	this->_vector = span._vector;
}

Span::~Span()
{
}

Span	&Span::operator=( const Span &span )
{
	this->_size = span._size;
	this->_element_count = span._element_count;
	//vector ? ;
	return ( *this );
}

void	Span::addNumber( int nbr )
{
	if (this->_element_count < this->_size)
	{
		this->_vector.push_back( nbr );
		this->_element_count++;
	}
	else
		throw spanIsFullException();
}

unsigned int	Span::shortestSpan( void )
{
	if ( this->_vector.size() < 2)
		throw elementCountException();

	unsigned int	shortest;
	unsigned int	temp;
	shortest = this->longestSpan();

	std::vector<int>:: iterator it;
// *** これだとVectorそのものがソートされてしまうため、コピーつくって行った方が良さそう
// how to make a copy of this->vector??
	std::sort( this->_vector.begin(), this->_vector.end() );
	for (it = this->_vector.begin(); it != this->_vector.end(); it++)
	{
	//	std::cout << "[it+1] " << *(it + 1) << " [it] " << *it << std::endl;
		temp = *(it + 1) - *it;
		shortest = std::min( shortest, temp );
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
