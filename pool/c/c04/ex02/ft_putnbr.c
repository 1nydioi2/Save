/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:45:24 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/27 19:14:39 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}
/*
#include <stdio.h>

int		main(void)
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	for (int i = -100; i <= 100; i++) {ft_putnbr(i); printf("\n");}
}

#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "noob", 4);
		return (0);
	}
	ft_putnbr(atoi(argv[1]));
	return (0);
}*/
