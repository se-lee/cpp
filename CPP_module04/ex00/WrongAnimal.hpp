#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	private:

	protected:
		std::string		_type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wrong);
		virtual ~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &wrong);
		std::string const &getType() const;
		virtual void	makeSound() const;

};

#endif