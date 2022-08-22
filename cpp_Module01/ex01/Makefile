# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 00:51:10 by ael-idri          #+#    #+#              #
#    Updated: 2022/08/20 21:28:38 by ael-idri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp Zombie.cpp zombieHorde.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	g++
FLEAGS 	=	-Wall -Wextra -Werror -std=c++98
NAME 	=	Zombie
HEADER	=	Zombie.hpp
RM 		=	rm -rf

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
			$(CC) $(FLEAGS) $(OBJ) -o $(NAME)

%.o  	:	%.c %.hpp
			$(CC) $(FLEAGS) $< -o $^

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re