/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:50:16 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/08 16:06:28 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int a;

	a = 0;
	while (argc > 1)
	{
		a = (!ft_strcmp(argv[argc - 1], "president")) ? a + 1 : a;
		a = (!ft_strcmp(argv[argc - 1], "attack")) ? a + 1 : a;
		a = (!ft_strcmp(argv[argc - 1], "Bauer")) ? a + 1 : a;
		argc--;
	}
	if (a)
		ft_putstr("Alert!!!\n");
	return (0);
}
