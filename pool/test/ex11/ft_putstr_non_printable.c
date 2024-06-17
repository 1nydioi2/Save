/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:13:29 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/22 12:18:53 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_atoi(char c)
{
        char    c0;

        c0 = 0;
        while (c0 != c)
        {
                c0 += 1;
                i++;
        }
        return (i);
}

char	ft_itoa(int *i)
{
	char	c;
	c = i;
        return (c);
}

void	*ft_hexaconvertor(int *i)
{
	if ((((i - (i / 16) * 6) % 10) * 10) < 5)
	{
		i[0] = ((i - (i / 16) * 6) % 10);
		i[1] = ((i - (i / 16) * 6) - (((i - (i / 16) * 6) % 10) * 10) + 49;
	}
	else
		i = (i - (i / 16) * 6);
	return (i);
}
void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, ft_itoa(ft_hexconvertor(ft_atoi(str[i]))), 2);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}

int	main()
{
	ft_putstr_non_printable("sdsd\nds1221");
}
