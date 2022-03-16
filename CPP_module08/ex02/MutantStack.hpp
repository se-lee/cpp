#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>
# include <stack>
# include <iterator>
# include <deque>

template < typename T, typename U = std::deque<T> >
class MutantStack: public std::stack<T, U> 
{
	private:

	public:
		MutantStack( void ) {};
		MutantStack( const MutantStack &mutant ) { *this = mutant; };
		virtual ~MutantStack( void ) {};
		MutantStack &operator=( const MutantStack &mutant) { *this = mutant; return *this;};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin( void ) { return this->c.begin(); };
		iterator	end( void ) { return this->c.end(); };

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator	begin( void ) const { return this->c.begin(); };
		const_iterator	end( void ) const { return this->c.end(); };

};

#endif
