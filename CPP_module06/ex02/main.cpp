#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
/* It randomly instanciates A, B or C and returns 
	the instance as a Base pointer.
*/
}

void	identify(Base *p)
{
/*
It prints the actual type of the object pointed to by p: 
	"A", "B" or "C".
*/
}

void	identify(Base &p)
{
/*
It prints the actual type of the object pointed to by p: 
	"A", "B" or "C". Using a pointer inside this function is forbidden.
*/
}

int	main()
{

	return (0);
}


