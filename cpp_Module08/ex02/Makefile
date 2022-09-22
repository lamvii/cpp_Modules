SRC		=	main.cpp 
OBJ		=	$(SRC:.cpp=.o)
CC		=	c++
FLEAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	MStack
HEADERS	=	MutantStack.hpp
RM		=	rm -rf

all 	:	$(NAME)

$(NAME) :	$(OBJ) $(HEADERS)
			$(CC) $(FLEAGS) -o $(NAME) $(OBJ)
			
%.o		:	%.cpp $(HEADERS)
			$(CC) $(FLEAGS) -c $< -o $@
clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re