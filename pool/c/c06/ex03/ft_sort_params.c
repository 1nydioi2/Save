/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:36:11 by nilamber          #+#    #+#             */
/*   Updated: 2024/03/01 20:48:58 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	asciic(char *str, char *str2)
{
	while (*str || *str2)
	{
		if (*str != *str2)
			return (*str - *str2);
		str++;
		str2++;
	}
	return (*str - *str2);
}

void	argc2(char *str)
{
	while (*str)
		write(1, str, 1);
}

void	pp(int c, char **pv)
{
	int	i;

	i = 1;
	while (i < c)
	{
		while (*pv[i])
		{
			write(1, pv[i], 1);
			pv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int	j;
	int	c;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		argc2(argv[1]);
		return (0);
	}
	c = argc;
	while (c)
	{
		j = 1;
		while (j <= argc && argv[j + 1] != 0)
		{
			if (asciic(argv[j], argv[j + 1]) > 0)
				swap(&argv[j], &argv[j + 1]);
			j++;
		}
		c--;
	}
	pp(argc, argv);
}
