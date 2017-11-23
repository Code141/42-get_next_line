/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 08:53:12 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/14 18:49:49 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_str_adv(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;

	i = 0;
	while (tab[i] && tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap_str_adv(tab + i, tab + i + 1);
			i = 0;
		}
		else
			i++;
	}
}
