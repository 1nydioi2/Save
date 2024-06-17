/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:38:13 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/19 17:01:13 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	boite;

	i = 0;
	while (i < size / 2)
	{
		boite = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = boite;
		i++;
	}
}
/*
#include <stdio.h>
int     main(void)
{
        int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int size = 10;
	int i = 0;

        ft_rev_int_tab(array, size);
	
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}*/
