# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 17:36:06 by ael-idri          #+#    #+#              #
#    Updated: 2022/08/11 19:27:12 by ael-idri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp 
OBJ		=	main.o
CC		=	g++
FLEAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	refrece_vs_pointers
RM		=	rm -rf


all 	:	$(NAME)

$(NAME) :	$(OBJ)
			$(CC) $(FLEAGS) -o $(NAME) $(OBJ)
%.o		:	%.c 
			$(CC) $(FLEAGS) $< -o $^
clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

