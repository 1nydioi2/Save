/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_cnumb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauffo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:57:56 by lchauffo          #+#    #+#             */
/*   Updated: 2024/03/03 19:59:34 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

void	is_unit()
{
	int	i;
	
	i = 0;
}

void	is_ten+()
{
	
}

void	is_deci()
{

}

void	is_cent()
{

}

void	is_thsds()
{

}

void	udc_thsds(char *str)
{
	int	l;

	l = ft_strlen(str) - 1;
	while (str[l] >= 0)
	{
		if (l % 3 == 2)
			is_cent(str[l]);
		if (l % 3 == 1)
			is_deci(str[l]);
		if (l % 3 == 0)
			is _unit(str[l]);
		if (l / 3 > 0)
		{
			is_thsds(l, str[l]);
		}
		l--;
	}
}
