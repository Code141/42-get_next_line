/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:54:37 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/19 18:53:51 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_INPUT_H
# define FT_CHECK_INPUT_H
# include <fcntl.h>
# include <stdlib.h>
# include "../includes/context.h"

int		ft_get_meta(char *input, t_meta *meta);
void	ft_get_size(int *x, int *y, char *input_str);

#endif
