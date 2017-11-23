/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 09:06:02 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/17 16:15:38 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '(' && str[i] != ')')
		i++;
	if (*str == '(' || *str == ')'
		|| ((str[i - 1] == '(' || str[i - 1] == ')') && i > 0))
		i = 1;
	return (i);
}

int		ft_count_words(char *str)
{
	int i;
	int w_nb;

	w_nb = 0;
	i = 0;
	while (str[i + 1])
	{
		if ((str[i] == ' ')
			&& (str[i + 1] != ' '))
			w_nb++;
		if (str[i] == '(' || str[i] == ')')
			w_nb++;
		i++;
	}
	if (str[0] != ' ')
		w_nb++;
	return (w_nb);
}

void	ft_split_wp(char **tab, char *str)
{
	int	i;
	int	w_c;
	int	w_c_len;

	i = 0;
	w_c = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			w_c_len = ft_strlen(str + i);
			tab[w_c] = (char*)malloc(sizeof(**tab) * (w_c_len + 1));
			ft_strncpy(tab[w_c], str + i, w_c_len);
			i += w_c_len;
			w_c++;
		}
		else
			i++;
	}
	tab[w_c] = 0;
}

char	**ft_explode(char *str)
{
	int		w_nb;
	char	**tab;

	w_nb = ft_count_words(str);
	tab = (char**)malloc(sizeof(*tab) * (w_nb + 1));
	if (!tab)
		return (tab);
	ft_split_wp(tab, str);
	return (tab);
}
