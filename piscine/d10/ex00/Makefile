# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gelambin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/16 10:50:59 by gelambin          #+#    #+#              #
#    Updated: 2017/09/20 21:16:41 by gelambin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

FLAGS = -Wall -Wextra -Werror 

SRC =	./srcs/ft_strlen.c\
		./srcs/ft_putstr.c\
		./srcs/ft_putchar.c\
		./srcs/ft_strcmp.c\
		./srcs/ft_swap.c

OBJ =	./ft_strlen.o\
		./ft_putstr.o\
		./ft_putchar.o\
		./ft_strcmp.o\
		./ft_swap.o

all : $(NAME)
	
$(NAME) : compile library ranlib

compile :
		gcc $(FLAGS) $(SRC) -c -I./includes/

library :
	ar rc $(NAME).a $(OBJ)


ranlib :
	ranlib $(NAME).a

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME).a

re : fclean all
