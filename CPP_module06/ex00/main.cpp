#include "Convert.hpp"


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Invalid argument" << std::endl;
		return (1);
	}

	Convert	convert(argv[1]);

	std::cout << "input: " << convert.getInput() << std::endl << std::endl;

	convert.printChar();
	convert.printInt();
	convert.printFloat();
	convert.printDouble();

	return (0);
}


/*
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Invalid argument" << std::endl;
		return (1);
	}

	char	*input = argv[1];
	
	char	c;
	int		i;
	float	f;
	double	d;

	d = std::atof(input);
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	std::cout << "c: " << c << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "d: " << d << std::endl;




// isprint: check if character is printable
// isspace: check if character is white-space (skip)

// std::isnan
// std::isinf;



	std::cout << std::endl;
	return (0);
}
