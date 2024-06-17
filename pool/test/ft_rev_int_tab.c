/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:37:30 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/18 17:37:37 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_rev_int_tab(int *tab, int size)
{
        int *tab_rev;
        int size_0;
        int size_1;

        tab_rev = tab;
        size_0 = 0;
        size_1 = size;
        while(size_0 != size - 1)
        {
                tab_rev[size_1] = tab[size_0];
                size_0++;
                size_1--;
        }
        size_1 = 0;
        while(size_1 != size - 1)
        {
                tab[size_1] = tab_rev[size_1];
                size_1++;
        }
        size_0 = 0;
        while(tab[size])
        {
                write(1, &tab[size], 1);
                size_0++;
        }
}
#include <stdio.h>
int     main(void)
{
        int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int size = 5;

        ft_rev_int_tab(array, size);

        int i = 0;
        while(i < size)
        {

