#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"


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
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	AMateria	*tmp2;
	tmp2 = tmp->clone();
	me->equip(tmp2);

std::cout << std::endl;

	ICharacter *bob = new Character("bob");

std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	bob->use(5, *me);

std::cout << std::endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}





