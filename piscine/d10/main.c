/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 13:59:49 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/18 11:31:33 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../d08/ex00/ft_split_whitespaces.c"

#include "ex01/ft_foreach.c"
#include "ex02/ft_map.c"
#include "ex03/ft_any.c"
#include "ex04/ft_count_if.c"
#include "ex05/ft_is_sort.c"
#include "ex07/ft_sort_wordtab.c"
#include "ex08/ft_advanced_sort_wordtab.c"

int	ft_is_odd(int nb)
{
	return (nb % 2);
}

int	ft_divide_by_two(int nb)
{
	return (nb / 2);
}

int	ft_set_to_null(int nb)
{
	(void)nb;
	return (0);
}

int	ft_is_sorted(int a, int b)
{
	return (a - b);
}

int	main(int argc, char **argv)
{
	ft_joe_print_day(10, "Makefile & Function pointers", 80);
	argc--;
	argv++;
	
	int		tab[10]; 
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	tab[5] = 5;
	tab[6] = 6;
	tab[7] = 7;
	tab[8] = 8;
	tab[9] = 9;

	int		tab_2[10]; 
	tab_2[0] = 0;
	tab_2[1] = 1;
	tab_2[2] = 2;
	tab_2[3] = 3;
	tab_2[4] = 1;
	tab_2[5] = 5;
	tab_2[6] = 6;
	tab_2[7] = 7;
	tab_2[8] = 8;
	tab_2[9] = 9;


	char	**tab_c1;
	tab_c1 = (char**)malloc(sizeof(char*) * 5);
	tab_c1[0] = (char*)malloc(sizeof(char) * 5);
	tab_c1[1] = (char*)malloc(sizeof(char) * 5);
	tab_c1[2] = (char*)malloc(sizeof(char) * 5);
	tab_c1[3] = (char*)malloc(sizeof(char) * 5);
	
	char	**tab_c2;
	tab_c2 = (char**)malloc(sizeof(char*) * 5);
	tab_c2[0] = (char*)malloc(sizeof(char) * 5);
	tab_c2[1] = (char*)malloc(sizeof(char) * 5);
	tab_c2[2] = (char*)malloc(sizeof(char) * 5);
	tab_c2[3] = (char*)malloc(sizeof(char) * 5);
	

	tab_c1[0][0] = '0';
	tab_c1[0][1] = '0';
	tab_c1[0][2] = '\0';

	tab_c1[1][0] = 'a';
	tab_c1[1][1] = 'a';
	tab_c1[1][2] = '\0';
	tab_c1[2][0] = '0';

	tab_c1[2][1] = '0';
	tab_c1[2][2] = '\0';

	tab_c1[3] = 0;

	tab_c2[0][0] = '0';
	tab_c2[0][1] = '0';
	tab_c2[0][2] = '\0';
	tab_c2[1][0] = '0';
	tab_c2[1][1] = '0';
	tab_c2[1][2] = '\0';
	tab_c2[2][0] = '0';
	tab_c2[2][1] = '0';
	tab_c2[2][2] = '\0';
	tab_c2[3] = 0;

	ft_joe_print_exo(0, "Makefile", 80);

	ft_putstr("Ex00\'s about makefiles,\n");
	ft_putstr("Please, go into folder ex00 and try some command like : \n");
	ft_putstr("   $>make\n");
	ft_putstr("   $>make clean\n");
	ft_putstr("   $>make fclean\n");
	ft_putstr("   $>make re\n");

	
	
	ft_joe_print_exo(1, "ft_foreach()", 80);
	ft_foreach(tab, 10, &ft_putnbr);		
	ft_joe_print_exo(2, "ft_map()", 80);
	ft_foreach(ft_map(tab, 10, &ft_is_odd), 10, &ft_putnbr);
	ft_putchar('\n');
	ft_foreach(ft_map(tab, 10, &ft_divide_by_two), 10, &ft_putnbr);
	ft_putchar('\n');
	ft_foreach(ft_map(tab, 10, &ft_set_to_null), 10, &ft_putnbr);
	
	ft_joe_print_exo(3, "ft_any()", 80);
	ft_putnbr(ft_any(tab_c1, &ft_str_is_alpha));
	ft_putchar('\n');
	ft_putnbr(ft_any(tab_c2, &ft_str_is_alpha));
	ft_putchar('\n');
	ft_putnbr(ft_any(argv, &ft_str_is_alpha));

	ft_joe_print_exo(4, "ft_count_if()", 80);
	ft_putnbr(ft_count_if(tab_c1, &ft_str_is_alpha));
	ft_putchar('\n');
	ft_putnbr(ft_count_if(tab_c2, &ft_str_is_alpha));
	ft_putchar('\n');
	ft_putnbr(ft_count_if(argv, &ft_str_is_alpha));

	ft_joe_print_exo(5, "ft_is_sort()", 80);
	ft_putnbr(ft_is_sort(tab, 10, &ft_is_sorted));
	ft_putchar('\n');
	ft_putnbr(ft_is_sort(tab_2, 10, &ft_is_sorted));

	ft_joe_print_exo(6, "do-op", 80);
	ft_putstr("Do-op is a program please execute \n");
	ft_putstr("   $>make	\ninto ex06 folder to build it and\n");
	ft_putstr("play with it by trying someting like  \n   $>./do-op 1 + 1");
	
	ft_joe_print_exo(7, "ft_sort_wordtab()", 80);
	char *str;
	str = "sed ut perspiciatis, unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam eaque ipsa, quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt, explicabo.";
	
	ft_putstr("Initial text :\n");
	ft_putstr(str);
	ft_putstr("\n\nParsed by ft_split_whitespaces() :\n");

	char **tabSplit;
	tabSplit = ft_split_whitespaces(str);
	while (*tabSplit)
	{
		ft_putstr(*tabSplit);
		ft_putstr(" ");
		tabSplit++;
	}
	char **sorted_tab;
	ft_putstr("\n\nAfter executing ft_sort_wordtab() :\n");
	sorted_tab =ft_split_whitespaces(str);
	ft_sort_wordtab(sorted_tab);
	while (*sorted_tab)
	{
		ft_putstr(*sorted_tab);
		ft_putstr(" ");
		sorted_tab++;
	}
	ft_joe_print_exo(8, "ft_advanced_sort_wordtab();", 80);
	ft_putstr("Initial text :\n");
	ft_putstr(str);
	ft_putstr("\n\nParsed by ft_split_whitespaces() :\n");

	tabSplit = ft_split_whitespaces(str);
	while (*tabSplit)
	{
		ft_putstr(*tabSplit);
		ft_putstr(" ");
		tabSplit++;
	}
	
	ft_putstr("\n\nAfter executing ft_sort_wordtab() :\n");
	sorted_tab =ft_split_whitespaces(str);
	ft_advanced_sort_wordtab(sorted_tab, &ft_strcmp);
	while (*sorted_tab)
	{
		ft_putstr(*sorted_tab);
		ft_putstr(" ");
		sorted_tab++;
	}	
		return (0);
}
