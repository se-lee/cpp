#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
	
	protected:
		std::string		_ideas[100];

	public:
		Brain();
		Brain(const Brain &brain);
		Brain &operator=(const Brain &brain);
		~Brain();

		void	setIdeas(std::string idea);
		std::string	&getIdeas() const;

};

#endif
