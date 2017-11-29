/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:37:51 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/25 19:45:17 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "input.h"
#include "context.h"

t_fillit_ctx	CTX;

int	main(int argc, char **argv)
{
	argc--;
	argv++;
	if (argc == 1)
		get_input(*argv);
	else
		ft_putendl("error");
	return (0);
}
