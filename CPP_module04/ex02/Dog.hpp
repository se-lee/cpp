#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(const Dog &dog);
		~Dog();

		Dog &operator=(const Dog &dog);

		std::string	&getIdeas(int i) const;
		void		setIdeas(std::string newIdeas, int i);
		void		makeSound() const;
};

#endif