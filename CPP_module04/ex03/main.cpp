#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

/*
int main()
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl;

	ICharacter	*me = new Character("me");

	std::cout << std::endl;

	AMateria	*tmp;
	tmp = src->createMateria("ice");
	std::cout << std::endl;
	me->equip(tmp);
	
	std::cout << std::endl;
	
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	std::cout << std::endl;
	
	AMateria	*tmp2;
	tmp2 = tmp->clone();
	me->equip(tmp2);

	std::cout << std::endl;

	ICharacter *bob = new Character("bob");

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = tmp->clone();
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = tmp->clone();
	bob->equip(tmp);
	
	delete tmp;

	std::cout << std::endl;
	
	bob->use(0, *me);
	bob->use(1, *me);
	bob->use(2, *me);
	bob->use(3, *me);

	std::cout << std::endl;

	bob->unequip(2);
	bob->use(2, *me);

	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}



*/
