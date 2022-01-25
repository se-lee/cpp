#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(const Dog &dog);
		~Dog();

		Dog &operator=(const Dog &dog);
		void	makeSound() const;

		void	setNewIdeas(std::string newIdeas, int i);
		void	printIdeas();
};

#endif