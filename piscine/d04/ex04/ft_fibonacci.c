/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 10:17:22 by gelambin          #+#    #+#             */
/*   Updated: 2017/08/30 11:17:59 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0 || index > 46)
		return (-1);
	if (index < 1)
		return (0);
	if (index < 3)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
