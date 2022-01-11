#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:

	protected:
		std::string		type;

	public:
		Animal();
		Animal(const Animal &animal); //copy constructor;
		virtual ~Animal();

		Animal &operator=(const Animal &animal);
		std::string	const &getType() const;
		virtual void	makeSound(void) const;

};

#endif