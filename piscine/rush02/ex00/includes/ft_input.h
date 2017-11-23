/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:22:01 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/16 17:42:27 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INPUT_H
# define FT_INPUT_H
# include "../includes/libft.h"
# include <fcntl.h>
# include <stdlib.h>

void	ft_get_size(int *x, int *y, char *input_str);
char	*ft_read();

#endif
