/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joe_print_exo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 10:13:13 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/15 16:04:52 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../colors.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);

void	ft_joe_print_day(int nb, char *name, int size)
{
	int i;
	ft_putstr(RED);
	i = 0;
	ft_putchar('\n');
	while (i < size)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
	i = 0;
	while (i < size)
	{
		ft_putchar('-');
		i++;
	}


	ft_putstr("\n- ");

	ft_putstr(RESET);
	ft_putstr("D ");
	if (nb < 10)
		ft_putchar('0');
	ft_putnbr(nb);
	ft_putchar('	');
	ft_putstr(GREEN);
	ft_putstr(name);
	i = 0;
	ft_putstr(RED);
	while (i < size - 9 - ft_strlen(name))
	{
		ft_putchar(' ');
		i++;
	}
	ft_putstr("-\n");
	i = 0;
	while (i < size)
	{
		ft_putchar('-');
		i++;
	}
	ft_putstr("\n");
	i = 0;
	while (i < size)
	{
		ft_putchar('-');
		i++;
	}
	
	ft_putstr("\n");

	ft_putstr(RESET);
}
