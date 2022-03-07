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
	if (it == x.end())
		std::cout << "Element not found" << std::endl;
	else
		return it;
}

#endif