#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AbstAnimal.hpp"

class Cat:public AbstAnimal
{
	private:

	protected:

	public:
		Cat();
		Cat(const Cat &cat); //copy constructor
		~Cat();

		Cat	&operator=(const Cat &cat);
		void	makeSound() const;
};

#endif