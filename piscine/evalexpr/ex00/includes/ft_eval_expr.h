/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 21:23:23 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/17 18:48:42 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#ifndef FT_EVAL_EXPR_H
# define FT_EVAL_EXPR_H
# include <unistd.h>
# include <stdlib.h>
# include "../includes/libft.h"

int				eval_expr(char *str);
char			**ft_explode(char *str);
typedef struct	s_op	t_op;
struct			s_op
{
	char 	op;
	int		a;
	int		b;
	t_op	*child_a;
	t_op	*child_b;
};

#endif
