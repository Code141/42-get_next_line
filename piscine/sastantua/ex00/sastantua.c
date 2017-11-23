/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 14:59:38 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/03 18:39:38 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_calcule_base_level(int level)
{
	int base;
	int add;

	add = 0;
	base = 0;
	if (level != 0)
	{
		add = ((level % 2 + level / 2) + 1 + 3 + level) * 2;
		base += ft_calcule_base_level(level - 1);
	}
	else
		base = 5;
	return (base + add);
}

void	ft_print_blank(int line, int level, int size)
{
	int blank;
	int base_max;
	int base_level;

	blank = 0;
	base_max = ft_calcule_base_level(size - 1);
	base_level = ft_calcule_base_level(level);
	blank += (level + 2) - (line);
	blank += (base_max / 2 - base_level / 2);
	while (blank > 0)
	{
		ft_putchar(' ');
		blank--;
	}
}

void	ft_print_line(int line_size, int line, int level, int size)
{
	int i;
	int door;

	i = 0;
	door = (size % 2) ? size : size - 1;
	while (i < line_size)
	{
		if (level < size - 1)
			ft_putchar('*');
		else if (size > 4 && (line == (level + 3) - door / 2 - 1)
			&& i == (line_size + door - 3) / 2)
			ft_putchar('$');
		else if ((line >= (level + 3) - door)
			&& (i >= (line_size - door) / 2)
			&& i < (line_size + door) / 2)
			ft_putchar('|');
		else
			ft_putchar('*');
		i++;
	}
}

void	sastantua(int size)
{
	int level;
	int line;
	int level_size;
	int line_size;

	if (size < 0)
		return ;
	level = 0;
	while (level < size)
	{
		level_size = ft_calcule_base_level(level) - (level + 3) * 2;
		line_size = level_size;
		line = 0;
		while (line < level + 3)
		{
			line_size += 2;
			ft_print_blank(line, level, size);
			ft_putchar('/');
			ft_print_line(line_size, line, level, size);
			ft_putchar('\\');
			ft_putchar('\n');
			line++;
		}
		level++;
	}
}
