#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <cstdlib>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);

	char	*input = argv[1];
		
/*
atof or strtof
*/
	char	c;
	int		i;
	float	f;
	double	d;
	
	c = argv[1][0];

	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);

	std::cout << "input: " << input << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "d: " << d << std::endl;

	std::cout << std::endl;

	d = std::atof(input);
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	std::cout << "c: " << c << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "d: " << d << std::endl;


/*

isprint: check if character is printable
isspace: check if character is white-space (skip)

std::isnan
std::isinf;

*/


	std::cout << std::endl;
	return (0);
}



/*

 "       a"
floatは値の最後にfつける

./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0

*/