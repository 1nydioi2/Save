/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:31:14 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/23 12:34:21 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' && str[i] > 0) || str[i] > '9')
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

	if (argc < 2)
		write(1, "mets un truc nn ?", 22);
	c = ft_str_is_numeric(argv[argc - 1]) + '0';
	write(1, &c, 1);
}*/
