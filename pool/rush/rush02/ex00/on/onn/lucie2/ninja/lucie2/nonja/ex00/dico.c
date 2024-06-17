/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauffo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:45:57 by lchauffo          #+#    #+#             */
/*   Updated: 2024/03/03 21:03:15 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	print_error(int vers);

char	*orc_dico(char *buffer)
{
	int		fd;
	int		n;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		print_error(2);
		return (0);
	}
	n = read(fd, buffer, 1000);
	if (n == -1)
	{
		print_error(2);
		close(fd);
		return (0);
	}
	buffer[n] = '\0';
	return (buffer);
}

int	ft_malloci(char **dico, char *buffer)
{
	int	k;
	int	n;

	n = 0;
	k = 0;
	while (buffer[k] != '\0')
	{
		if (buffer[k] == '\n')
		{
			n++;
		}
		k++;
	}
	dico = malloc(sizeof(char *) * n + 1);
	return (n);
}

void	ft_mallocj(char **dico, char *buffer)
{
	int	k;
	int	i;
	int	j;
	int	n;

	n = ft_malloci(dico, buffer);
	k = 0;
	i = 0;
	while (i <= n)
	{
		j = 0;
		while (buffer[k + j] != '\n')
		{
			dico[i] = malloc(sizeof(char) * j + 1);
			j++;
			k++;
		}
		k++;
		i++;
	}
}

char	ft_split(char **dico, char *buffer)
{
	int		i;
	int		j;
	int		k;
	char	***c;

	k = 0;
	i = 0;
	j = 0;
	while (buffer[k] != '\0')
	{
		if (buffer[k] == '\n')
		{
			dico[i][j] = '\0';
			i++;
			j = 0;
		}
		dico[i][j] = buffer[k];
		j++;
		k++;
	}
	c = &dico;
	return (c);
}
