/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:46:46 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/24 11:04:45 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] < 0)
			src[i] = -src[i];
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>

int		main()
{
	char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Must all be same (3 lines):\n%s\n%s\n%s\n", src, 
	ft_strcpy(dest, src), dest);
	char dest1[] = "";
	char src1[] = "";
	ft_strcpy(dest1, src1);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*src;
	char	dest[500];

	if(argc == 1)
	{
		printf("manque un truc nan ? :)");
		return (0);
	}
	src = argv[1];
	ft_strcpy(dest, argv[1]);
	printf("La string source est : %s\n",argv[1]);
	printf("La copie de la string source est :%s\n", dest);
	return (0);
}*/
