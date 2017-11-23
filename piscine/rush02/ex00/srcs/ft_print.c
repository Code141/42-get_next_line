/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:06:48 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/16 17:13:12 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_print.h"

void	ft_show(int x, int y, int id, int first)
{
	if (!first)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr(id);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}
