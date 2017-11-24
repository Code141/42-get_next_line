/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 20:11:23 by gelambin          #+#    #+#             */
/*   Updated: 2017/08/29 11:50:17 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr_simple(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr_simple(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_print_comb_bis(int a, int b, int prime)
{
	if (!prime)
		ft_putchar(',');
	if (!prime)
		ft_putchar(' ');
	if (a < 10)
		ft_putchar('0');
	ft_putnbr_simple(a);
	ft_putchar(' ');
	if (b < 10)
		ft_putchar('0');
	ft_putnbr_simple(b);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int prime;

	prime = 1;
	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_print_comb_bis(a, b, prime);
			prime = 0;
			b++;
		}
		a++;
	}
}