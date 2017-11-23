/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 18:14:58 by alakehal          #+#    #+#             */
/*   Updated: 2017/09/20 18:04:11 by sboilard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "io.h"
#include "ft_list.h"
#include "read_input_priv.h"
#include "read_input.h"
#include "context.h"

static char	*join_list(t_list *list, size_t length)
{
	char	*str;
	t_list	*next;
	size_t	i;

	str = (char*)malloc(length + 1);
	i = 0;
	while (list != NULL)
	{
		ft_strncpy(str + i, PEEK_READ(list).buff, PEEK_READ(list).size);
		i += PEEK_READ(list).size;
		next = list->next;
		free(PEEK_READ(list).buff);
		free(list->data);
		free(list);
		list = next;
	}
	str[i] = '\0';
	return (str);
}

static void	push_read(t_list **list, char *buff, int size)
{
	t_read	*this_read;

	this_read = (t_read*)malloc(sizeof(t_read));
	this_read->buff = buff;
	this_read->size = size;
	ft_list_push_back(list, this_read);
}

char		*read_input(int fd)
{
	t_list	*list;
	char	*buff;
	ssize_t	read_size;
	size_t	length;

	list = NULL;
	buff = (char*)malloc(BUFFER_SIZE);
	length = 0;
	while ((read_size = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		length += read_size;
		push_read(&list, buff, read_size);
		buff = (char*)malloc(BUFFER_SIZE);
	}
	free(buff);
	return (join_list(list, length));
}
