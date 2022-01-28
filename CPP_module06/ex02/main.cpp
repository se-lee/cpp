#include <exception>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	Base	*base_ptr;
	int		i = rand() % 3;
	
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
		std::cout << "ptr: Actual type is A" << std::endl; 
	else if (b)
		std::cout << "ptr: Actual type is B" << std::endl;
	else if (c)
		std::cout << "ptr: Actual type is C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		std::cout << "ref: Actual type is A" << std::endl;
	}
	catch(std::bad_cast &badcast)
	{
		try {
			B &b = dynamic_cast<B &>(p);
			std::cout << "ref: Actual type is B" << std::endl;
		}
		catch (std::bad_cast &badcast)
		{
			try 
			{
				C &c = dynamic_cast<C &>(p);
				std::cout << "ref: Actual type is C" << std::endl;
			}
			catch (std::bad_cast &badcast)
			{
				std::cout << "ref: conversion is not ok" << std::endl;
			}
		}
	}
}

int main()
{
	Base *ptr;

	for (int i = 0; i < 10; i++)
	{
		ptr = generate();
		identify(ptr);
		identify(*ptr);
		delete ptr;
		std::cout << "-----------------------" << std::endl;
	}
	
	return (0);
}
