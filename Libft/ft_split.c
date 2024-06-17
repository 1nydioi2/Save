/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:59:11 by nilamber          #+#    #+#             */
/*   Updated: 2024/05/05 15:03:32 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char c, const char *s)
{
	int	j;
	int	i;

	if (!s || !*s)
		return (0);
	j = 0;
	i = 0;
	while ((size_t)i < ft_strlen(s))
	{
		if (s[i] != c && s[i])
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i[2];
	int		j;
	char	**array;

	j = ft_count_words(c, s);
	array = malloc(sizeof(char *) * (j + 1));
	if (!array)
		return (0);
	i[1] = 0;
	while (j > 0)
	{
		while (s[i[1]] == c)
			i[1]++;
		i[0] = i[1];
		while (s[i[0]] != c && s[i[0]])
			i[0]++;
		array[ft_count_words(c, s) - j] = ft_substr(s, i[1], ((i[0] - i[1])));
		while (s[i[0]] == c)
			i[0]++;
		while (s[i[1]] != c && s[i[1]])
			i[1]++;
		j--;
	}
	array[ft_count_words(c, s)] = NULL;
	return (array);
}
