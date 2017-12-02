/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:24:35 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/02 21:23:22 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

void    ft_list_print(t_list *list)
{
	int i;
	int j;
	int size;

	i = 0;
	while (list->next)
	{
		j = 0;
		if (i != 0)
		{
			ft_putstr(" ");
			while (j < i-1)
			{
				ft_putstr("    ");
				j++;
			}
			ft_putstr("|->[");
		}
		else
			ft_putstr("[");
		ft_putnbr(i);
		ft_putstr("]->");
		ft_putstr((char*)list->content);
		ft_putchar('\n');
		list = list->next;
		i++;
	}
	j = 0;
	while (j < i-1)
	{
		ft_putstr("    ");
		j++;
	}
	ft_putstr(" |->[");
	ft_putnbr(i);
	ft_putstr("]->");
	ft_putstr((char*)list->content);
	ft_putchar('\n');
}

int	main(void)
{
	int		fd_file1;
	int		fd_file2;
	int		fd_file3;
	char	**line;
	int		i;

	fd_file1 = open("file1", O_RDONLY);
	fd_file2 = open("file2", O_RDONLY);
	fd_file3 = open("file3", O_RDONLY);
	if (fd_file1 < 1 || fd_file2 < 1 || fd_file3 < 1)
		return (1);

	get_next_line(fd_file1, line);	
	
	   get_next_line(fd_file2, line);

	   get_next_line(fd_file3, line);


	   get_next_line(fd_file1, line);	
	   get_next_line(fd_file1, line);	
	   get_next_line(fd_file1, line);	


	return (0);
}
