#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data	*data = new Data;
	uintptr_t raw;
	
	raw = serialize(data);
	std::cout << "[serialize]" << std::endl;
	std::cout << "data: " << data << std::endl;
	std::cout << "raw : " << raw << std::endl;
	std::cout << "--------------------" << std::endl;
	data = deserialize(raw);
	std::cout << "[deserialize]" << std::endl;
	std::cout << "data: " << data << std::endl;

	delete data;

	return (0);
}
