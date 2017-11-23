#include <unistd.h>

#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"
#include "ex08/ft_eight_queens_puzzle.c"
#include "ex09/ft_eight_queens_puzzle_2.c"

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
	int j;

	ft_print_exo("00");
	i = -1;
	while (i < 15)
	{
		ft_putnbr(i);
		ft_putstr(" factorial  ");
		ft_putnbr(ft_iterative_factorial(i));		
		ft_putchar('\n');
		i++;
	}

	ft_print_exo("01");
	i = -1;
	while (i < 15)
	{
		ft_putnbr(i);
		ft_putstr(" factorial  ");
		ft_putnbr(ft_recursive_factorial(i));		
		ft_putchar('\n');
		i++;
	}

	ft_print_exo("02");
	i = -5;
	while (i < 10)
	{
		j = -1;
		while (j < 5)
		{
			ft_putstr("N = ");
			ft_putnbr(i);
			ft_putstr(" and P = ");
			ft_putnbr(j);
			ft_putstr(" -> ");
			ft_putnbr(ft_iterative_power(i, j));		
			ft_putchar('\n');
			j++;
		}
		i++;
	}

	ft_print_exo("03");
	i = -5;
	while (i < 10)
	{
		j = -1;
		while (j < 5)
		{
			ft_putstr("N = ");
			ft_putnbr(i);
			ft_putstr(" and P = ");
			ft_putnbr(j);
			ft_putstr(" -> ");
			ft_putnbr(ft_recursive_power(i, j));		
			ft_putchar('\n');
			j++;
		}
		i++;
	}
	ft_print_exo("04");
	i = -1;
	while (i < 12)
	{
		ft_putstr("index[");
		ft_putnbr(i);
		ft_putstr("] = ");
		ft_putnbr(ft_fibonacci(i));
		ft_putstr("\n");
		i++;
	}

	ft_print_exo("05");
	i = -1;
	while (i <= 141)
	{
		ft_putnbr(i);
		ft_putstr(" = ");
		ft_putnbr(ft_sqrt(46340));
		ft_putstr("\n");
		i++;
	}

	ft_print_exo("06");
	i = -1;
	while (i <= 99)
	{
		if (ft_is_prime(i))
		{
			ft_putnbr(i);
			ft_putstr(" = ");
			ft_putnbr(ft_is_prime(i));
			ft_putstr("\n");
		}
		i++;
	}

	ft_print_exo("07");
	i = -1;
	while (i <= 99)
	{
		if (i != ft_find_next_prime(i))
		{
		ft_putnbr(i);
		ft_putstr(" = ");
		ft_putnbr(ft_find_next_prime(i));
		ft_putstr("\n");
		}
		i++;
	}

	ft_print_exo("08");
	ft_putnbr(ft_eight_queens_puzzle());

	ft_print_exo("09");
	ft_eight_queens_puzzle_2();

	return (0);
}
