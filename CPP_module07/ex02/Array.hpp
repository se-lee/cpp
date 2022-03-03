#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>


template < typename T >
class Array {

private:
	unsigned int	_size;

public:
	Array( void ); 
	Array( unsigned int n);
	Array( const T &array );
	
	T	&operator[](size_t)

	unsigned int	size( void ){
		return ( this->_size );
	}

};

#endif
