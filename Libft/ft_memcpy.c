/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:02:28 by nilamber          #+#    #+#             */
/*   Updated: 2024/04/28 15:53:44 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (n)
	{
		while (--n)
			((char *)dest)[n] = ((char *)src)[n];
		((char *)dest)[n] = ((char *)src)[n];
	}
	return (dest);
}
