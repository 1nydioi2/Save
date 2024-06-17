/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ways.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <nilamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 02:08:32 by nilamber          #+#    #+#             */
/*   Updated: 2024/06/13 14:16:06 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_di(int num)
{
	char	c;
	int		count_w;

	count_w = (num < 0);
	if (num < 0)
	{
		if (num == -2147483648)
			return (write(1, "-2147483648", 11));
		else
			num = (-num * write(1, "-", 1));
	}
	if (num > 9)
		count_w += ft_di((num / 10));
	c = ((num % 10) + 48);
	count_w += write(1, &c, 1);
	return (count_w);
}

int	ft_hex(va_list arg_v, const char c)
{
	int					count_w;
	unsigned long int	ptr;

	count_w = 0;
	if (c == 'X')
		count_w = ft_putnbr_hx(va_arg(arg_v, unsigned int), 1);
	else if (c == 'x')
		count_w = ft_putnbr_hx(va_arg(arg_v, unsigned int), 0);
	else if (c == 'p')
	{
		ptr = va_arg(arg_v, unsigned long int);
		if (ptr == 0)
			return (write(1, "(nil)", 5));
		count_w = (write(1, "0x", 2));
		return (count_w + ft_putnbr_ptr(ptr));
	}
	return (count_w);
}

int	ft_putnbr_hx(unsigned int num, int m)
{
	int		count_w;
	char	*base[2];

	base[0] = "0123456789abcdef";
	base[1] = "0123456789ABCDEF";
	count_w = 0;
	if (num >= 16)
		count_w = ft_putnbr_hx((num / 16), m);
	count_w += write(1, &base[m][(num % 16)], 1);
	return (count_w);
}

int	ft_putnbr_ptr(unsigned long int num)
{
	int		count_w;
	char	*base;

	base = "0123456789abcdef";
	count_w = 0;
	if (num >= 16)
		count_w = ft_putnbr_ptr((num / 16));
	count_w += write(1, &base[(num % 16)], 1);
	return (count_w);
}

int	ft_u(unsigned int num)
{
	char	c;
	int		count_w;

	count_w = 0;
	if (num > 9)
		count_w += ft_di((num / 10));
	c = ((num % 10) + 48);
	count_w += write(1, &c, 1);
	return (count_w);
}
