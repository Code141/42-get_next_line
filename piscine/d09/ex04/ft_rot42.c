/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 08:53:06 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/08 09:50:38 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_rot_char(char c, int nb)
{
	int i;

	i = c;
	if (i >= 'a' && i <= 'z')
	{
		i += nb;
		while (i > 'z')
			i -= 26;
	}
	if (i >= 'A' && i <= 'Z')
	{
		i += nb;
		while (i > 'Z')
			i -= 26;
	}
	return (i);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_rot_char(str[i], 42);
		i++;
	}
	return (str);
}
