/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:24:01 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/28 19:14:52 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

t_file	*get_dial(int fd, t_list **dial)
{
	t_file *file;
	t_list *c_dial;

	if (!*dial)
	{
		file = (t_file*)malloc(sizeof(*file));
		*dial = ft_lstnew(file, 1);
		((t_file*)((*dial)->content))->fd = fd;
	}
	c_dial = *dial;
	while (c_dial && ((t_file*)(c_dial->content))->fd != fd)
	{
		if (!c_dial->next)
		{
			file = (t_file*)malloc(sizeof(*file));
			c_dial->next = ft_lstnew(file, 1);
			((t_file*)(c_dial->content))->fd = fd;
			return ((t_file*)(c_dial->content));
		}
		c_dial = c_dial->next;
	}
	return ((t_file*)(c_dial->content));
}

void	read_more(t_file *file)
{
	int		ret;
	int		i;
	int		start;
	char	buf[BUFF_SIZE];

	i = 0;
	ret = read(file->fd, buf, BUFF_SIZE);
	while (i < ret)
	{
		printf("%c", buf[i]);
		// concatene
		i++;
	}
}

int		get_next_line(const int fd, char **line)
{
	static	t_list *dial;
	t_file	*file;

	file = get_dial(fd, &dial);
	read_more(file);
	//	if (!fd_dial)
	return (0);
}
