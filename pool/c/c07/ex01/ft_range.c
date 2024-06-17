/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:59:48 by nilamber          #+#    #+#             */
/*   Updated: 2024/03/04 14:04:29 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab_i;
	int	i;

	if (min >= max)
	{
		tab_i = 0;
		return (tab_i);
	}
	i = 0;
	tab_i = malloc((sizeof(int) * (max - min)));
	if (tab_i == 0)
		return (0);
	while (i < max - min)
	{
		tab_i[i] = min + i;
		i++;
	}
	return (tab_i);
}
/*
int	main(int argc, char **argv)
{
	int	dec;
	int	*dec_tab;
	int	i;

	if (argc != 3)
		return (0);
	dec_tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	dec = 1;
	i = 0;
	if (dec_tab == 0)
		return (0);
	while (i < atoi(argv[2]) - atoi(argv[1]))
	{
		dec = dec_tab[i];
		printf("%d\n", dec);
		i++;
	}
	free(dec_tab);
	return (0);
}*/
