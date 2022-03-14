#include "Array.hpp"

#define MAX_VAL 10

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << "value: " << value << " numbers: " << numbers[i] << " mirror: " << mirror[i] << std::endl;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	std::cout << "-------------------------------------------------------" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "numbers: " << numbers[i] << " mirror: " << mirror[i] << std::endl;
		std::cout << "tmp: " << tmp[i] << " test: " << test[i] << std::endl << std::endl;
	}
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "mirror: " << mirror[i] << " numbers: " << numbers[i] << std::endl;
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "numbers1: " << numbers[i] << std::endl;
		numbers[i] = rand();
		std::cout << "numbers2: " << numbers[i] << std::endl;
	}

	delete [] mirror;
	return 0;
}
