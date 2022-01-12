#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat:public Animal
{
	private:
		Brain	*_brain;
		
	protected:

	public:
		Cat();
		Cat(const Cat &cat); //copy constructor
		~Cat();

		Cat	&operator=(const Cat &cat);
		void	makeSound() const;
};

#endif