#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wrong);
		~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &wrong);
		std::string const &getType() const;
		void	makeSound() const;

};

#endif