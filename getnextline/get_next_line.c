/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:24:01 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/02 21:53:49 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

void    ft_list_print(t_list *list);

t_file	*get_dial(int fd, t_list **dial)
{
	t_file *file;
	t_list *c_dial;
	t_list *prev;

	c_dial = *dial;
	prev = c_dial;
	while (c_dial)
		if (((t_file*)(c_dial->content))->fd == fd)
			return ((t_file*)(c_dial->content));
		else
		{
			prev = c_dial;
			c_dial = c_dial->next;
		}
	file = (t_file*)malloc(sizeof(*file));
	file->fd = fd;
	file->save = (t_list*)malloc(sizeof(t_list));
	file->save = NULL;
	if (!*dial)
		*dial = ft_lstnew(file, 1);
	else
		prev->next = ft_lstnew(file, 1);
	return (file);
}

int		read_more(t_file *file)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	t_list	*new;
	t_list	*list;

	new = NULL;	
	list = NULL;	

	while ((ret = read(file->fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';

		new = ft_lstnew(buf, ret);
		ft_putstr("\n----\n");
		ft_putstr(buf);
		ft_putstr("\n----\n");
	
		ft_lst_push_back(&list, new);


		if (ft_memchr(buf, '\n', ret))
		{
			file->save = list;
			return (1);
		}

	}
	if (ret == 0)
		return (0);
	return (-1);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*dial;
	t_file			*file;

	file = get_dial(fd, &dial);
	printf("\n---|%d|------------------\n", file->fd);

	read_more(file);
//	ft_list_print(file->save);

	//	fill(file, line);


	return (0);
}
