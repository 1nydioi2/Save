/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:27:59 by nilamber          #+#    #+#             */
/*   Updated: 2024/03/03 18:25:09 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*selection();

int	main(void)
{
	char	*c;

	c = selection();
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}
