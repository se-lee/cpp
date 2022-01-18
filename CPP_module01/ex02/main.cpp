#include <iostream>

int main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*strPTR = &str;
	std::string		&strREF	= str;

	std::cout << "---------[ ADDRESS ]---------" << std::endl;
	std::cout << "[str   ] " << &str << std::endl;
	std::cout << "[strPTR] " << strPTR << std::endl;
	std::cout << "[strREF] " << &strREF << std::endl;
	std::cout << std::endl;

	std::cout << "---------[ STRING ]---------" << std::endl;
	std::cout << "[str   ] " << str << std::endl;
	std::cout << "[strPTR] " << *strPTR << std::endl;
	std::cout << "[strREF] " << strREF << std::endl;
	std::cout << std::endl;

	return (0);
}
