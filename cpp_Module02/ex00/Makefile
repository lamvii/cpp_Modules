# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 12:33:44 by ael-idri          #+#    #+#              #
#    Updated: 2022/08/20 12:51:52 by ael-idri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp Fixed.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	g++
FLEAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	Fixed_point
HEADERS	=	Fixed.hpp
RM		=	rm -rf


all 	:	$(NAME)

$(NAME) :	$(OBJ) $(HEADERS)
			$(CC) $(FLEAGS) -o $(NAME) $(OBJ)
%.o		:	%.c 
			$(CC) $(FLEAGS) $< -o $^
clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re