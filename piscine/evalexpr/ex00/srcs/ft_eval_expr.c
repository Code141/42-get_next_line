/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 18:47:30 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/17 19:04:29 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_eval_expr.h"

void		ft_putstrexp(char **exp)
{
	int i;

	i = 0;
	while (exp[i])
	{
		ft_putstr(exp[i]);
		ft_putchar(' ');
		i++;
	}
}

int		ft_is_op(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	return (0);	
}

int		ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);	
}

int		ft_is_parenthesis(char c)
{
	if (c == '(')
		return (1);
	if (c == ')')
		return (-1);
	return (0);	
}

int ft_exp_length(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_is_op(str[i]) || ft_is_num(str[i] || ft_is_parenthesis(str[i])))
			count++;
		i++;
	}
	return (count);
}

int ft_exp_elements(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_is_op(str[i]) || ft_is_num(str[i] || ft_is_parenthesis(str[i])))
			count++;
		i++;
	}
	return (count);
}

t_op	*ft_eval(char **exp, int cursor, t_op *parent)
{
	(void)exp;
	(void)parent;
	int		i;
	t_op	*node;
	
	ft_putstr("\nNew node : ");
	ft_putnbr(cursor);
	node = (t_op*)malloc(sizeof(t_op));
	i = cursor;
	while (exp[i]) //---------
	{
		if (ft_is_op(exp[i][0])
			&& (exp[i - 1][2] || exp[i + 1][0]))
		{
			node->op = exp[i][0];
			if (ft_is_num(exp[i - 1][0]))
			{
				node->a = ft_atoi(exp[i - 1]);
				exp[i - 1][0] = '.';
			}
			else
				node->child_a = ft_eval(exp, i - 1, node);
			if (ft_is_num(exp[i - 1][0]))
			{
				node->a = ft_atoi(exp[i-1]);
				exp[i + 1][0] = '.';
			}
			else
				node->child_b = ft_eval(exp, i + 1, node);
		}
		i++;
	}
	return (node);
}

int	eval_expr(char *str)
{
	char	**tab;
	t_op	node;
	tab = ft_explode(str);
	ft_eval(tab, 0, &node);
//	ft_print_words_tables(tab);	
	ft_putstr("\n--------------------------------\n");
	return (0);
}
