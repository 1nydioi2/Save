/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:46:02 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/21 13:22:38 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc <= 1 || argc > 2)
	{
		write(1, "nope =)\n", 9);
		return (0);
	}
	int	i;
	char	*c;
	
	i = 0;
	c = ft_strupcase(argv[1]);
	while (c[i])
		i++;
	write(1, c, i);
	write(1, "\n", 1);
}*/
