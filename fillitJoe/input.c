/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:11:57 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/25 20:11:59 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	pieces_encode(char *piece)
{
//	CTX.nb++;
/*	if (piece)
		CTX.piece[CTX.nb_p] = 0;
*/
	return (1);
}

int	get_input(char *filename)
{
	int		fd;
	int		ret;
	char	piece[20];
	char	buff[1];
	
	fd = open(filename, O_RDONLY);
	if (fd)
		while(read(fd, piece, 20) > 0)
			if (pieces_encode(piece) && read(fd, buff, 1))
				if (buff[0] != '\n')
					return (0);
	if (ret != 0)
		return (0);
	return (1);
}
