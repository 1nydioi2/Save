/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:28:49 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/19 17:01:57 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
/*
#include <stdio.h>

int		main(void)
{
	char str[] = "0123456789";
	char str1[] = "test";

	printf("10:%d\n", ft_strlen(str));
	printf("4:%d\n", ft_strlen(str1));
}*/
