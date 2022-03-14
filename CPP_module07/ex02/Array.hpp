#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template < typename T >
class Array{

private:
	unsigned int	_size;
	T				*_content;

public:

	Array<T>( void ) {
		this->_size = 0;
		this->_content = NULL;
	}

	Array<T>( unsigned int n ) {
			this->_size = n;
			this->_content = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->_content[i] = 0;
	}

	Array<T>( Array const & array ) {
		if ( array._size )
		{
			this->_size = array._size;
			this->_content = new T[array._size];
			for (unsigned int i = 0; i < array._size; i++)
				this->_content[i] = array._content[i];
		}
		else
		{
			this->_size = 0;
			this->_content = NULL;
		}
	}

	~Array<T> ( void ) {
		if ( this->_size )
			delete[] this->_content;
	}

	T	&operator[]( unsigned int index ) {
		try
		{
			if ( index >= this->_size )
				throw std::exception();
			return ( this->_content[index] );
		}
		catch (std::exception &e)
		{
			std::cout << "Index out of bound" << std::endl;
			return (*this->_content);
		}
	}

	Array &operator=( Array const & src ) {
		if ( this->_size )
			delete[] this->_content;
		this->_size = src._size;
		this->_content = new T[src._size];
		for ( unsigned int i = 0; i < src._size; i++)
			this->_content[i] = src._content[i];
		return ( *this );
	}

	unsigned int size( void ) {
		return ( this->_size );
	}
};

#endif
