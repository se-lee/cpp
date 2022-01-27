#include "Data.hpp"

int main()
{
	Data	*data = new Data;
	uintptr_t raw;
	
	raw = data->serialize(data);
	std::cout << "data: " << data << std::endl;
	std::cout << "raw : " << raw << std::endl;
	
	data = data->deserialize(raw);
	std::cout << "data: " << data << std::endl;

	delete data;

	return (0);
}
