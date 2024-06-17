/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:24:38 by cgorin            #+#    #+#             */
/*   Updated: 2024/02/18 20:22:16 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c);

void	ft_ligne(int x, char a, char b, char c)
{
	int	max_x;

	max_x = x;
	while (x > 0)
	{
		if (x == max_x)
		{
			ft_putchar(a);
		}
		else if (x == 1 && x != max_x)
		{
			ft_putchar(b);
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(c);
		}
		x--;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_ligne(x, 'A', 'C', 'B');
		while (y > 1)
		{
			if (y == 2)
				ft_ligne(x, 'A', 'C', 'B');
			else if (y != 2)
				ft_ligne(x, 'B', 'B', ' ');
			y--;
		}
	}
}
