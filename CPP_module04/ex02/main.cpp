#include "Cat.hpp"
#include "Dog.hpp" 

int main()
{
	// const Animal		*meta = new Animal();
	const AbstAnimal		*dog = new Dog();
	const AbstAnimal		*cat = new Cat();


	std::cout << std::endl;
	std::cout << "[DogType] " << dog->getType() << std::endl;
	std::cout << "[CatType] " << cat->getType() << std::endl;
	std::cout << std::endl;
	
	dog->makeSound();
	cat->makeSound();
	// meta->makeSound();

	std::cout << std::endl;

	// delete meta;
	delete dog;
	delete cat;
}

