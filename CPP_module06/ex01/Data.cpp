#include "Data.hpp"

Data::Data()
{
}

Data::Data(const Data &data)
{
	*this = data;
}

Data::~Data()
{
}

Data	&Data::operator=(const Data &data)
{
	(void)data;
	return (*this);
}

uintptr_t	Data::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*Data::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
