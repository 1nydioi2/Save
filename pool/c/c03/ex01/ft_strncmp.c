/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:55:40 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/25 20:58:49 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	nn;

	nn = 0;
	while ((s1[nn] || s2[nn]) && nn < n)
	{
		if (s1[nn] != s2[nn])
			return (s1[nn] - s2[nn]);
		nn++;
	}
	if (nn >= n)
		return (0);
	return (s1[nn] - s2[nn]);
}
/*
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "Test1";
	char s2[] = "OK";
	char s3[] = "Same";
	char s4[] = "Size";
	char s5[] = "Shorter";
	char s6[] = "ThanMyself";
	char s7[] = "ShorterTest";

	printf("%d, %d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
	printf("%d, %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
	printf("%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
	printf("%d, %d\n", ft_strncmp(s3, s4, 1), strncmp(s3, s4, 1));
	printf("%d, %d\n", ft_strncmp(s5, s6, 3), strncmp(s5, s6, 3));
	printf("%d, %d\n", ft_strncmp(s5, s5, 10), strncmp(s5, s5, 10));
	printf("%d, %d\n", ft_strncmp(s5, s5, 5), strncmp(s5, s5, 5));
	printf("%d, %d\n", ft_strncmp(s5, s7, 7), strncmp(s5, s7, 7));
	printf("%d, %d\n", ft_strncmp(s5, s7, 8), strncmp(s5, s7, 8));
}

#include <unistd.h>
#include <stdlib.h>

int     main(int c, char **v)
{
        if (c != 4)
        {
                write(1, "nope =)\n", 8);
                return (0);
        }
        int     i;
        char    ic[2];

        i = ft_strncmp(v[1], v[2], atoi(v[3]));
        if (i < 0)
        {
                write(1, "-", 1);
                i = -i;
                ic[0] = i + '0';
                write(1, &ic, 1);
        }
        ic[0] = i + '0';
        write(1, &ic, 1);
}*/
