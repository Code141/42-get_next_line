/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 12:11:09 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/08 16:06:05 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	while (i < length)
	{
		count = 0;
		j = 0;
		while (j < length)
		{
			if (tab[i] == tab[j])
				count++;
			j++;
		}
		if (count != 1)
			i++;
		else
			break ;
	}
	return (i);
}
