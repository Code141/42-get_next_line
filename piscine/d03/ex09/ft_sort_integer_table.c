/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 15:27:51 by gelambin          #+#    #+#             */
/*   Updated: 2017/08/30 11:55:41 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int sorted;
	int tmp;

	sorted = 0;
	i = 0;
	while (!sorted)
	{
		sorted = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				sorted = 0;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		i = 0;
	}
}
