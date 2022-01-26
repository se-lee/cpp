#include "Cat.hpp"
#include "Dog.hpp" 

int main()
{
	// AAnimal				test;
	const AAnimal		*dog = new Dog();
	const AAnimal		*cat = new Cat();
	Dog					dogOriginal;

	std::cout << "- - - - - - - - < TYPE > - - - - - - - - -" << std::endl << std::endl;

	std::cout << "[DogType] " << dog->getType() << std::endl;
	std::cout << "[CatType] " << cat->getType() << std::endl;
	std::cout << std::endl;
	
	std::cout << "- - - - - - - - < SOUND > - - - - - - - - -" << std::endl << std::endl;

	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	std::cout << "- - - - - - - - < IDEA > - - - - - - - - -" << std::endl << std::endl;

	dogOriginal.setIdeas("hello, ", 0);
	dogOriginal.setIdeas("I've got an idea!", 1);

	Dog dogCopy = dogOriginal;

	std::cout << std::endl;
	
	std::cout << "Dog Original: " << dogOriginal.getIdeas(0) << dogOriginal.getIdeas(1) << std::endl;
	std::cout << "Dog Copy    : " << dogCopy.getIdeas(0) << dogCopy.getIdeas(1) << std::endl << std::endl;

	std::cout << "- - - - - - - - < CHANGE > - - - - - - - - -" << std::endl << std::endl;
	
	dogOriginal.setIdeas("so, ", 0);
	dogOriginal.setIdeas("how was my idea ?", 1);

	std::cout << "Dog Original: " << dogOriginal.getIdeas(0) << dogOriginal.getIdeas(1) << std::endl;
	std::cout << "Dog Copy    : " << dogCopy.getIdeas(0) << dogCopy.getIdeas(1) << std::endl << std::endl;

	std::cout << "- - - - - - - - - - - - - - - - - - - - - -" << std::endl << std::endl;

	delete dog;
	delete cat;
}

