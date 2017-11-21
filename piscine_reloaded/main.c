#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


#include "ex06/ft_print_alphabet.c"
#include "ex07/ft_print_numbers.c"
#include "ex08/ft_is_negative.c"
#include "ex09/ft_ft.c"
#include "ex10/ft_swap.c"
#include "ex11/ft_div_mod.c"
#include "ex12/ft_iterative_factorial.c"
#include "ex13/ft_recursive_factorial.c"
#include "ex14/ft_sqrt.c"
#include "ex15/ft_putstr.c"
#include "ex16/ft_strlen.c"
#include "ex17/ft_strcmp.c"

#include "ex20/ft_strdup.c"
#include "ex21/ft_range.c"
#include "ex22/ft_abs.h"
#include "ex23/ft_point.h"

#include "ex25/ft_foreach.c"
#include "ex26/ft_count_if.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_num(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	joe_print_exo(char *ex, char *name)
{
	ft_putstr("\n ---------------------------------- \n\0");
	ft_putstr("| EX ");
	ft_putstr(ex);
	ft_putstr(" - ");
	ft_putstr(name);
	ft_putstr("\n ---------------------------------- \n\0");
}

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int div;
	int mod;

	joe_print_exo("06", "ft_print_alphabet");
	ft_print_alphabet();	
	
	joe_print_exo("07", "ft_print_numbers");
	ft_print_numbers();
	
	joe_print_exo("08", "ft_is_negative");
	ft_is_negative(42);
	ft_putstr("\n");
	ft_is_negative(0);
	ft_putstr("\n");
	ft_is_negative(-42);
	ft_putstr("\n");

	joe_print_exo("09", "ft_ft");
	i = 0;
	ft_putnbr(i);
	ft_ft(&i);
	ft_putchar('\n');
	ft_putnbr(i);
	
	joe_print_exo("10", "ft_ft");
	j = 141;
	
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(j);
	ft_putchar('\n');

	ft_putchar('\n');

	ft_swap(&i, &j);	
	
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(j);
	ft_putchar('\n');
	
	joe_print_exo("11", "ft_div_mod");
	div = 0;
	mod = 0;
	ft_div_mod(17, 5, &div, &mod);
	ft_putnbr(div);
	ft_putchar('\n');
	ft_putnbr(mod);
	
	joe_print_exo("12", "ft_iterative_factorial");
	i = -1;
	while (i < 14)
	{
		ft_putstr("Index : ");
		ft_putnbr(i);
		ft_putstr(" = ");
		ft_putnbr(ft_iterative_factorial(i++));
		ft_putstr("\n");
	}
	ft_putstr("   Max int = 2147483647\n");
	
	joe_print_exo("13", "ft_recursive_factorial");
	i = -1;
	while (i < 14)
	{
		ft_putstr("Index : ");
		ft_putnbr(i);
		ft_putstr(" = ");
		ft_putnbr(ft_recursive_factorial(i++));
		ft_putstr("\n");
	}
	ft_putstr("   Max int = 2147483647\n");

	joe_print_exo("14", "ft_sqrt");
	i = 0;
	while (i < 200)
	{
		j = ft_sqrt(i);
		if (j)
		{
			ft_putstr("Index = [");
			ft_putnbr(i);
			ft_putstr("]	Return = ");
			ft_putnbr(j);
			ft_putstr("\n");
		}
		i++;
	}	

	joe_print_exo("15", "ft_putstr");
	ft_putstr("42 is only for the braves.");
	
	joe_print_exo("16", "ft_strlen");	
	ft_putnbr(ft_strlen("Hello"));

	joe_print_exo("17", "ft_strcmp");	
	ft_putnbr(ft_strcmp("AAB", "AAA"));	
	
	joe_print_exo("20", "ft_strdup");	
	char *dest;

	dest = ft_strdup("Hello world !");
	ft_putstr(dest);	

	joe_print_exo("21", "ft_range");	
	int *tab;
	int min;
	int max;

	min = 5;
	max = 10;
	tab = ft_range(min, max);
	i = 0;
	while (min < max)
	{
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i++;
		min++;
	}

	joe_print_exo("22", "ft_abs.h");	

	ft_putnbr(ABS(42) + 3 );
	ft_putchar('\n');
	ft_putnbr(ABS(-42) + 3);

	joe_print_exo("23", "ft_point.h");	

	t_point point;
	set_point(&point);
	ft_putnbr(point.x);
	ft_putchar('\n');
	ft_putnbr(point.y);


	joe_print_exo("25", "ft_foreach.c");	

	void	(*funptr)(int);
	funptr = &ft_putnbr;

	ft_foreach(tab, 5, funptr);

	joe_print_exo("26", "ft_count_if.c");	
	argc--;
	argv++;

	if (argc > 1)
	{
		i = 0;
		while (i < argc)
			i++;
		i--;
		argv[i] = 0;
		ft_putstr("There is ");
		ft_putnbr(ft_count_if(argv, &ft_is_num));
		ft_putstr(" on ");
		ft_putnbr(argc);
		ft_putstr(" arguments.");
	}
	else
		ft_putstr("YOU MUST GIVE ME 2 OR MORE ARGUMENTS");


	return (0);
}
