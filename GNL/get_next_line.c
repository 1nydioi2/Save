/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <nilamber@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:11:10 by nilamber          #+#    #+#             */
/*   Updated: 2024/05/20 19:41:37 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*spy;

	spy = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!spy)
		return (0);
	if (!str)
		return (NULL);
	i = -1;
	while (str[++i])
		spy[i] = str[i];
	spy[i] = 0;
	return (spy);
}

char	*son(const char *eau, char *pepin, int rv)
{
	char	*raisin;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < rv && eau[i])
	{
		if (eau[i] == '\n')
		{
			raisin = ft_substr(eau, 0, i + 1);
			while (++i < rv)
			{
				pepin[j] = eau[i];
				j++;
			}
			pepin[j] = 0;
			return (raisin);
		}
		i++;
	}
	ft_bzero(pepin, BUFFER_SIZE);
	raisin = ft_strdup(eau);
	return (raisin);
}

char	*free_son(char *liquid, char *eau, char *pepin, int rv)
{
	char	*new_liquid;
	char	*sony;

	sony = son(eau, pepin, rv);
	new_liquid = ft_strjoin(liquid, sony);
	free(sony);
	free(liquid);
	if (!*new_liquid)
	{
		free(new_liquid);
		return (NULL);
	}
	return (new_liquid);
}

int	itn(char *carbone, int rv)
{
	int	i;

	i = 0;
	while (i < rv && carbone && carbone[i])
	{
		if (carbone[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char		eau[BUFFER_SIZE + 1];
	char		*raisin;
	static char	pepin[BUFFER_SIZE + 1];
	int			rv;

	eau[BUFFER_SIZE] = 0;
	rv = 1;
	if (itn(pepin, ft_strlen(pepin)))
	{
		raisin = son(pepin, pepin, ft_strlen(pepin));
		return (raisin);
	}
	raisin = NULL;
	if (*pepin)
		raisin = ft_strjoin(pepin, raisin);
	pepin[0] = 0;
	while (!*pepin && (!raisin || raisin[ft_strlen(raisin) - 1] != '\n')
		&& rv > 0)
	{
		ft_bzero(eau, BUFFER_SIZE + 1);
		rv = read(fd, eau, BUFFER_SIZE);
		raisin = free_son(raisin, eau, pepin, rv);
	}
	return (raisin);
}
