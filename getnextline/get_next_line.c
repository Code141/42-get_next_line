/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:24:01 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/28 17:28:43 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

t_file	*get_dial(int fd)
{
	t_file *file;
	t_list *c_dial;

	c_dial = fd_dial;
	while (c_dial && ((t_file*)(c_dial->content))->id != fd)
	{
		if (!c_dial->next)
		{
			file = (t_file*)malloc(sizeof(*file));
			c_dial->next = ft_lstnew(file, 1);
			((t_file*)(c_dial->content))->id = fd;
		}
		c_dial = fd_dial->next;
	}
	return (c_dial->content);
}

int	get_next_line(const int fd, char **line)
{
	int		ret;
	int		i;
	char	buf[BUFF_SIZE];
	t_file	*dial;

	dial = get_dial(fd);
/*	ret = read(fd, buf, BUFF_SIZE);
	while (buf[i] > 0 && i < ret)
	{
		// concatene
		if (buf[i] == '\n')
		{
			// Store end
			break;
		}
		i++;
	}

*/	return (0);
}
