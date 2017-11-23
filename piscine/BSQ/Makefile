# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gelambin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/20 15:34:45 by gelambin          #+#    #+#              #
#    Updated: 2017/09/20 22:43:13 by gelambin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TOP := $(shell pwd)

CC := gcc
CC_FLAGS := -Wall -Wextra -Werror
CC_INCLUDE := -I$(TOP)/includes/

AR := ar

build:	all

all:	bsq

bsq:	srcs/ft_list/ft_list.a srcs/ft_heap/ft_heap.a srcs/bsq.o\
		srcs/ft_rand.o srcs/main.o srcs/point.o srcs/zone.o\
		srcs/io/check_input.o srcs/io/ft_atoi.c srcs/io/ft_putchar.o\
		srcs/io/ft_putstr.o srcs/io/ft_strncpy.o\
		srcs/io/read_input.o srcs/io/ft_print.o
	$(CC) $(CC_FLAGS) $^ -o $@

srcs/ft_list/ft_list.a:	srcs/ft_list/ft_blend_list.o\
	srcs/ft_list/ft_create_elem.o srcs/ft_list/ft_list_foreach.o\
	srcs/ft_list/ft_list_merge.o srcs/ft_list/ft_list_push_back.o\
	srcs/ft_list/ft_list_push_front.o srcs/ft_list/ft_list_clear.o
	$(AR) rc $@ $^
srcs/ft_heap/ft_heap.a:	srcs/ft_heap/ft_heap.o
	$(AR) rc $@ $^

srcs/ft_list/ft_blend_list.o:	srcs/ft_list/ft_blend_list.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/ft_list/ft_create_elem.o:	srcs/ft_list/ft_create_elem.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/ft_list/ft_list_foreach.o:	srcs/ft_list/ft_list_foreach.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/ft_list/ft_list_merge.o:	srcs/ft_list/ft_list_merge.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/ft_list/ft_list_push_back.o:	srcs/ft_list/ft_list_push_back.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/ft_list/ft_list_push_front.o:	srcs/ft_list/ft_list_push_front.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/ft_list/ft_list_clear.o:	srcs/ft_list/ft_list_clear.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@

srcs/ft_heap/ft_heap.o:	srcs/ft_heap/ft_heap.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@

srcs/io/check_input.o:	srcs/io/check_input.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/io/ft_putchar.o:	srcs/io/ft_putchar.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/io/ft_putstr.o:	srcs/io/ft_putstr.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/io/ft_strncpy.o:	srcs/io/ft_strncpy.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/io/read_input.o:	srcs/io/read_input.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/io/ft_print.o:	srcs/io/ft_print.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/io/ft_atoi.c.o:	srcs/io/ft_atoi.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@

srcs/bsq.o:	srcs/bsq.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/ft_rand.o:	srcs/ft_rand.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/main.o:	srcs/main.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/point.o:	srcs/point.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@
srcs/zone.o:	srcs/zone.c
	$(CC) $(CC_FLAGS) $(CC_INCLUDE) -c $< -o $@

clean:
	rm -f	srcs/ft_list/ft_list.a srcs/ft_heap/ft_heap.a srcs/bsq.o\
			srcs/ft_rand.o srcs/main.o srcs/point.o srcs/zone.o\
			srcs/io/check_input.o srcs/io/ft_atoi.o srcs/io/ft_putchar.o\
			srcs/io/ft_putstr.o srcs/io/ft_strncpy.o\
			srcs/io/read_input.o srcs/io/ft_print.o\
			srcs/ft_list/ft_blend_list.o\
			srcs/ft_list/ft_create_elem.o srcs/ft_list/ft_list_foreach.o\
			srcs/ft_list/ft_list_merge.o srcs/ft_list/ft_list_push_back.o\
			srcs/ft_list/ft_list_push_front.o srcs/ft_list/ft_list_clear.o\
			srcs/ft_heap/ft_heap.o
			rm -f srcs/ft_heap/ft_heap.a
			rm -f srcs/ft_list/ft_list.a

fclean:	clean
	rm -f bsq

re:	fclean all
