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

	std::cout << "=============== << BRAIN >> ===============" << std::endl << std::endl;
	
	Brain	brain;
	std::cout << std::endl;
	brain.setIdeas("I have ", 0);
	brain.setIdeas("a ", 1);
	brain.setIdeas("wonderful idea.", 2);

	for (int i = 0; i < 3; i++)
		std::cout << brain.getIdeas(i) << std::endl;
	std::cout << std::endl;

	std::cout << "============= << DEEP COPY >> =============" << std::endl << std::endl;
	Dog	dogOriginal;
	std::cout << "- - - - - - - - - - - - - - - - - - - - - -" << std::endl;
	dogOriginal.setIdeas("hello, ", 0);
	dogOriginal.setIdeas("I've got an idea!", 1);
	Dog dogCopy = dogOriginal;
	std::cout << "- - - - - - - - - - - - - - - - - - - - - -" << std::endl << std::endl;

	std::cout << "Dog Original: " << dogOriginal.getIdeas(0) << dogOriginal.getIdeas(1) << std::endl;
	std::cout << "Dog Copy    : " << dogCopy.getIdeas(0) << dogCopy.getIdeas(1) << std::endl << std::endl;

	std::cout << "- - - - - - - - < Change > - - - - - - - - -" << std::endl << std::endl;
	dogOriginal.setIdeas("so, ", 0);
	dogOriginal.setIdeas("how was my idea ?", 1);

	std::cout << "Dog Original: " << dogOriginal.getIdeas(0) << dogOriginal.getIdeas(1) << std::endl;
	std::cout << "Dog Copy    : " << dogCopy.getIdeas(0) << dogCopy.getIdeas(1) << std::endl << std::endl;

	std::cout << "Origin addr: " << &dogOriginal << std::endl;
	std::cout << "Copy addr  : " << &dogCopy << std::endl << std::endl;
	std::cout << "- - - - - - - - - - - - - - - - - - - - - -" << std::endl;

	Cat	catOriginal;
	std::cout << std::endl;
	catOriginal.setIdeas("hey, ", 0);
	catOriginal.setIdeas("my idea is much better", 1);

	Cat catCopy = catOriginal;

	std::cout << "- - - - - - - - - - - - - - - - - - - - - -" << std::endl << std::endl;

	std::cout << "Cat Original: " << catOriginal.getIdeas(0) << catOriginal.getIdeas(1) << std::endl;
	std::cout << "Cat Copy    : " << catCopy.getIdeas(0) << catCopy.getIdeas(1) << std::endl << std::endl;

	std::cout << "- - - - - - - - < Change > - - - - - - - - -" << std::endl << std::endl;

	catOriginal.setIdeas("bye, ", 0);
	catOriginal.setIdeas("i'm smarter than dog", 1);

	std::cout << "Cat Original: " << catOriginal.getIdeas(0) << catOriginal.getIdeas(1) << std::endl;
	std::cout << "Cat Copy    : " << catCopy.getIdeas(0) << catCopy.getIdeas(1) << std::endl << std::endl;

	std::cout << "Origin addr: " << &catOriginal << std::endl;
	std::cout << "Copy addr  : " << &catCopy << std::endl << std::endl;

	std::cout << "- - - - - - - - - - - - - - - - - - - - - -" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout <<"[" << i << "] ";
		delete animal[i];
		std::cout << "- - - - - - - - - - - - - - - - - - - - - -" << std::endl;
	}

	return (0);
}
