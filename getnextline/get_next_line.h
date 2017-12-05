/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:23:38 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/05 12:41:12 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# define BUFF_SIZE 20000

typedef struct	s_file
{
	int		fd;
	t_list	*save;
	char	*line;
}				t_file;

int				get_next_line(const int fd, char **line);

#endif
