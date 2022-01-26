#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
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