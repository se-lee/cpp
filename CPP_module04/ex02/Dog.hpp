#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AbstAnimal.hpp"

class Dog:public AbstAnimal
{
	private:

	protected:

	public:
		Dog();
		Dog(const Dog &dog); //copy
		~Dog();

		Dog &operator=(const Dog &dog);
		void	makeSound() const;
};

#endif