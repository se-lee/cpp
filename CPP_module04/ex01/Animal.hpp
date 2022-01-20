#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	private:

	protected:
		std::string		_type;

	public:
		Animal();
		Animal(const Animal &animal);
		virtual ~Animal();

		Animal &operator=(const Animal &animal);
		std::string	const &getType() const;
		virtual void	makeSound(void) const;

};

#endif