/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauffo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:53:17 by lchauffo          #+#    #+#             */
/*   Updated: 2024/03/02 19:18:04 by lchauffo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	test_coma();
void	test_coma2();

void	print_error(int vers)
{
	if (vers == 1)
	{
		write(1, "Error", 6);
		write(1, "\n", 1);
	}
	if (vers == 2)
	{
		write(1, "Dict Error", 11);
		write(1, "\n", 1);
	}
}

char	ft_strncopy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i + n] != '\0' && i < n)
	{
		dest[i] = src[i + n];
		i++;
		n++;
	}
	while (i < n)
	{
		dest[i] = '\0'
		i++;
	}
	return (dest);
}

int	ft_one_plus(char *str)
{
	int	i;

	i = 0;
	while ((str[i] == '+' || str[i] == '-') && (str[i] != '\0'))
	{
		if (str[i] == '+')
		{   
			if (plus > 1)
			{   
				print_error(1);
				return (2);
			}
		}
		if (str[i] == '-')
		{   
			print_error(1);
			return (2);
		}
		i++;
	}
	return (plus);
}

int	ft_atoc(char *str)
{
	int	i;
	int	j;
	int	plus;
	int one_plus;

	i = 0;
	j = 0;
	plus = 0;
	if (str[i] == 0)
	{
		print_error(1);
		return (1);
	}
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13) && str[i] != '\0')
		i++;
	one_plus = ft_one_plus(str + i);
	if (one_plus == 2)
		return (1);
	i += one_plus;
	while (str[i] != '\0' 
	&& (str[i + j] >= '0' && str[i + j] <= '9' || str[i] == ','))
	{
		if (test_coma(str + i) == )
		j++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	char *fileName = "numbers.dict";

	int fd = open(fileName, O_RDWR);

	if(fd == -1)
	if (argc != 2)
		return (0);
	// strlen > lib
	// malloc
	// atoi argv[1] + check negnb
	ft_atoc(argv[1]);
	// free

	return (0);
}
