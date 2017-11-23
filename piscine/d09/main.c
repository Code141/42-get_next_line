/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 16:57:49 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/08 16:46:15 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "ex00/ft_generic.c"
#include "ex01/ft_takes_place.c"
#include "ex04/ft_rot42.c"
#include "ex05/ft_button.c"
#include "ex06/ft_destroy.c"
#include "ex07/ft_collatz_conjecture.c"




#include "ex16/ft_active_bits.c"
#include "ex17/ft_max.c"
#include "ex18/ft_join.c"
#include "ex19/ft_unmatch.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
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

int	main(int argc, char **argv)
{
	int i;
	char str[50];
	(void)argc;
	i = 0;
	ft_print_exo("00");
	ft_generic();
	
	ft_print_exo("01");
	while (i < 24)
	{
		ft_takes_place(i);
		i += 1;
	}
	
	ft_print_exo("02");
	ft_putstr("contact_easy.sh");
	
	ft_print_exo("03");
	ft_putstr("defuse.sh");

	ft_print_exo("04");
	str[0] = 'A';
	str[1] = 'a';
	str[2] = 'B';
	str[3] = 'b';
	str[4] = 'C';
	str[5] = 'c';
	str[6] = 'X';
	str[7] = 'x';
	str[8] = 'Y';
	str[9] = 'y';
	str[10] = 'Z';
	str[11] = 'z';
	str[12] = '\0';
	ft_putstr(ft_rot42(str));

	ft_print_exo("05");
	ft_putnbr(ft_button(1, 2 ,3));
	ft_putchar('\n');
	ft_putnbr(ft_button(3, 1 ,2));
	ft_putchar('\n');
	ft_putnbr(ft_button(2, 3 ,1));
	ft_putchar('\n');

	ft_print_exo("05");
	char ***data;

	data = (char***)malloc(sizeof(***data) * 10);
	if (!data)
		ft_putstr("MALLOC ERROR");
	*data = (char**)malloc(sizeof(**data) * 10);
	if (!data)
		ft_putstr("MALLOC ERROR");
	**data = (char*)malloc(sizeof(*data) * 10);
	if (!data)
		ft_putstr("MALLOC ERROR");
	ft_putnbr(data[0][0][0]);
	data[0][0][0] = 42;
	ft_putnbr(data[0][0][0]);
	ft_destroy(data);

	
	ft_print_exo("COLLA");
	ft_putnbr(ft_collatz_conjecture(15));	
	
	
	ft_print_exo("16");
	int j;
	j = ft_active_bits(255);	
	ft_putstr("Result : ");
	ft_putnbr(j);
	
	
	ft_print_exo("17");
	int tab[9];
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 4;
	tab[4] = 3;
	tab[5] = 654;
	tab[6] = 2;
	tab[7] = 3;
	tab[8] = 3;
	ft_putnbr(ft_max(tab, 9));
	
	ft_print_exo("18");
	argv[3] = 0;
	char *c;
	c = "-";
	ft_putstr(ft_join(argv, c));

	ft_print_exo("19");
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 4;
	tab[4] = 3;
	tab[5] = 4;
	tab[6] = 2;
	tab[7] = 3;
	tab[7] = 4;
	ft_putnbr(ft_unmatch(tab, 9));
	return (0);
}
