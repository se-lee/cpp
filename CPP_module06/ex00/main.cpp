#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Invalid argument" << std::endl;
		return (1);
	}

	Convert	convert(argv[1]);

	convert.printChar();
	convert.printInt();
	convert.printFloat();
	convert.printDouble();

	return (0);
}
