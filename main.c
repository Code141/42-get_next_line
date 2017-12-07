/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:24:35 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/05 14:52:01 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
/*
   void    ft_list_print(t_list *list)
   {
   int i;
   int j;
   int size;

   i = 0;
   while (list->next)
   {
   j = 0;
   if (i != 0)
   {
   ft_putstr(" ");
   while (j < i-1)
   {
   ft_putstr("    ");
   j++;
   }
   ft_putstr("|->[");
   }
   else
   ft_putstr("[");
   ft_putnbr(i);
   ft_putstr("]->");
   ft_putstr((char*)list->content);
   ft_putchar('\n');
   list = list->next;
   i++;
   }
   j = 0;
   while (j < i-1)
   {
   ft_putstr("    ");
   j++;
   }
   ft_putstr(" |->[");
   ft_putnbr(i);
   ft_putstr("]->");
   ft_putstr((char*)list->content);
   ft_putchar('\n');
   }
 */
t_list	*ft_lst_join(t_list *alst, t_list *blist)
{
		t_list			*new_lst;

		new_lst = (t_list*)malloc(sizeof(*new_lst));
		if (!new_lst)
				return (NULL);
		new_lst->content_size = alst->content_size + blist->content_size;
		new_lst->content = ft_memalloc(new_lst->content_size);
		if (!new_lst->content)
				return (NULL);
		ft_memcpy(new_lst->content, alst->content, alst->content_size);
		ft_memcpy(new_lst->content + alst->content_size, blist->content, blist->content_size);
		new_lst->content_size = alst->content_size + blist->content_size;
		return (new_lst);
}

t_list	*ft_lst_compact(t_list *alst)
{
		t_list	*new;

		if (alst && alst->next)
		{
				new = ft_lst_join(alst, alst->next);
				if (!new)
						return (NULL);
				alst = alst->next;
		}
		else
		{
				return (NULL);
		}
		while (alst && alst->next)
		{
				new = ft_lst_join(new, alst->next);
				if (!new)
						return (NULL);
				alst = alst->next;
				new->next = alst->next;
		}
		return (new);
}

void	main2()
{
		int		fd_file1;
			int		fd_file2;
		//	int		fd_file3;
		char	*line;
		int		i;

		fd_file1 = open("file1", O_RDONLY);
			fd_file2 = open("file2", O_RDONLY);
		//	fd_file3 = open("file3", O_RDONLY);
		i = 0;
		while (i < 2)
		{	
		
				line = NULL;
				get_next_line(fd_file1, &line);
				ft_putstr("\n----------------------");
				ft_putnbr(fd_file1);
				ft_putstr("----------------------\n");
				if (line)
				{
					ft_putstr(line);
					free(line);
				}
				i++;
		}
		i = 0;
		while (i < 2)
		{	
		
				line = NULL;
				get_next_line(fd_file2, &line);
				ft_putstr("\n----------------------");
				ft_putnbr(fd_file2);
				ft_putstr("----------------------\n");
				if (line)
				{
					ft_putstr(line);
					free(line);
				}
				i++;
		}
		i = 0;
		while (i < 2)
		{	
		
				line = NULL;
				get_next_line(fd_file1, &line);
				ft_putstr("\n----------------------");
				ft_putnbr(fd_file1);
				ft_putstr("----------------------\n");
				if (line)
				{
					ft_putstr(line);
					free(line);
				}
				i++;
		}
		i = 0;
		while (i < 2)
		{	
		
				line = NULL;
				get_next_line(fd_file2, &line);
				ft_putstr("\n----------------------");
				ft_putnbr(fd_file2);
				ft_putstr("----------------------\n");
				if (line)
				{
					ft_putstr(line);
					free(line);
				}
				i++;
		}


}

int	main(void)
{
		main2();
		return (0);
}
