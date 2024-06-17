/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:35:29 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/17 18:22:03 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_putchar(char x);

char	if1(int x, y, x0)
{
	if (x > 0 && y > 0)
        {
                ft_putchar('A');
                while (x0 > 2)
                {
                        ft_putchar('B');
                        x0--;
                }
                if (x0 > 1)
                        ft_putchar('C');
                ft_putchar('\n');
        }
	return (0)
}

char	if2(int x, x1, y, y0)
	if (y >= 3 && x > 0)
        {
                while (y0 > 2)
                {
                        ft_putchar('B');
                        while (x1 > 2)
                        {
                                ft_putchar(' ');
                                x1--;
                        }
                        x1 = x;
                        y0--;
                        if(x >= 2)
                                ft_putchar('B');
                        ft_putchar('\n');
                }
        }
	return (0)
}

char	if3(int x, x0, y)
{
	if (y >= 2 && x >= 1)
        {
                ft_putchar('C');
                while (x0 < x)
                {
                        ft_putchar('B');
                        x0++;
                }
                if (x > 1
                        )ft_putchar('A');
        }
	return (0)
}

char	rush04(int x, int y)	
{
	int	x0;
	int	x1;
	int	y0;

	x0 = x;
	x1 = x;
	y0 = y;
/*
	if (x > 0 && y > 0)
	{
		ft_putchar('A');
		while (x0 > 2)
		{
			ft_putchar('B');
			x0--;
		}	
		if (x0 > 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
	if (y >= 3 && x > 0)
	{
		while (y0 > 2)
		{
			ft_putchar('B');
			while (x1 > 2)
			{
				ft_putchar(' ');
				x1--;
			}
			x1 = x;
			y0--;
			if(x >= 2)
				ft_putchar('B');
			ft_putchar('\n');
		}
	}
	if (y >= 2 && x >= 1)
	{
		ft_putchar('C');
		while (x0 < x)
		{
			ft_putchar('B');
			x0++;
		}	
		if (x > 1
			)ft_putchar('A');
	}
*/
	return (0);
}
