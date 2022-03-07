#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>

template < typename T >
typename T::iterator	easyfind( T &x, int y) {
	typename T::iterator it;
	it = std::find( x.begin(), x.end(), y);
	
	class OccurenceNotFoundException: public std::exception {
			const char *what() const throw() {
				return ("Error: Occurence not found");
			}
	};

	if (it == x.end())
		throw ( OccurenceNotFoundException() );
	else
		return ( it );
}

#endif