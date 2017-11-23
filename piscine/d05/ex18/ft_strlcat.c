/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 16:31:07 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/13 16:28:37 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int d_len;
	unsigned int i_d_len;
	unsigned int s_len;
	unsigned int i_s_len;

	d_len = 0;
	s_len = 0;
	i_d_len = ft_strlen(dest);
	i_s_len = ft_strlen(src);
	if (size)
	{
		d_len = i_d_len;
		while (src[s_len] && d_len < size - 1)
		{
			dest[d_len] = src[s_len];
			d_len++;
			s_len++;
		}
		dest[d_len] = '\0';
	}
	if (size < i_d_len)
		return (i_s_len - size);
	return (i_d_len + i_s_len);
}
