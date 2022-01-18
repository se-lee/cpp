#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);

public:
	Karen(void);
	~Karen(void);
	int		complain(std::string level);
};

typedef	struct s_level_func
{
	std::string		level;
	void			(Karen::*f_ptr)(void);
}	t_level_func;

#endif