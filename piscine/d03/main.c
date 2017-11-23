#include <unistd.h>

#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_strrev.c"
#include "ex08/ft_atoi.c"
#include "ex09/ft_sort_integer_table.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str);

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
	ft_putchar(nb % 10 + '0');
}

/*----------------------------------------------------------------------------*/
void	ft_print_tab_int(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putstr("  tab[");
		ft_putnbr(i);
		ft_putstr("] = ");
		ft_putnbr(tab[i]);
		ft_putstr(";\n");
		i++;
	}

}
void	ft_print_exo(char *ex)
{
	ft_putstr("\n---------------------------------------------\n");
	ft_putstr("-                  EX ");
	ft_putstr(ex);	
	ft_putstr("                    -");
	ft_putstr("\n---------------------------------------------\n");
}

/*----------------------------------------------------------------------------*/

int	main(void)
{
	char str[14];
	int tab[10];
	int i;
	int nbr;
	int *nbr_1;
	int **nbr_2;
	int ***nbr_3;
	int ****nbr_4;
	int *****nbr_5;
	int ******nbr_6;
	int *******nbr_7;
	int ********nbr_8;
	int *********nbr_9;

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = ' ';
	str[6] = 'w';
	str[7] = 'o';
	str[8] = 'r';
	str[9] = 'l';
	str[10] = 'd';
	str[11] = ' ';
	str[12] = '!';
	str[13] = '\0';

	tab[0] = -789;
	tab[1] = 145;
	tab[2] = 1;
	tab[3] = 0;
	tab[4] = -1;
	tab[5] = -42;
	tab[6] = 42;
	tab[7] = 141;
	tab[8] = -141;
	tab[9] = 654574;
	nbr = 141;
	nbr_1 = &nbr;
	nbr_2 = &nbr_1;
	nbr_3 = &nbr_2;
	nbr_4 = &nbr_3;
	nbr_5 = &nbr_4;
	nbr_6 = &nbr_5;
	nbr_7 = &nbr_6;
	nbr_8 = &nbr_7;
	nbr_9 = &nbr_8;

	ft_print_exo("00");
	i = 141;
	ft_putstr("Before : ");
	ft_putnbr(i);
	ft_ft(&i);
	ft_putstr("\nAfter : ");
	ft_putnbr(i);

	ft_print_exo("01");
	ft_putstr("Before : ");
	ft_putnbr(nbr);
	ft_ultimate_ft(nbr_9);
	ft_putstr("\nAfter : ");
	ft_putnbr(nbr);

	ft_print_exo("02");
	i = 4;
	nbr = 2;
	ft_putstr("Before : \n");
	ft_putstr("	a = ");
	ft_putnbr(i);
	ft_putstr("\n	b = ");
	ft_putnbr(nbr);
	ft_swap(&i, &nbr);
	ft_putstr("\n\nAfter : \n");
	ft_putstr("	a = ");
	ft_putnbr(i);
	ft_putstr("\n	b = ");
	ft_putnbr(nbr);

	ft_print_exo("03");
	ft_div_mod(4, 3, &i, &nbr);	
	ft_putstr("a = 4; b = 3;\ndiv : ");
	ft_putnbr(i);
	ft_putstr("\nmod : ");
	ft_putnbr(nbr);
	ft_div_mod(42, 10, &i, &nbr);	
	ft_putstr("\n\na = 42; b = 10;\ndiv : ");
	ft_putnbr(i);
	ft_putstr("\nmod : ");
	ft_putnbr(nbr);
	ft_div_mod(11, 3, &i, &nbr);	
	ft_putstr("\n\na = 11; b = 3;\ndiv : ");
	ft_putnbr(i);
	ft_putstr("\nmod : ");
	ft_putnbr(nbr);
	ft_div_mod(6, 3, &i, &nbr);	
	ft_putstr("\n\na = 6; b = 3;\ndiv : ");
	ft_putnbr(i);
	ft_putstr("\nmod : ");
	ft_putnbr(nbr);
	
	ft_print_exo("04");
	i = 9;
	nbr = 4;
	ft_putstr("Before : \n");
	ft_putstr("	a = ");
	ft_putnbr(i);
	ft_putstr("\n	b = ");
	ft_putnbr(nbr);
	ft_ultimate_div_mod(&i, &nbr);
	ft_putstr("\nAfter : \n");
	ft_putstr("	a = ");
	ft_putnbr(i);
	ft_putstr("\n	b = ");
	ft_putnbr(nbr);

	ft_print_exo("05");
	ft_putstr(str);		

	ft_print_exo("06");
	ft_putnbr(ft_strlen(str));		

	ft_print_exo("07");
	ft_putstr("Before : ");
	ft_putstr(str);
	ft_strrev(str);		
	ft_putstr("\nAfter  : ");
	ft_putstr(str);

	ft_print_exo("08");

	ft_putstr("\n\nstr = 123\nint = ");
	ft_putnbr(ft_atoi("123"));
	ft_putstr("\n\nstr = -123\nint = ");
	ft_putnbr(ft_atoi("-123"));
	ft_putstr("\n\nstr = \\t\\n\\r\\v\\f -123\nint = ");
	ft_putnbr(ft_atoi("\t\n\r\v\f -123"));
	ft_putstr("\n\nstr = \\n\\t123\nint = ");
	ft_putnbr(ft_atoi("\n\t123"));
	ft_putstr("\n\nstr = 123a123\nint = ");
	ft_putnbr(ft_atoi("123a123"));
	ft_putstr("\n\nstr = a123a123\nint = ");
	ft_putnbr(ft_atoi("a123a123"));
	ft_putstr("\n\nstr = +123\nint = ");
	ft_putnbr(ft_atoi("+123"));
	ft_putstr("\n\nstr = -2147483648\nint = ");
	ft_putnbr(ft_atoi("-2147483648"));

	ft_print_exo("09");
	ft_putstr("Before :\n");
	ft_print_tab_int(tab, 10);
	ft_sort_integer_table(tab, 10);
	ft_putstr("\nAfter :\n");
	ft_print_tab_int(tab, 10);
	return (0);
}
