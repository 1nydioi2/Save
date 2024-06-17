/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:59:15 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/19 10:27:39 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	size_0;
	int	dec;

	size_0 = 0;
	dec = size;
	while (dec > 0)
	{
		while (size_0 <= size -2)
		{
			a = tab[size_0];
			b = tab[size_0 + 1];
			if (b < a)
			{
				tab[size_0 + 1] = a;
				tab[size_0] = b;
			}
			size_0++;
		}
		size_0 = 0;
		dec--;
	}
}
/*
#include <stdio.h>

int     main(void)
{
	int	size;
        int     array[15] = {8, 6, 5, 2, 9, 9, 1, 7, 4, 3};
        int     n1;

        size = 15;
	ft_sort_int_tab(array,size);
        n1 = 0;
	while (n1 < 15) 
	{
                printf("%d ", array[n1]);
                n1++;
        }
}
*/
