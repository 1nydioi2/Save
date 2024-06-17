/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:22:58 by nilamber          #+#    #+#             */
/*   Updated: 2024/03/02 15:53:37 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cp;
	int		i;

	i = 0;
	while (src[i])
		i++;
	cp = malloc((sizeof(char) * i) + 1);
	i = 0;
	while (*src)
	{
		cp[i] = *src;
		src++;
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_strdup(argv[1]));
		free (cp);
	}
}*/
