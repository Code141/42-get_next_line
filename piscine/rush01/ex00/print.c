/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 14:46:42 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/10 21:35:33 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

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

void	ft_print_sudo(char **tab)
{	
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			ft_putchar(tab[x][y]);
			ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
