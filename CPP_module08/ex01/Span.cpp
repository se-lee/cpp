#include "Span.hpp"

Span::Span( void )
{
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

void	Span::addManyNumbers( unsigned int size, int (*gen)())
{
	this->_vector.resize( size );
	this->_element_count = size;
	std::generate(this->_vector.begin(), this->_vector.end(), gen);
}

unsigned int	Span::shortestSpan( void )
{
	if ( this->_vector.size() < 2)
		throw elementCountException();

	unsigned int	shortest;
	unsigned int	temp;
	shortest = this->longestSpan();

	std::vector<int>::iterator it;

	std::vector<int> copy(this->_vector);
	std::sort( copy.begin(), copy.end() );

	for (it = copy.begin(); it != copy.end(); it++)
	{
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

void	Span::printSpan( void )
{
	for ( std::vector<int>::iterator it = this->_vector.begin(); it != this->_vector.end(); it++)
		std::cout << *it << std::endl;
}

unsigned int	Span::getSize( void )
{
	return (this->_size);
}

unsigned int	Span::getElementCount( void )
{
	return (this->_element_count);
}

std::vector<int>	Span::getVector( void )
{
	return (this->_vector);
}

const char	*Span::spanIsFullException::what() const throw()
{
	return ("Error: cannot add elements");
}

const char	*Span::elementCountException::what() const throw()
{
	return ("Error: Not enough element");
}
