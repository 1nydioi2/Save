/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_du_bled.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:11:34 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/22 09:40:24 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char c, int i)
{
	char	c0;

	c0 = 0;
	while (c0 != c)
	{
		c0 += 1;
		i++;
	}
	return (i);
}

#include <unistd.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "nope =)", 7);
		write(1, "\n", 1);
		return (0);
	}
	char	*cha;
	int	*in;

	in = 0;
	int ret = atoi(argv[1][0], in);
	cha = in;
	write(1, cha, 2);
	write(1, "\n", 1);
	printf("%d\n", ret);
}
