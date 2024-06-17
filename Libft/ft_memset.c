/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:48:01 by nilamber          #+#    #+#             */
/*   Updated: 2024/04/28 17:50:14 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	if (n)
	{
		while (--n)
			((char *)str)[n] = (unsigned char)c;
		((char *)str)[n] = (unsigned char)c;
	}
	return (str);
}
