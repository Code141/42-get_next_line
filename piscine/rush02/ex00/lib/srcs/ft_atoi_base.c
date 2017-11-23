/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 15:03:31 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/05 17:15:29 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_base_atoi(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-'
					|| base[i] < 32 || base[i] == 127)
				return (-1);
			j++;
		}
		i++;
	}
	return (i);
}

int		ft_str_is_base(char *str, char *base)
{
	int i;
	int j;
	int size;

	size = ft_check_base_atoi(base);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] < 32 || str[i] == 127)
			return (0);
		while (base[j])
		{
			if (j == size)
				return (0);
			j++;
		}
		i++;
	}
	return ((str[0]) ? 1 : 0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int nb;
	int neg;
	int size;

	nb = 0;
	i = 0;
	size = ft_check_base_atoi(base);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	neg = (str[i] == '-') ? 1 : 0;
	i = (str[i] == '-' || str[i] == '+') ? i + 1 : i;
	if (!ft_str_is_base(str + i, base) || size < 2)
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i] != base[j])
			j++;
		nb = (nb * size) + j;
		i++;
	}
	return ((!neg) ? nb : -nb);
}
