#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "Karen Constructor" << std::endl;
}

Karen::~Karen(void)
{
	std::cout << "Karen Destructor" << std::endl;
}

void	Karen::_debug(void)
{
	std::cout << "[ DEBUG ] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info(void)
{
	std::cout << "[ INFO ] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;

}

void	Karen::_warning(void)
{
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error(void)
{
	std::cout << "[ ERROR ] This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	t_level_func	complain[4] = 
		{{"DEBUG", &Karen::_debug},
		{"INFO", &Karen::_info},
		{"WARNING", &Karen::_warning},
		{"ERROR", &Karen::_error}};

	void	(Karen::*ptr)(void);
	int		i = 0;
	while (i < 4)
	{
		if (!complain[i].level.compare(level))
		{
			ptr = complain[i].f_ptr;
			(this->*ptr)(); //execute function pointer
			break ;
		}
		i++;
	}
}
