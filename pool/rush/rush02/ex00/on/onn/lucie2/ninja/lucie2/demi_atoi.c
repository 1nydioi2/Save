/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demi_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauffo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:16:10 by lchauffo          #+#    #+#             */
/*   Updated: 2024/03/03 18:18:42 by lchauffo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_error(int vers);

int	ft_one_plus(char *str)
{
	int	i;
	int	plus;

	i = 0;
	plus = 0;
	while ((str[i] == '+' || str[i] == '-') && (str[i] != '\0'))
	{
		if (str[i] == '+')
		{
			plus++;
			if (plus > 1)
			{
				print_error(3);
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

int	ft_ipos(char *str)
{
	int		i;
	int		plus;
	int		one_plus;

	i = 0;
	plus = 0;
	if (str[i] == 0)
	{
		print_error(1);
		return (0);
	}
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
		i++;
	one_plus = ft_one_plus(str + i);
	if (one_plus == 2)
		return (0);
	i += one_plus;
	return (i);
}
