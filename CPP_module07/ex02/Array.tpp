#include <iostream>

template < typename T >
class Array{

	private:
		T			*_content;
		Array<T>	*_next;


	public:

		Array<T>( void ) {
			// empty array
		}	

		Array<T>( unsigned int n ) {
			// array of n elements
		}

		//Construction by copy and assignment operator

		~Array<T> ( void ) {
			//destructor
		}

		unsigned int size( void );

};
