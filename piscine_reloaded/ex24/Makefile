# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gelambin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 09:46:47 by gelambin          #+#    #+#              #
#    Updated: 2017/11/15 15:35:14 by gelambin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRCS =	./srcs/ft_putchar.c\
		./srcs/ft_putstr.c\
		./srcs/ft_strcmp.c\
		./srcs/ft_strlen.c\
		./srcs/ft_swap.c

OBJS = 	./ft_putchar.o\
		./ft_putstr.o\
		./ft_strcmp.o\
		./ft_strlen.o\
		./ft_swap.o

all: $(NAME)

objects:
	gcc -c $(SRCS) -I./includes

$(NAME): objects
	ar rc $(NAME).a $(OBJS)
	ranlib $(NAME).a

clean:
	/bin/rm -f *.o
	 
fclean: clean
	/bin/rm -f $(NAME).a

re: fclean all
