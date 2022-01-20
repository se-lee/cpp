#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog:public Animal
{
	private:
		Brain	*_brain;

	protected:

	public:
		Dog();
		Dog(const Dog &dog); //copy
		~Dog();

		Dog &operator=(const Dog &dog);
		void	makeSound() const;

		void	setNewIdeas(std::string newIdeas, int i);
		void	printIdeas();
};

#endif