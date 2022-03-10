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
