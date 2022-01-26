#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
		
	char	c;
	int		i;
	float	f;
	double	d;
	
	std::string			input = argv[1];
	std::string			stream;

	stream = argv[1];

	c = argv[1][0];
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);


	std::cout << "input: " << input << std::endl;
	std::cout << "stream: " << stream << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "d: " << d << std::endl << std::endl;

	
	// std::stringstream (stream) >> c;
	std::stringstream (stream) >> i;
	std::stringstream (stream) >> f;
	std::stringstream (stream) >> d;
	
	std::cout << "c: " << c << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "d: " << d << std::endl;

	std::cout << std::endl;

	return (0);
}



/*

 "       a"

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