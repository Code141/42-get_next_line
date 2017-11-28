/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:24:35 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/28 19:12:50 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

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
	printf("\n|%d|\n", fd_file1);
	get_next_line(fd_file1, line);
	get_next_line(fd_file1, line);
	get_next_line(fd_file1, line);
	get_next_line(fd_file1, line);
	printf("\n|%d|\n", fd_file2);
	get_next_line(fd_file2, line);
	printf("\n|%d|\n", fd_file3);
	get_next_line(fd_file3, line);
	printf("\n|%d|\n", fd_file1);
	get_next_line(fd_file1, line);
	return (0);
}
