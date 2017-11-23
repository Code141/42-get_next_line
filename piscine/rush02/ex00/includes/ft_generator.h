/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generator.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:25:43 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/16 17:40:41 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GENERATOR_H
# define FT_GENERATOR_H
# include <stdlib.h>
# include "../includes/libft.h"

void	ft_gen_rush(int x, int y, char *input_str);
int		rush(int x, int y, int id, char *gen_str);
void	ft_show(int x, int y, int id, int first);

#endif
