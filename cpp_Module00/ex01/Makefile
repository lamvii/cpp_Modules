# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/07 03:09:48 by ael-idri          #+#    #+#              #
#    Updated: 2022/08/07 03:41:21 by ael-idri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	my_awsome_phonebook.cpp Contact.cpp PhoneBook.cpp
OBJ		=	$(SRC:.c=.o)
CC		=	g++
FLEAGS 	=	-Wall -Wextra -Werror -std=c++98
NAME 	=	Awsome_PhoneBook
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