/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:48:55 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/22 09:59:47 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' && str[i] > 0) || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;

	if (argc != 2)
		return(0);
	c = ft_str_is_uppercase(argv[1]) + '0';
	write(1, &c, 1);
}*/
