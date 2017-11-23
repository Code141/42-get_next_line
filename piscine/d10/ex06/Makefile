# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gelambin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/14 09:02:48 by gelambin          #+#    #+#              #
#    Updated: 2017/09/20 19:03:44 by gelambin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = do-op

FLAGS = -Wall -Wall -Werror

SRC =	./srcs/main.c\
		./srcs/ft_doop.c\
		./srcs/ft_math.c\
		./srcs/ft_putchar.c\
		./srcs/ft_putstr.c\
		./srcs/ft_putnbr.c\
		./srcs/ft_atoi.c

OBJ = $(SRC:.c=.o)

all : $(OBJ) $(NAME)

$(NAME) :
	gcc $(FLAGS) -o $(NAME) $(SRC) -I./includes 

clean : $(OBJS)
	/bin/rm -f	./srcs/main.o\
				./srcs/ft_doop.o\
				./srcs/ft_math.o\
				./srcs/ft_putchar.o\
				./srcs/ft_putstr.o\
				./srcs/ft_putnbr.o\
				./srcs/ft_atoi.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
