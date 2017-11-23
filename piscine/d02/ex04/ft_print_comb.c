/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 20:06:58 by gelambin          #+#    #+#             */
/*   Updated: 2017/08/29 11:51:57 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_prime_checker(int *tab, int n)
{
	int i;
	int first;

	first = 0;
	i = 0;
	if (tab[0] == 0)
	{
		while (i < n - 1)
		{
			if (tab[i] == tab[i + 1] - 1)
			{
				first++;
			}
			i++;
		}
	}
	if (first == n - 1)
		return (1);
	else
		return (0);
}

void	ft_print(int *tab, int n)
{
	int i;
	int first;

	first = 0;
	i = 0;
	first = ft_prime_checker(tab, n);
	if (!first)
		ft_putchar(',');
	if (!first)
		ft_putchar(' ');
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_fill(int *tab, int current, int n, int pad)
{
	int i;

	i = pad;
	while (i <= 9)
	{
		tab[current] = i;
		if (current != n - 1)
			ft_fill(tab, current + 1, n, i + 1);
		else
			ft_print(tab, n);
		i++;
	}
}

void	ft_print_comb(void)
{
	int tab[3];

	ft_fill(tab, 0, 3, 0);
}
