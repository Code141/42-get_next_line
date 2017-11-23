/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 11:23:57 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/08 15:53:29 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	free((char*)**factory);
	free((char**)*factory);
	free((char***)factory);
}
