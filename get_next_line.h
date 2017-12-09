/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:23:38 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/09 18:48:00 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# ifndef BUFF_SIZE
#  define BUFF_SIZE 1
# endif

typedef struct	s_file
{
	int				fd;
	int				status;
	t_list			*save;
}				t_file;

int				get_next_line(const int fd, char **line);

#endif
