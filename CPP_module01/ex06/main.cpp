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
	if (karen.complain(level) == 0)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	std::cout << std::endl << "============================================" << std::endl;

	return (0);
}
