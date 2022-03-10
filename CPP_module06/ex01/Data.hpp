#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{

	public:
		Data();
		Data(const Data &data);
		virtual ~Data();

		Data	&operator=(const Data &data);

};

#endif
