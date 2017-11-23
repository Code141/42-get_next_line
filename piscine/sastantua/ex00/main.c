/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 18:43:28 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/03 18:44:29 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sastantua(int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 0;
	nb = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	if (neg)
		nb = -nb;
	return (nb);
}

int		main(int argc, char **argv)
{
	int	size;

	if (argc > 1)
		argv++;
	argc--;
	size = (argc) ? ft_atoi(argv[0]) : 0;
	sastantua(size);
	return (0);
}
