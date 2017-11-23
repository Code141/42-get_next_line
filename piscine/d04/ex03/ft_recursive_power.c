/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 20:46:21 by gelambin          #+#    #+#             */
/*   Updated: 2017/08/30 19:54:54 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int r;

	r = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (r * ft_recursive_power(nb, power - 1));
}
