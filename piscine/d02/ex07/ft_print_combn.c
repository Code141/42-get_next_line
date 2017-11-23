/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 18:15:59 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/07 22:53:57 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int		ft_prime_checker_n(int *tab, int n)
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
				first++;
			i++;
		}
	}
	if (n == 1 && tab[0] == 0)
		return (1);
	if (first == n - 1 && n > 1)
		return (1);
	else
		return (0);
}

void	ft_print_n(int *tab, int n)
{
	int i;
	int first;

	first = 0;
	i = 0;
	first = ft_prime_checker_n(tab, n);
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

void	ft_fill_n(int *tab, int current, int n, int pad)
{
	int i;

	i = pad;
	while (i <= 9)
	{
		tab[current] = i;
		if (current != n - 1)
			ft_fill_n(tab, current + 1, n, i + 1);
		else
			ft_print_n(tab, n);
		printf("%d", current);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int tab[n];

	if (n > 0)
		ft_fill_n(tab, 0, n, 0);
}
