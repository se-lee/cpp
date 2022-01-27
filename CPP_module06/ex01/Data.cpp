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
	return (*this);
}

uintptr_t	serialize(Data* ptr)
{

}

Data*		deserialize(uintptr_t raw)
{

}


