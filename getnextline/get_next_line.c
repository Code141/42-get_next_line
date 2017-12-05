/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:24:01 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/05 12:49:59 by gelambin         ###   ########.fr       */
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


int		read_more(t_file *file)
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
				new = ft_lst_compact(file->save);
				// FREE FILE SAVE
				file->save = new;
			}
			file->line = (char*)(file->save->content);
			return (1);
		}
	}
	if (ret == 0)
		return (0);
	return (-1);
}

int		fill(t_file *file, char **line)
{
	return (0);
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

	int				i;
	char			*str;

	if (file->line)
		str = file->line;
	else
		str = (char*)(file->save->content);
	i = 0;
	while (str[i] != '\n')
		i++;
	line = (char**)malloc(sizeof(*line) * (i + 1));
	if (!line)
		return (-1);
	i = 0;
	while (str[i] != '\n')
	{
		(*line)[i] = str[i];
		i++;
	}	
		
		
		
		
	//	fill(file, line);

/*-------------------------------------------------------------------------*/	

//	ft_list_print(file->save);
/*
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
*/	return (0);
}
