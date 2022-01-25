#include "Cat.hpp"
#include "Dog.hpp" 
#include "WrongCat.hpp"

int main()
{
	std::cout << "==================================" << std::endl;
	const Animal		*meta = new Animal();
	std::cout << "==================================" << std::endl;
	const Animal		*dog = new Dog();
	std::cout << "==================================" << std::endl;
	const Animal		*cat = new Cat();
	std::cout << "==================================" << std::endl;
	const WrongAnimal	*wrong_meta = new WrongAnimal();
	std::cout << "==================================" << std::endl;
	const WrongAnimal	*wrong_cat	= new WrongCat();
	const WrongCat		*real_wrong_cat = new WrongCat();
	std::cout << std::endl;
	std::cout << "==========< Print Type >==========" << std::endl;
	std::cout << "[DogType] " << dog->getType() << std::endl;
	std::cout << "[CatType] " << cat->getType() << std::endl;
	std::cout << "[WrongCatType] " << wrong_cat->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "==========< Make Sound >==========" << std::endl;	
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	wrong_meta->makeSound();
	wrong_cat->makeSound();
	real_wrong_cat->makeSound();
	std::cout << std::endl;

	std::cout << "==================================" << std::endl;
	delete meta;
	std::cout << "==================================" << std::endl;
	delete dog;
	std::cout << "==================================" << std::endl;
	delete cat;
	std::cout << "==================================" << std::endl;
	delete wrong_meta;
	std::cout << "==================================" << std::endl;
	delete wrong_cat;
	std::cout << "==================================" << std::endl;
}
