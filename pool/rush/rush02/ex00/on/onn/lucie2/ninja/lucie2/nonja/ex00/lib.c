/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauffo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:17:09 by lchauffo          #+#    #+#             */
/*   Updated: 2024/03/03 16:12:17 by lchauffo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strlen_nb(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0'
		&& (str[i] >= '0' && str[i] <= '9'))
		i++;
	return (i);
}

char	ft_revstr(char *str)
{
	int		i;
	int		j;
	int		len;
	char	temp;

	i = 0;
	len = ft_strlen(str);
	j = len - 1;
	while (i <= len / 2)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (*str);
}

char	ft_strcpy_nb(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0'
		&& (src[i] >= '0' && src[i] <= '9'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}
