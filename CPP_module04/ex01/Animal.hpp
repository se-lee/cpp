#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
		protected:
		std::string		_type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &animal);
		virtual ~Animal();

		Animal &operator=(const Animal &animal);
		std::string	const &getType() const;
		virtual void	makeSound(void) const;


};

#endif