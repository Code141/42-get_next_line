/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 13:59:49 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/21 22:13:49 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

#include "ex00/ft_create_elem.c"
#include "ex00/ft_list.h"

#include "ex01/ft_list_push_back.c"
#include "ex02/ft_list_push_front.c"
#include "ex03/ft_list_size.c"
#include "ex04/ft_list_last.c"
#include "ex05/ft_list_push_params.c"
#include "ex06/ft_list_clear.c"

void	ft_list_print(t_list *list)
{
	int i;
	int j;
	int size;

	if (!list->data)
		return ;
	size = ft_list_size(list);
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
		ft_putstr((char*)list->data);
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
	ft_putstr((char*)list->data);
/*-------------------------------------------------*/
	ft_putstr("\n\nList size : ");
	ft_putnbr(size);
}

int		main(int argc, char **argv)
{

	t_list	*list1;
	t_list	*list;
	
	char	*str;
	char	**tab_w;
	str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin blandit arcu erat, ut dapibus arcu posuere at. Vestibulum neque risus.";
	
	
	tab_w = ft_split_whitespaces(str);
	
	ft_joe_print_day(11, "LISTES_CHAINEES", 80);
    
	ft_joe_print_exo(0, "ft_create_elem();", 80);
	list1 = ft_create_elem(tab_w[2]);
	ft_list_print(list1);

	ft_joe_print_exo(1, "ft_list_push_back();", 80);
	ft_list_push_back(&list1, tab_w[3]);
	ft_list_print(list1);
	ft_putstr("\n\n");
	ft_list_push_back(&list1, tab_w[4]);
	ft_list_print(list1);


	ft_joe_print_exo(2, "ft_list_push_front();", 80);
	ft_list_push_front(&list1, tab_w[1]);
	ft_list_print(list1);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_list_push_front(&list1, tab_w[0]);
	ft_list_print(list1);

	ft_joe_print_exo(3, "ft_list_size();", 80);
	ft_putnbr(ft_list_size(list1));
	
	ft_joe_print_exo(4, "ft_list_last();", 80);
	ft_list_print(list1);
	ft_putstr("\n\nLast element of the list : \n");
	ft_list_print(ft_list_last(list1));
	
	ft_joe_print_exo(5, "ft_list_push_params();", 80);

	list = ft_list_push_params(argc, argv);
	if (list)
		ft_list_print(list);
	else
		ft_putstr("PLEASE, ARGV ME HARDER !");
	
	ft_joe_print_exo(6, "ft_list_clear();", 80);
	ft_list_clear(&list);
	if (list)
		ft_list_print(list);
	else
		ft_putstr("LIST FREE");
	return(0);
}
