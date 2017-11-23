/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 22:38:47 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/03 19:37:13 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, char *pattern)
{
	ft_putchar(pattern[0]);
	while (x-- > 2)
		ft_putchar(pattern[1]);
	if (x)
		ft_putchar(pattern[2]);
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	char *pattern;

	pattern = "/*\\* *\\*/";
	if (x > 0 && y > 0)
	{
		ft_print_line(x, pattern);
		while (y-- > 2)
			ft_print_line(x, pattern + 3);
		if (y)
			ft_print_line(x, pattern + 6);
	}
	return (0);
}
