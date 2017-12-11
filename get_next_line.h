/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:23:38 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/11 12:49:41 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/includes/libft.h"
# ifndef BUFF_SIZE
#  define BUFF_SIZE 1
# endif

typedef struct	s_file
{
	int				fd;
	int				status;
	t_list			*save;
	char			*buf;
}				t_file;

int				get_next_line(const int fd, char **line);

#endif
