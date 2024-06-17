/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:22:00 by nilamber          #+#    #+#             */
/*   Updated: 2024/04/30 21:29:39 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*spy;

	spy = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!spy)
		return (0);
	i = -1;
	while (str[++i])
		spy[i] = str[i];
	spy[i] = 0;
	return (spy);
}
