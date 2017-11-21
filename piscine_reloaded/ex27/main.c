/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:54:26 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/08 10:39:16 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_display_file(char *file_name)
{
	int		fd;
	char	c;

	fd = open(file_name, O_RDONLY);
	while (read(fd, &c, 1) > 0)
		ft_putchar(c);
}

int		main(int argc, char **argv)
{
	argc--;
	argv++;
	if (!argc)
		ft_putstr("File name missing.\n");
	else if (argc == 1)
		ft_display_file(*argv);
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
