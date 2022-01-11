#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	private:

	protected:
		std::string		type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wrong);
		virtual ~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &wrong);
		std::string const &getType() const;
		virtual void	makeSound() const;

};

#endif