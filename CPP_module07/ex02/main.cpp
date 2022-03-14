#include "Array.hpp"

#define MAX_VAL 10

class Awesome {
	public:
		Awesome( void ) : _n(4) { return ; }
		int get(void) const { return this->_n; }
	
	private:
		int	_n;
};

std::ostream & operator <<(std::ostream &o, Awesome const &rhs) { o << rhs.get(); return o;}


int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	std::cout << std::endl << "size: " << numbers.size() << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;

	std::cout << std::endl << "-------------------------------------------------------" << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << std::endl << "value:      " << value << std::endl << "numbers[" << i << "]: " << numbers[i] << std::endl << "mirror[" << i << "]:  " << mirror[i] << std::endl << std::endl;
	}
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	std::cout << "-------------------------------------------------------" << std::endl << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "tmp: " << tmp[i] << " test: " << test[i] << std::endl;
	}
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[0] = 0;
		numbers[1] = 1;
		numbers[2] = 2;
		numbers[3] = 3;
		numbers[4] = 4;
		numbers[5] = 5;
		numbers[6] = 6;
		numbers[7] = 7;
		numbers[8] = 8;
		numbers[9] = 9;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "-------------------------------------------------------" << std::endl << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
		std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
	std::cout  << std::endl << "-------------------------------------------------------" << std::endl << std::endl;

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
		numbers[MAX_VAL + 1] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout  << std::endl << "-------------------------------------------------------"  << std::endl << std::endl;

	delete [] mirror;
	return 0;
}


