/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:24:01 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/28 19:30:29 by gelambin         ###   ########.fr       */
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

int		read_more(t_file *file)
{
	int		ret;
	int		i;
	int		start;
	char	buf[BUFF_SIZE + 1];

	// CHECKER SI SAUVEGARDE DE FIN
	i = 0;
	while ((ret = read(file->fd, buf, BUFF_SIZE)) > 0)
	{
		buf[BUFF_SIZE] = '\0';
		printf("- %s -", buf);
		while (i < ret)
		{
			if (buf[i] == '\n')
			{
				buf[i] = '\0';
				// FREEline
				file->line = ft_strjoin(file->line, buf);
			//	if (i != ret - 1)
					//sav buf[i] -> jusqu'a ret -1
			}
			i++;
		}
	}
	if (ret == 0)
		return (0);
	return (-1);
}

int		fill(t_file *file, char **line)
{
	// Concatene les maillions necesaires
	// a l'obtention d'une ligne
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static	t_list *dial;
	t_file	*file;
	int		status;
	file = get_dial(fd, &dial);

	status = read_more(file);
	if (status > 0)
		fill(file, line);
	return (status);
}
