/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauffo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:53:17 by lchauffo          #+#    #+#             */
/*   Updated: 2024/03/03 21:55:44 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

extern char	ft_strncopy(char *dest, char *src, unsigned int n);
extern char	ft_strcpy_nb(char *dest, char *src);
extern char	ft_revstr(char *str);
extern int	ft_strlen_nb(char *str);
extern int	ft_strlen(char *str);
extern char	orc_dico(char *buffer);
extern void	ft_malloc(char **dico, char *buffer);
extern char	ft_split(char *buffer);
extern int	ft_one_plus(char *str);
extern int	ft_ipos(char *str);
extern void	ft_malloci(char **dico, char *buffer);
extern void	ft_mallocj(char **dico, char *buffer);
extern char	ft_split(char *buffer);

void	print_error(int vers)
{
	if (vers == 1)
		write(1, "Error\n", 6);
	if (vers == 2)
		write(1, "Dict Error\n", 11);
}

void	not_main(char **dico)
{
	char	buffer[1000];

	orc_dico(buffer);
	ft_malloci(dico, buffer);
	ft_mallocj(dico, buffer);
	ft_split(buffer);
}

void	free_array(char **dico)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dico[i][j])
	{
		j = 0;
		while (dico[i][j] != '\0')
		{
			free(dico[i]);
			j++;
		}
		i++;
	}
	free(dico);
	return ;
}

int	main(int argc, char *argv[])
{
	int		len_src;
	char	*dest;
	int		i;
	int		len;
	char	**dico;

	if (argc != 2)
	{
		print_error(1);
		return (0);
	}
	len_src = ft_strlen(argv[1]);
	i = ft_ipos(argv[1]);
	len = ft_strlen_nb(argv[1] + i);
	dest = malloc(sizeof(char) * (len + 1));
	ft_strcpy_nb(dest, argv[1] + i);
	ft_revstr(dest);
	printf("%s", dest);
	not_main(dico);
	free(dest);
	free_array(dico);
	return (0);
}
