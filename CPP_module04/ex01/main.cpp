#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();


	delete dog;
	delete cat;

	return (0);
}

/*Your main will create and fill an Array of Animal 
half of it will be Dog and the other half will be Cat.*/