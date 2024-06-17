/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:35:44 by nilamber          #+#    #+#             */
/*   Updated: 2024/03/03 18:35:52 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	strl(char *c);

char	*selection()
{
	char	*dest;
	int	f_desc;
	int	l;

	dest = malloc(1026);
	f_desc = open("test.txt", O_RDONLY);
	read(f_desc, dest, sizeof(dest));
	close(f_desc);
	l = strl(dest);
	printf("dest = %s\n", dest);
	return (dest);
}
