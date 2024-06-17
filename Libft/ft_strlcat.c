/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:36:56 by nilamber          #+#    #+#             */
/*   Updated: 2024/04/30 14:50:44 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	t;

	t = (size_t)(ft_strlen(dst) + ft_strlen(src));
	if (size == 0)
		return (ft_strlen(src));
	if (size < (size_t)ft_strlen(dst))
		return ((size_t)ft_strlen(src) + size);
	i = 0;
	if (size && src && dst)
	{
		j = 0;
		while (dst[i])
			i++;
		while (i < (size - 1) && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	dst[i] = 0;
	return (t);
}
