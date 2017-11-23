/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 12:24:53 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/08 16:04:55 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_total_params_size(int argc, char **argv)
{
	int size;
	int i;
	int j;

	argv++;
	argc -= 1;
	size = 0;
	i = 0;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		size += j + 1;
		i++;
	}
	return (size);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		size;
	char	*str;
	int 	tab_len;
	int 	sep_len;

	i = 0;
	tab_len = 0;
	sep_len = 0;
	while (sep[sep_len])
		sep_len++;

	while (tab[tab_len])
		tab_len++;
	size = ft_total_params_size(tab_len, tab);
	str = (char*)malloc(sizeof(*str) * (size + (sep_len * tab_len)));
	if (!str)
		return (str);
	while (i < tab_len)
	{
		ft_strcat(str, tab[i]);
		if(i < tab_len - 1 )
			ft_strcat(str, sep);
		i++;
	}
	return(str);
}
