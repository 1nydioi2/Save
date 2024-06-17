/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:41:27 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/20 20:44:27 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\0' || str[i] <= 31 || str[i] >= 127)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <unistd.h>
int	main(void)
{
	char	str[4] = {'A', '5', '2', '\0'};
	char	c;

	c = ft_str_is_printable(str) + '0';
	write(1, &c, 1);
}*/
