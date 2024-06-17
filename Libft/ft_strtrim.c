/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:37:13 by nilamber          #+#    #+#             */
/*   Updated: 2024/05/13 16:39:17 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sh(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	int		j;

	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	if (!set || !*set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (sh(s1[i], set))
		++i;
	while (j > i && sh(s1[j], set))
		--j;
	str = ft_substr(s1, i, j - i + 1);
	if (!str)
		return (NULL);
	return (str);
}
