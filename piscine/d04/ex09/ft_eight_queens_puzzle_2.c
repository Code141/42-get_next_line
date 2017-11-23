/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:48:08 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/04 15:48:13 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_collision(int *tab)
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 8)
		{
			if (tab[i] == tab[j])
				return (1);
			if (tab[i] == (tab[j] + (j - i)))
				return (1);
			if (tab[i] == (tab[j] - (j - i)))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_fight(int *tab)
{
	int pos;

	pos = 0;
	if (!ft_collision(tab))
	{
		while (pos < 8)
		{
			ft_putchar(tab[pos] + '0');
			pos++;
		}
		ft_putchar('\n');
	}
}

void	ft_test_comb(int *tab, int pos)
{
	int i;

	i = 1;
	while (i <= 8)
	{
		tab[pos] = i;
		if (pos < 7)
			ft_test_comb(tab, pos + 1);
		else
			ft_fight(tab);
		i++;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int tab[8];

	ft_test_comb(tab, 0);
}
