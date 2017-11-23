/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 12:13:27 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 18:12:47 by sboilard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H
# include <unistd.h>
# include "context.h"
# include "zone.h"
# include "ft_heap.h"

int				ft_atoi(char *str);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
char			*ft_strcat(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
char			*ft_strncat(char *dest, char *src, int nb);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
void			ft_putchar(char c);
void			ft_print(t_meta *meta, t_heap *heap);

#endif
