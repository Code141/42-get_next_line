#include "libft.h"

#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_concat_params.c"
#include "ex04/ft_split_whitespaces.c"
#include "ex05/ft_print_words_tables.c"
//#include "ex06/ft_convert_base.c"

/*----------------------------------------------------------------------------*/

void	ft_print_tab_int(int *tab, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_print_exo(int nb, char *name, int size)
{
	int i;

	i = 0;
	ft_putchar('\n');
	while (i < size)
	{
		ft_putchar('-');
		i++;
	}
	ft_putstr("\n- EX");
	if (nb < 10)
		ft_putchar('0');
	ft_putnbr(nb);
	ft_putchar('	');
	ft_putstr(name);
	i = 0;
	while (i < size - 9 - ft_strlen(name))
	{
		ft_putchar(' ');
		i++;
	}	
	ft_putstr("-\n");
	i = 0;
	while (i < size)
	{
		ft_putchar('-');
		i++;
	}
	ft_putstr("\n");
}

/*----------------------------------------------------------------------------*/

int	main(int argc, char **argv)
{
	char	*src = "Hello world  !";
	int		min;
	int		max;
	int		delta;
	int 	*tab;
	int 	header_size;
	char	**str;
	char	**str2;
	char	**str3;

	header_size = 80; 
	min = -5;
	max = 6;
	delta = max - min;
	
	ft_print_exo(0, "ft_strdup", header_size);
	ft_putstr(ft_strdup(src));
		
	ft_print_exo(1, "ft_range", header_size);
	ft_print_tab_int(ft_range(min, max), delta);
	
	ft_print_exo(2, "ft_ultimate_range", header_size);
	ft_ultimate_range(&tab, min, max);
	ft_print_tab_int(tab, delta);

	ft_print_exo(3, "ft_concat_params", header_size);
	ft_putstr(ft_concat_params(argc, argv));

	ft_print_exo(4, "ft_split_whitespaces", header_size);
	ft_putstr("ft_split_whitespaces is parsing...\n");
	str = ft_split_whitespaces(" 123 456 789 ");

	str2 = ft_split_whitespaces("");
	str3 = ft_split_whitespaces("");

	ft_print_exo(5, "ft_print_word_tables", header_size);
	ft_print_words_tables(ft_split_whitespaces(" 123 456 789 "));
	ft_print_words_tables(ft_split_whitespaces("  "));
	ft_print_words_tables(ft_split_whitespaces(""));
	ft_print_words_tables(ft_split_whitespaces("ABC DEF GHI"));

	ft_print_exo(6, "ft_convert_base", header_size);
//	ft_putstr(ft_convert_base("FF", "0123456789ABCDEF", "01"));


	
	return(0);
}
