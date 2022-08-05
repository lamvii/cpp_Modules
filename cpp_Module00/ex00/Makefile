# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 21:47:20 by ael-idri          #+#    #+#              #
#    Updated: 2022/07/27 23:22:50 by ael-idri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	megaphone.cpp
OBJ		=	megaphone.o
CC		=	g++
FLEAGS 	=	-Wall -Wextra -Werror -std=c++98
NAME 	=	megaphone
RM 		=	rm -rf

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CC) $(FLEAGS) $(OBJ) -o $(NAME)

%.o  	:	%.c
			$(CC) $(FLEAGS) $< -o $^

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re