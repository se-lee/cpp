#ifndef ABSTANIMAL_HPP
# define ABSTANIMAL_HPP

# include <iostream>
# include <string>

class AbstAnimal
{
	private:

	protected:
		std::string		_type;

	public:
		AbstAnimal();
		AbstAnimal(const AbstAnimal &animal); //copy constructor;
		virtual ~AbstAnimal();

		AbstAnimal &operator=(const AbstAnimal &animal);
		std::string	const &getType() const;
		virtual void	makeSound(void) const = 0;

};

#endif