#include "Animal.hpp" //kesu
#include "Cat.hpp"
#include "Dog.hpp" 
#include "WrongAnimal.hpp" //kesu
#include "WrongCat.hpp"

int main()
{
	const Animal		*meta = new Animal();
	const Animal		*dog = new Dog();
	const Animal		*cat = new Cat();
	const WrongAnimal	*wrong_meta = new WrongAnimal();
	const WrongAnimal	*wrong_cat	= new WrongCat();

	std::cout << std::endl;
	std::cout << "[DogType] " << dog->getType() << std::endl;
	std::cout << "[CatType] " << cat->getType() << std::endl;
	std::cout << "[WrongCatType] " << wrong_cat->getType() << std::endl;
	std::cout << std::endl;
	
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	wrong_meta->makeSound();
	wrong_cat->makeSound();
	std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;
	delete wrong_meta;
	delete wrong_cat;
}
