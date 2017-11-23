/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 13:42:25 by gelambin          #+#    #+#             */
/*   Updated: 2017/08/30 19:55:53 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;
	int prime;

	prime = 1;
	i = 2;
	if (nb < 2)
		return (2);
	while (i < nb)
	{
		if (!(nb % i))
			prime = 0;
		i++;
	}
	if (prime == 0)
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
