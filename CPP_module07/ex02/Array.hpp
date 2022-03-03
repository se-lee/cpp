#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template < typename T >
class Array{

private:
	T				*_content;
	unsigned int	_size;

public:

	Array<T>( void ) {
		this->_content = new T;
	}	

	Array<T>( unsigned int n ) {
		this->_content = new T[n];
		this->_size = n;
		for (unsigned int i = 0; i < n; i++)
			this->_content[i] = 0;
	}

	Array<T>( Array const & array ) {
		*this = array;
	}

	~Array<T> ( void ) {
		if ( this->_size )
			delete[] this->_content;
	}

	T	&operator[]( unsigned int index ) {
		return ( this->_content[index] );
	}

	Array &operator=( Array const & src ) {
		this->_content = src._content;
		this->_size = src._size;
		return ( *this );
	}

	unsigned int size( void ) {
		return ( this->_size );
	}

/*
When accessing an element with the [ ] operator, 
if its index is out of bounds, an std::exception is thrown.
*/


};

#endif
