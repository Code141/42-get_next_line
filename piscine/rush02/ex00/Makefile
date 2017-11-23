# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gelambin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/16 10:50:59 by gelambin          #+#    #+#              #
#    Updated: 2017/09/17 22:32:28 by gelambin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

FLAGS = -Wall -Wextra -Werror 

LFT = -L./lib -lft 

SRC =	./srcs/main.c\
		./srcs/rush00.c\
		./srcs/ft_input.c\
		./srcs/ft_generator.c\
		./srcs/ft_print.c\

OBJ = $(SRC:.c=.o)

all : $(OBJ) library $(NAME) 
$(NAME) : 
	gcc $(FLAGS) $(LFT) $(SRC) -o $(NAME) -I./includes

library :
	cd lib && $(MAKE)

relibrary :
	cd lib && $(MAKE) re

indexlib :
	ranlib $(NAME).a

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : relibrary fclean all
