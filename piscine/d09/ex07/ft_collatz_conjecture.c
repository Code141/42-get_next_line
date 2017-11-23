/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 11:42:03 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/08 16:43:29 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int fly;

	fly = 1;
	if (base % 2 == 0)
		fly += ft_collatz_conjecture(base / 2);
	else
		fly += ft_collatz_conjecture(base * 3 + 1);
	return (fly);
}
