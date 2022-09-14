# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 20:24:15 by ael-idri          #+#    #+#              #
#    Updated: 2022/09/14 20:25:27 by ael-idri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp Conversion.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	c++
FLEAGS	=	-Wall -Wextra -Werror -std=c++98 
NAME	=	Forms
HEADERS	=	Conversion.hpp
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