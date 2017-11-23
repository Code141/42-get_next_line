# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gelambin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/16 10:50:59 by gelambin          #+#    #+#              #
#    Updated: 2017/09/17 22:07:26 by gelambin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

FLAGS = -Wall -Wextra -Werror 

SRC =	./srcs/ft_atoi.c\
		./srcs/ft_putnbr.c\
		./srcs/ft_str_is_alpha.c\
		./srcs/ft_str_is_uppercase.c\
		./srcs/ft_strcpy.c\
		./srcs/ft_strlowcase.c\
		./srcs/ft_strrev.c\
		./srcs/ft_atoi_base.c\
		./srcs/ft_putnbr_base.c\
		./srcs/ft_str_is_lowercase.c\
		./srcs/ft_strcapitalize.c\
		./srcs/ft_strlcat.c\
		./srcs/ft_strncat.c\
		./srcs/ft_strstr.c\
		./srcs/ft_print_words_tables.c\
		./srcs/ft_putstr.c\
		./srcs/ft_str_is_numeric.c\
		./srcs/ft_strcat.c\
		./srcs/ft_strlcpy.c\
		./srcs/ft_strncmp.c\
		./srcs/ft_strupcase.c\
		./srcs/ft_putchar.c\
		./srcs/ft_split_whitespaces.c\
		./srcs/ft_str_is_printable.c\
		./srcs/ft_strcmp.c\
		./srcs/ft_strlen.c\
		./srcs/ft_strncpy.c\
		./srcs/ft_swap.c
	
OBJ = $(SRC:.c=.o)

all : $(OBJ) $(NAME) library indexlib

$(NAME) : 

library :
	ar rc $(NAME).a $(OBJ)

indexlib :
	ranlib $(NAME).a

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME).a

re : fclean all
