/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 20:11:23 by gelambin          #+#    #+#             */
/*   Updated: 2017/08/31 17:32:53 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);	
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			ft_putchar(' ');
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (a != 98 && b != 99)
				ft_putchar(',');
			if (a != 98 && b != 99)
				ft_putchar(' ');
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
