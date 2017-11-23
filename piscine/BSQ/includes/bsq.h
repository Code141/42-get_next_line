/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 20:52:47 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 12:02:10 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include "main.h"
# include "context.h"
# include "ft_heap.h"
# include "zone.h"

void	ft_bsq(char **files, int nb_files);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
