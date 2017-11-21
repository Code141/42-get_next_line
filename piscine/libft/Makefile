# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gelambin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/16 10:50:59 by gelambin          #+#    #+#              #
#    Updated: 2017/09/18 00:04:46 by gelambin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

FLAGS = -Wall -Wextra -Werror 

SRC =	./src/ft_atoi.c\
		./src/ft_putnbr.c\
		./src/ft_str_is_alpha.c\
		./src/ft_str_is_uppercase.c\
		./src/ft_strcpy.c\
		./src/ft_strlowcase.c\
		./src/ft_strrev.c\
		./src/ft_atoi_base.c\
		./src/ft_putnbr_base.c\
		./src/ft_str_is_lowercase.c\
		./src/ft_strcapitalize.c\
		./src/ft_strlcat.c\
		./src/ft_strncat.c\
		./src/ft_strstr.c\
		./src/ft_print_words_tables.c\
		./src/ft_putstr.c\
		./src/ft_str_is_numeric.c\
		./src/ft_strcat.c\
		./src/ft_strlcpy.c\
		./src/ft_strncmp.c\
		./src/ft_strupcase.c\
		./src/ft_putchar.c\
		./src/ft_split_whitespaces.c\
		./src/ft_str_is_printable.c\
		./src/ft_strcmp.c\
		./src/ft_strlen.c\
		./src/ft_strncpy.c\
		./src/ft_swap.c
	
SRCJ =	./srcJoe/ft_joe_print_exo.c\
		./srcJoe/ft_joe_print_day.c

OBJ = $(SRC:.c=.o)
OBJJ = $(SRCJ:.c=.o)

all : $(OBJJ) $(OBJ) $(NAME)

$(NAME) : 
	ar rc $(NAME).a $(OBJ) $(OBJJ)
	ranlib $(NAME).a

clean :
	/bin/rm -f $(OBJ) $(OBJJ)

fclean : clean
	/bin/rm -f $(NAME).a

re : fclean all
