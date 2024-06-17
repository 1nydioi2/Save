/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:30:25 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/22 12:16:04 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] += ' ';
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >=0 && str[i] <= 9)
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
				i++;
			else
				str[i] -= ' ';
		}
		i++;
	}
	return (str);
}

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "nope =)\n", 9);
		return (0);
	}
	
	int	i;
	char	*c;

	i = 0;
	while (argv[1][i])
		i++;
	c = ft_strcapitalize(argv[1]);
	write(1, c, i);
	write(1, "\n", 1);
}
