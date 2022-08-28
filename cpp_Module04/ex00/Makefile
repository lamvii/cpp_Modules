# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 17:45:59 by ael-idri          #+#    #+#              #
#    Updated: 2022/08/27 17:47:10 by ael-idri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	g++
FLEAGS	=	-Wall -Wextra -Werror -std=c++98 
NAME	=	DiamondTrap
HEADERS	=	Animal.hpp Cat.hpp Dog.hpp
RM		=	rm -rf

all 	:	$(NAME)

$(NAME) :	$(OBJ) $(HEADERS)
			$(CC) $(FLEAGS) -o $(NAME) $(OBJ)
			
%.o		:	%.cpp %.hpp
			$(CC) $(FLEAGS) -c $< -o $@
clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re