/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 22:38:47 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/18 15:54:40 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_print_line(int x, char *pattern, char *gen_str)
{
	int i;

	i = 0;
	gen_str[i++] = pattern[0];
	while (x-- > 2)
		gen_str[i++] = pattern[1];
	if (x)
		gen_str[i++] = pattern[2];
	gen_str[i] = '\n';
}

int		rush(int x, int y, int id, char *gen_str)
{
	char	*pattern;
	int		i;

	i = 0;
	pattern = "o-o| |o-o/*\\* *\\*/ABAB BCBCABCB BABCABCB BCBA";
	if (x > 0 && y > 0)
	{
		ft_print_line(x, pattern + (9 * id), gen_str + i++);
		while (y-- > 2)
			ft_print_line(x, pattern + (9 * id) + 3, gen_str + ((x + 1) * i++));
		if (y)
			ft_print_line(x, pattern + (9 * id) + 6, gen_str + ((x + 1) * i++));
	}
	gen_str[((x + 1) * i)] = '\0';
	return (0);
}
