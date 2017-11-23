/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:29:44 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/11 18:56:55 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_char_tab(char **tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_swap_string_addrs(char **tab, char **tab_2)
{
	char *tmp;

	tmp = *tab_2;
	*(tab_2) = *tab;
	*(tab + 1) = tmp;
}

void	ft_sort_char_tab(char **tab, int size)
{
	int		i;
//	char	*tmp;
	int		sorted;

	i = 0;
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap_string_addrs(tab + i, tab + (i + 1));
				sorted = 0;
			}
			i++;
		}
		i = 0;
	}
}

int		main(int argc, char **argv)
{
	ft_sort_char_tab(argv + 1, argc - 1);
	ft_print_char_tab(argv + 1, argc - 1);
	return (0);
}
