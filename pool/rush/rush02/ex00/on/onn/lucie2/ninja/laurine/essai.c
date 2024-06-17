/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   essai.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 10:47:34 by laurifer          #+#    #+#             */
/*   Updated: 2024/03/03 14:11:02 by laurifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_syntax(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 32)
			str[i] = '-';
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	a;
	int	j;

	i = 1;
	a = 1;
	j = 0;
	if (argc != 3)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
	}
	while (argv[1][i])
	{
		ft_syntax(&argv[1][i]);
		i++;
	}
	while (argv[2][j])
	{
		ft_syntax(&argv[2][j]);
		j++;
	}
	while (a < argc)
	{
		ft_putstr(argv[a]);
		write(1, "\n", 1);
		a++;
	}
}
