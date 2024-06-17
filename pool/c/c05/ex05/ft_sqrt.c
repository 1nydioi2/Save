/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:01:29 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/29 14:27:05 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	i2;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i2 = 2;
	if (nb > 99)
		i2 = nb / (nb / 10);
	i = 2;
	while (i * i != nb && i <= nb / i2 && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_sqrt(atoi(argv[1])));
}*/
