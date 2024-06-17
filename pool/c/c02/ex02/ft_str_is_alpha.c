/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:49:05 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/20 15:29:18 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	low;
	int	upp;
	int	nul;

	i = 0;
	low = 0;
	upp = 0;
	nul = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			low++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			upp++;
		else if (str[i] == '\0')
			nul++;
		else
			return (0);
		i++;
	}
	if (low + upp + nul == i)
		return (1);
	return (-1);
}
/*
#include <unistd.h>
int	main(int argc, char **argv)
{
	if (argc < 1)
	{
		write(1, "il manque un truc mon coco :'(\n", 32);
		return (0);
	}
	char	c;

	c = ft_str_is_alpha(argv[argc - 1]) + '0';
	write(1, &c, 1);
	return (0);
}*/
