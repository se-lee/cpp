#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int size = 6;
	Animal	*animal[size];

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		std::cout << "[" << i << "] ";
		animal[i]->makeSound();
		std::cout << std::endl;
	}

	std::cout << "========<< BRAIN >>=========" << std::endl;
	
	Brain	brain;

	brain.setIdeas("I have ", 0);
	brain.setIdeas("a ", 1);
	brain.setIdeas("wonderful idea.", 2);

	for (int i = 0; i < 3; i++)
		std::cout << brain.getIdeas(i) << std::endl;
	std::cout << std::endl;

	std::cout << "========<< DEEP COPY >>=========" << std::endl;
	Dog	dogOriginal;
	std::cout << "- - - - - - - - - - - - - - - - -" << std::endl;
	Dog dogCopy = dogOriginal;
	std::cout << "- - - - - - - - - - - - - - - - -" << std::endl;
	dogOriginal.setNewIdeas("hello ", 0);
	dogOriginal.setNewIdeas("I've got an idea!", 1);
	std::cout << "[ORGN DOG]: ";
	dogOriginal.printIdeas();
	std::cout << "[COPY DOG]: ";
	dogCopy.printIdeas();

	std::cout << "origin addr: " << &dogOriginal << std::endl;
	std::cout << "copy addr  : " << &dogCopy << std::endl;
	std::cout << "- - - - - - - - - - - - - - - - -" << std::endl;

	std::cout << "--------------------------------" << std::endl;
	std::cout << "copy: " << &dogCopy << std::endl;	
	std::cout << "--------------------------------" << std::endl;

	Cat	catOriginal;
	Cat catCopy = catOriginal;

	std::cout << std::endl;
	std::cout << "catOriginal: " << &catOriginal << std::endl;
	std::cout << "catCopy: " << &catCopy << std::endl;
	std::cout << "--------------------------------" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout <<"[" << i << "] ";
		delete animal[i];
		std::cout << "----------------------" << std::endl;
	}
	delete *animal;

	return (0);
}
