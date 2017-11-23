#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "ex04/ft_strncpy.c"

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
	char *nb;
	char *baseHex;
	char str[50] = "ABCDEF\0";
	char str2[50] = "123\0";
	
	ft_print_exo("00");
	ft_putstr(ft_strncpy(str, str2, 2));
	ft_putchar('\n');
	ft_putstr(ft_strncpy(str, str2, 15));
	ft_putchar('\n');
	ft_putstr(ft_strncpy(str, str2, 5));
	ft_putchar('\n');
	ft_putchar('\n');
	char	str3[50] = "ABCDEF\0";
	char	str4[50] = "123\0";
	ft_print_exo("00");
	ft_putstr(strncpy(str3, str4, 2));
	ft_putchar('\n');
	ft_putstr(strncpy(str3, str4, 15));
	ft_putchar('\n');
	ft_putstr(strncpy(str3, str4, 5));
	ft_putchar('\n');
	ft_putchar('\n');

//	ft_putchar(str[0]);
//	ft_putchar(str[1]);
//	ft_putchar(str[2]);
//	ft_putchar(str[3]);
//	ft_putchar(str[4]);
//	ft_putchar(str[5]);
	return (0);
}
