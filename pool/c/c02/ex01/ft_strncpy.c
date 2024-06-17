/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:56:08 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/25 11:02:46 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     main(void)
{
	char    *src = "";
	char    dest1[50] = {1, 0, 1, 1, 1, 1, 1, 1, 1, 1};
	char    dest2[50] = {1, 0, 1, 1, 1, 1, 1, 1, 1, 1};
	int	size = 10;
	ft_strncpy(dest1, src, size);
        strncpy(dest2, src, size);
	for (int i = 0; i < 10; i++) printf("%d ", dest1[i]);
	printf("\n");
	for (int i = 0; i < 10; i++) printf("%d ", dest2[i]);
	printf("\n");
}
#include <stdio.h>

int		main()
{
	int i;
	char dest[] = "Epic fail !!!!!";
	char src[] = "Success";
	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 15), dest);
	i = 9;
	while (i < 15)
	{
		if (dest[i] != '\0')
		{
			printf("FAIL! Remainder of dst must be filled with 
			`\\0' characters, got %c (\\%x) atpos 
			%d\n", dest[i], dest[i], i);
			return (1);
		}
		i++;
	}
	return (0);
}*/
/*
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
	char    *src;
	char    dest[100];

        if(argc == 1)
	{
		printf("%s", "manque pas mal de truc =(");
	        return (0);
	}
	if(argc != 3)
	{
		printf("%s", "nope =(");
		return (0);
	}
        src = argv[1];
        ft_strncpy(dest, argv[1], atoi(argv[2]));
        printf("La string source est : %s\n", argv[1]);
	printf("La copie des caracteres de la string source est : %s\n", dest);
	printf("Le nombre de caracteres a copier est de :%d\n", atoi(argv[2]));
        return (0);
}*/
