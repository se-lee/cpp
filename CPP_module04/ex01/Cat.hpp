#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();

		Cat	&operator=(const Cat &cat);

		std::string	&getIdeas(int i) const;
		void		setIdeas(std::string newIdeas, int i);
		void		makeSound() const;
};

#endif