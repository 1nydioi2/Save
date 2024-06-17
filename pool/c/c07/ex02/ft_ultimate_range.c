/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:23:09 by nilamber          #+#    #+#             */
/*   Updated: 2024/03/04 18:48:06 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab_i;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	if (range == 0)
		return (-1);
	tab_i = malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		tab_i[i] = min + i;
		i++;
	}
	*range = tab_i;
	return (max - min);
}
/*
int	main(int argc, char **argv)
{
	int	*range;
	int	r;
	int	i;

	range = 0;
	if (argc != 3)
		return (0);
	r = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
	printf("%d\n", r);
	i = 0;
	while (i < atoi(argv[2]) - atoi(argv[1]))
	{
		printf("%d\n", range[i]);
		i++;
	}
}*/
