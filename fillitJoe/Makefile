# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/25 18:33:26 by gelambin          #+#    #+#              #
#    Updated: 2017/11/25 19:22:25 by gelambin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fillit

CC		= gcc
#CFLAGS	= -Wall -Wextra -Werror
LDLIBS	= lib/libft/lft

SRCS	= main.c input.c
OBJS	= $(SRCS:.c=.o)
INC		=	-I ./lib/libft -I ./includes

all: libMake $(NAME)

%.o: %.c
	$(CC) $(INC) $(CFLAGS) -c $?

$(NAME) : $(OBJS)
	$(CC) -L./lib/libft -lft $(CFLAGS) -o $(NAME) $?

libMake:
	cd ./lib/libft && $(MAKE)

libMakeRe:
	cd ./lib/libft && $(MAKE) re

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean libMakeRe all
