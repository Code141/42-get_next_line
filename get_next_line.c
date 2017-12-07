/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:24:01 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/05 14:52:53 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

void    ft_list_print(t_list *list);
t_list	*ft_lst_join(t_list *alst, t_list *blist);
t_list	*ft_lst_compact(t_list *alst);

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


void	read_more(t_file *file)
{
	int		ret;
	char	buf[BUFF_SIZE];
	t_list	*new;

	while ((ret = read(file->fd, buf, BUFF_SIZE)) > 0)
	{
		ft_lst_push_back(&file->save, ft_lstnew(buf, ret));
		if (ft_memchr(buf, '\n', ret)) // OR EOF
		{
			if (file->save && file->save->next)
			{
				new = ft_lst_fold(file->save);
				ft_lstdel(&file->save, &ft_memdel);
				file->save = new;
			}
			file->status = 1;
			return ;
		}
	}
	if (ret == 0)
		file->status = 0;
	file->status = -1;
}

int		send(t_file *file, char **line)
{
	int		i;
	char	*str;
	t_list	*new;

	str = ((char*)(file->save->content));
	i = 0;
	while (str[i] != '\n')
		i++;
	*line = (char*)malloc(sizeof(char) * (i + 1));
	if (!line)
		return (-1);
	i = 0;
	while (str[i] != '\n')
	{
		(*line)[i] = str[i];
		i++;
	}
	(*line)[i] = '\0';
	new = ft_lstnew(((char*)(file->save->content)) + i + 1, file->save->content_size - i - 1);
	ft_lstdel(&file->save, &ft_memdel);
	file->save = new;
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*dial;
	t_file			*file;

	if (fd < 0)
		return (-1);
	file = get_dial(fd, &dial);
	if (!file)
		return (-1); // allocation probleme dans dial
	if (!file->save || !ft_memchr(file->save->content, '\n', file->save->content_size))
		read_more(file);
	if (file->save && file->status == 1)
		send(file, line);
	return (file->status);
}
