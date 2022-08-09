# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 17:23:02 by ael-idri          #+#    #+#              #
#    Updated: 2022/08/09 22:33:44 by ael-idri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	Account.cpp tests.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	g++
FLEAGS 	=	-Wall -Wextra -Werror -std=c++98
NAME 	=	logs
HEADER	=   Account.hpp
RM 		=	rm -rf
 
all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
			$(CC) $(FLEAGS) $(OBJ) -o $(NAME)

%.o  	:	%.c 
			$(CC) $(FLEAGS) $< -o $^

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re