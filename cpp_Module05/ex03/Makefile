# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 00:54:26 by ael-idri          #+#    #+#              #
#    Updated: 2022/09/07 21:59:39 by ael-idri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	g++
FLEAGS	=	-Wall -Wextra -Werror -std=c++98 
NAME	=	Forms
HEADERS	=	Bureaucrat.hpp Form.hpp RobotomyRequestForm.hpp 			\
			PresidentialPardonForm.hpp ShrubberyCreationForm.hpp  Intern.hpp
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