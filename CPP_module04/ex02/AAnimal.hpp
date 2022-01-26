#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string		_type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &animal);
		virtual ~AAnimal();

		AAnimal &operator=(const AAnimal &animal);
	
		std::string	const &getType() const;
		virtual void	makeSound(void) const = 0;
};

#endif