/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 20:07:11 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/12 17:21:09 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_parlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = (char*)malloc(sizeof(dest) * i + 1);
	if (!dest)
		return (dest);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (src);
}

t_stock_par			ft_tab_to_struct(char *par)
{
	t_stock_par stock_par;

	stock_par.size_param = ft_parlen(par);
	stock_par.str = par;
	stock_par.copy = ft_strdup(par);
	stock_par.tab = ft_split_whitespaces(par);
	return (stock_par);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*tab_par;
	t_stock_par	last;

	i = 0;
	tab_par = (t_stock_par*)malloc(sizeof(*tab_par) * (ac + 1));
	if (!tab_par)
		return (tab_par);
	while (i < ac)
	{
		tab_par[i] = ft_tab_to_struct(av[i]);
		i++;
	}
	last.size_param = 0;
	last.str = 0;
	last.copy = 0;
	last.tab = 0;
	tab_par[i] = last;
	return (tab_par);
}
