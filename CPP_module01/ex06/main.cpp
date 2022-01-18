#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "invalid argument" << std::endl;
		return (1);
	}

	Karen		karen;
	std::string	level = argv[1];
	std::cout << "============================================" << std::endl << std::endl;
	karen.complain(level);
	std::cout << std::endl << "============================================" << std::endl;

	return (0);
}
