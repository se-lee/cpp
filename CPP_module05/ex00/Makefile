NAME = Bureaucrat

SRCS =	main.cpp		\
		Bureaucrat.cpp	\


GCCF = clang++ -Wall -Werror -Wextra -std=c++98

OBJS = $(addprefix bin/, ${SRCS:.cpp=.o})

bin/%.o :	%.cpp
			@mkdir -p $(dir $@)
			${GCCF} -c $< -o $@ -Iinclude

all :		${NAME}

$(NAME) :	${OBJS}
			${GCCF} $(OBJS) -o $(NAME)

clean :
			rm -f ${OBJS}
			rm -rf bin/

fclean :	clean
			rm -f ${NAME} 

re :		fclean all

.PHONY :	all clean fclean re