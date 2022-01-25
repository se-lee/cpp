#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	protected:
		std::string		_ideas[100];

	public:
		Brain();
		Brain(const Brain &brain);
		Brain &operator=(const Brain &brain);
		~Brain();

		void	setIdeas(std::string idea, int i);
		std::string	&getIdeas(int i);

};

#endif
