/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:46:56 by nilamber          #+#    #+#             */
/*   Updated: 2024/05/04 18:44:05 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ilen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int		i;
	char	*s;

	if (!nb)
		return (ft_strdup("0"));
	i = 0;
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	s = malloc(sizeof(char) * (ft_ilen(nb) + 1));
	if (!s)
		return (0);
	i = ft_ilen(nb);
	s[ft_ilen(nb)] = 0;
	if (nb < 0)
	{
		nb = -nb;
		s[0] = '-';
	}
	while (nb)
	{
		s[--i] = ((nb % 10) + 48);
		nb /= 10;
	}
	return (s);
}
