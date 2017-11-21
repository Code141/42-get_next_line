/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:25:43 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/07 19:20:09 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_str_table(char **table, int length)
{
	int		i;
	char	*tmp;

	i = 0;
	while (i < length - 1)
	{
		if (ft_strcmp(table[i], table[i + 1]) > 0)
		{
			tmp = table[i];
			table[i] = table[i + 1];
			table[i + 1] = tmp;
			if (i > 0)
				i -= 2;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	argc--;
	argv++;
	i = 0;
	ft_sort_str_table(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
