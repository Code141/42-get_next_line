/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input_priv.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboilard <sboilard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 19:46:22 by sboilard          #+#    #+#             */
/*   Updated: 2017/09/17 22:13:09 by sboilard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_INPUT_PRIV_H
# define READ_INPUT_PRIV_H

# define BUFFER_SIZE 64

typedef struct	s_read
{
	size_t	size;
	char	*buff;
}				t_read;

# define PEEK_READ(l) (*(t_read *)list->data)

#endif
