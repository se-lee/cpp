#include "watever.hpp"
/*
int	main( void ) {

	int	a = 2;
	int	b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min ( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max ( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl;

	std::string c = "string1";
	std::string d = "string2";
	std::cout << "c = " << c << ", d = " << d << std::endl << std::endl;

	::swap( c, d );
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max (c, d ) << std::endl;

	return 0;
}
*/


class Awesome {
	private:
		int	_n;

	public:
		Awesome(void) : _n(0) { }
		Awesome( int n ) :_n(n) { }
		Awesome &operator=(Awesome &a) { _n = a._n; return *this; }
		bool operator==( Awesome const &rhs ) const {
			return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const {
			return (this->_n != rhs._n); }
		bool operator > (Awesome const &rhs ) const {
			return (this->_n > rhs._n);	}
		bool operator < (Awesome const &rhs ) const {
			return (this->_n < rhs._n); }
		bool operator >= (Awesome const &rhs ) const {
			return (this->_n >= rhs._n); }
		bool operator <= (Awesome const &rhs ) const {
			return (this->_n <= rhs._n); }

		int	get_n() const { return _n; }
};

std::ostream & operator<<(std::ostream &o, const Awesome &a) {o << a.get_n(); return o;}

int main (void) 
{
	Awesome a(2), b(4);

	std::cout << "a: " << a << " | b: " << b << std::endl << std::endl;

	swap(a, b);
	std::cout << "[swap] ";
	std::cout << "a: " << a << " | b: " << b << std::endl << std::endl;
	std::cout << "[max] ";
	std::cout << max(a, b) << std::endl << std::endl;
	std::cout << "[min] ";
	std::cout << min(a, b) << std::endl << std::endl;	

	return (0);
}
