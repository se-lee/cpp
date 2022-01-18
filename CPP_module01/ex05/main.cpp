#include "Karen.hpp"

int main()
{
	Karen	karen;
	std::cout << "========================================" << std::endl << std::endl;
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("BAAAAH");
	std::cout << std::endl << "========================================" << std::endl;
	return 0;
}