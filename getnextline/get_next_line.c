/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:24:01 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/04 19:29:22 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

void    ft_list_print(t_list *list);

t_file	*get_dial(int fd, t_list **dial)
{
	t_file	file;
	t_list	*c_dial;
	t_list	*prev;
	t_list	*link;
	
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
	file.fd = fd;
	file.save = NULL;
	link = ft_lstnew((void*)(&file), sizeof(file));
	if (!link)
		return (NULL);
	if (!*dial)
		*dial = link;
	else
		prev->next = link;
	return (link->content);
}

int		read_more(t_file *file)
{
	int		ret;
	char	buf[BUFF_SIZE];

	while ((ret = read(file->fd, buf, BUFF_SIZE)) > 0)
	{
		ft_lst_push_back(&file->save, ft_lstnew(buf, ret));
		if (ft_memchr(buf, '\n', ret))
			return (1);
	}
	if (ret == 0)
		return (0);
	return (-1);
}

int		fill(t_file *file, char **line)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;
	t_list			*link;

	i = 0;
	size = 0;
	link = file->save;
	while (((char*)link->content)[i] != '\n')
	{
		if (i == link->content_size)
		{
			link = link->next;
			size += i;
			i = 0;
		}
		i++;
	}
	size += i;
	printf("{%d}\n", size);



/*	
	*line = (char*)malloc(sizeof(*link) * (i + 1));
	link = file->save;
	while (((char*)link->content)[i] != '\n')
	{
		(*line)[j] = ((char*)link->content)[i];
		if (i == link->content_size)
		{
			link = link->next;
			i = 0;
		}
		i++;
	}
*/	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*dial;
	t_file			*file;

	file = get_dial(fd, &dial);
	if (!file)
		return (-1); // allocation probleme dans dial

	printf("-| LOADED FD = %d |----------------\n", file->fd);
	
	if (!file->save || !ft_memchr(file->save->content, '\n', file->save->content_size))
		read_more(file);

	fill(file, line);
	
/*-------------------------------------------------------------------------*/	

	ft_list_print(file->save);

	t_list	*file_l;
	t_list	*save;
	int		i;
	
	file_l = dial;
	while (file_l)
	{
		file = (t_file*)(file_l->content);
		printf("[%d]\n", file->fd);
		save = file->save;
		while (save)
		{
			i = 0;
			while (i < save->content_size)
					ft_putchar(((char*)save->content)[i++]);
			save = save->next;
		}
		file_l = file_l->next;
	}
	return (0);
}
