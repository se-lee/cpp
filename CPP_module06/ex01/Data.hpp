#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{

	public:
		Data();
		Data(const Data &data);
		~Data();

		// Data	&operator=(const Data &data);

		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t raw);
};

#endif
