/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 08:31:51 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 22:42:12 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int nb;

	nb = 0;
	while (*str >= '0' && *str <= '9')
		nb = (nb * 10) + (*str++ - '0');
	return ((!*str) ? nb : 0);
}