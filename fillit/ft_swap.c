/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:18:47 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/27 18:42:18 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(unsigned int *a, unsigned int *b)
{
	unsigned int	t;

	t = *a;
	*a = *b;
	*b = t;
}
