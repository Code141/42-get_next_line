#include <unistd.h>
#include "ex07/ft_printcombn.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr_pers(int nb)
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
		ft_putnbr_pers(nb / 10);
	ft_putchar(nb % 10 + '0');
}

/*----------------------------------------------------------------------------*/

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
	int i;
	
	ft_print_exo("00");
	ft_print_alphabet();
	
	ft_print_exo("01");
	ft_print_reverse_alphabet();
	
	ft_print_exo("02");
	ft_print_numbers();
	
	ft_print_exo("03");
	i = -10;
	while (i < 10)
	{
		ft_putnbr_pers(i);
		ft_putstr("	is	");
		ft_is_negative(i);
		ft_putchar('\n');
		i++;
	}

	ft_print_exo("04");
	ft_print_comb();

	ft_print_exo("05");
	ft_print_comb2();

	ft_print_exo("06");
	i = -42;
	while (i < 43)
	{
		ft_putnbr(i);
		ft_putchar('\t');
		i++;
	}
	ft_putnbr(-2147483648);

	ft_print_exo("07");
	i = -1;
	while (i <= 11)
	{
		ft_putstr("\n-----------------------\n");
		ft_putstr("	ft_print_combn(");
		ft_putnbr(i);
		ft_putstr(");\n-----------------------\n");
		ft_print_combn(i);
		i++;
	}
	return (0);
}
