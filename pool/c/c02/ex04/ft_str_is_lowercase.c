/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:59:36 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/22 10:03:48 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' && str[i] > 0) || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <unistd.h>
int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc < 1)
	{
		write(1, "il manque tout mon coco", 28);
		return (0);
	}
	c = ft_str_is_lowercase(argv[argc -1]) + '0';
	write(1, &c, 1);
}*/
