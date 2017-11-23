/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 21:31:34 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/10 22:14:40 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SODOKU_H
# define SODOKU_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(char *str);
char	**ft_allocate_tab(void);
void	ft_reverse_xy(char **dest, char **src);
int		ft_input_check(char **tab);
void	ft_backtrack(char **tab, int index, int *count, char **save);
void	ft_save(char **dest, char **src);
void	ft_print_sudo(char **tab);
int		ft_try_number(char **tab, int x, int y);

#endif

