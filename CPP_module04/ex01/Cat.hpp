#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat:public Animal
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