#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat:public Animal
{
	private:

	protected:

	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();

		Cat	&operator=(const Cat &cat);
		void	makeSound() const;
};

#endif