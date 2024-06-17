/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:48:35 by nilamber          #+#    #+#             */
/*   Updated: 2024/03/07 20:19:45 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*while2(int i, int size, int j, int k, char **strs, char *sep, char *c)
{
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			c[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j])
		{
			c[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
	return (c);
}
char	*ifr(char *c)
{
	c = malloc(sizeof(char));
	c[0] = 0;
	return (c);
}

int	l(char *sep, int i)
{
	i = 0;
	while (sep[i])
		i++;
	return(i);
}

int	strlt(char **strs, int i, int j, int tl)
{
	while (i >= 0)
	{
		j = 0;
		while (strs[i][j])
		{
			tl++;
			j++;
		}
		i--;
	}
	return (tl);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		tl;
	int		i;
	int		j;
	int		k;

	c = 0;
	if (size == 0)
		return (ifr(c));
	tl = 0;
	tl = l(sep, tl) * (size - 1);
	i = size - 1;
	j = 0;
	tl :wq= strlt(strs, i, j, tl);
	printf("%d\n", tl);
	c = malloc(sizeof(char) * tl + 1);
	k = 0;
	i = 0;
	c = while2(i, size, j, k, strs, sep, c);
	c[tl] = 0;
	return (c);
}

int	main(int argc, char **argv)
{
	char	*c;

	c = ft_strjoin(argc, argv, argv[1]);
	printf("%s\n", c);
	free(c);
}
