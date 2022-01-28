#include <exception>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	Base	*base_ptr;
	
	int		i;
	
	i = rand() % 3;
	switch (i)
	{
		case 0:
			base_ptr = new A;
			std::cout << "[A] generated" << std::endl;
			break ;
		case 1:
			base_ptr = new B;
			std::cout << "[B] generated" << std::endl;
			break ;
		case 2:
			base_ptr = new C;
			std::cout << "[C] generated" << std::endl;
			break ;
		default:
			base_ptr = NULL;
			std::cout << "NULL generated" << std::endl;
	}

	return (base_ptr);
}

void	identify(Base *p)
{
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "Actual type is A" << std::endl; 
	else if (b)
		std::cout << "Actual type is B" << std::endl;
	else if (c)
		std::cout << "Actual type is C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
}

/*
void	identify(Base &p)
{

It prints the actual type of the object pointed to by p: 
	"A", "B" or "C". Using a pointer inside this function is forbidden.

	try {
		B &c = dynamic_cast<B &>(*base);
		std::cout << "conversion is ok" << std::endl;
	}
	catch (std::bad_cast &badcast)
	{
		std::cout << "conversion is not ok" << std::endl;
	}
	try
	{
		A	&a = dynamic_cast<A&>(p);
	}
	catch(std::bad_cast &badcast)
	{
		std::cout << "conversion is not ok" << std::endl;
	}
}
*/

int main()
{
	Base *ptr;

	for (int i = 0; i < 10; i++)
	{
		ptr = generate();
		identify(ptr);
		// identify(&ptr);
		delete ptr;
		std::cout << "-----------------" << std::endl;
	}
	
	return (0);
}

