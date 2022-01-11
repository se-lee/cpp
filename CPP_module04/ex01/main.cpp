#include "Animal.hpp"
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
