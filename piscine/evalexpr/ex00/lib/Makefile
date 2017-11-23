# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gelambin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/17 21:34:35 by gelambin          #+#    #+#              #
#    Updated: 2017/09/17 21:36:33 by gelambin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = ./srcs/
OBJ = ./

SRCS = $(SRC)main.c $(SRC)ft_eval_expr.c $(SRC)ft_explode.c
OBJS = $(OBJ)main.o $(SRC)ft_eval_expr.o $(OBJ)ft_explode.o

all : $(NAME)

$(NAME) : object 

flags :
	gcc -Wall -Wextra -Werror -L./lib -lft -o $(NAME) $(SRCS) 

object :
	clear
	gcc -L./lib -lft -o $(NAME) $(SRCS) 

library :
	ar rc $(NAME).a $(OBJS)

indexlib :
	ranlib $(NAME).a

clean :
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME).a

re : fclean all








gcc -c src/ft_*.c &&
ar rc libft.a ft_*.o &&
rm ft_*.o &&
ranlib libft.a 
