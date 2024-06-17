/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:00:51 by nilamber          #+#    #+#             */
/*   Updated: 2024/03/02 20:16:50 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;
	int	i;
	int	il;

	if (argc == 1)
	{
		write(1, "there is no argument\n", 21);
		return (1);
	}
	c = (argc - 1) + '0';
	il = 1;
	if (argc - 1 > 9)
		il = 2;
	if (argc - 1 > 99)
		il = 3;
	write(1, "there is  ", 8);
	write(1, &c, 1);
	write(1, " arguments\n\n", 12);
	i = 1;
	il = 1;
	while (argv[i])
	{
		if (i > 9)
			il = 2;
		if (i > 99)
			il = 3;
		c = i + '0';
		write(1, &c, il);
		if ((i % 10) == 1)
				write(1, "st", 2);
		else if ((i % 10) == 2)
				write(1, "nd", 2);
		else if ((i % 10) == 3)
				write(1, "rd", 2);
		else
			write(1, "th", 2);
		write(1, " argument is : ", 15);
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}
