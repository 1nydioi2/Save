/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:59:05 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/21 13:29:02 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int     main(int argc, char **argv)
{
        if (argc != 2)
        {
                write(1, "nope =)\n", 9);
                return (0);
        }
	int     i;
        char    *c;

	c = ft_strlowcase(argv[1]);
	i = 0;
	while (c[i])
		i++;
	write(1, c, i);
	write(1, "\n", 1);
}*/
