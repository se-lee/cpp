#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template < typename T >
void	iter( T *array, unsigned int length, void (*f)(T)) {

	for (unsigned int i = 0; i < length; i++)
		f(array[i]);
}

#endif

/*
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f((*lst).content);
		lst = (*lst).next;
	}
}
*/