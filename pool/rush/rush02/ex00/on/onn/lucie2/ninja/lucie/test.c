/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauffo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:57:56 by lchauffo          #+#    #+#             */
/*   Updated: 2024/03/02 19:04:39 by lchauffo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	test_coma(char *str)//envoyer str+i pour demarrer direct sur la bonne case
{
	int	ccoma;
	int	j;
	int	nb_count;
	int	coma_count;

	ccoma = 0;
	j = 0;
	nb_count = 0;
	if (str[i] == ',')
	{
		print_error(1);
		return (1);
	}
	while (str[j] != '\0')
	{
		if (!(str[j] == ','))
			return (0);
		if ((!(str[j] >= '0' && str[j] <= '9')) && str[j + 1] == '\0')
		{
			print_error(1);
			return (1);
		}
		j++;
	}
}

int	test_coma2(char *str)
{
	int	j;
	int	nb_count;

	j = 0;
	while ((str[j] >= '0' && str[j] <= '9') && str[j] != '\0')
	{
		nb_count++;
		j++;
	}
	if (nb_count > 3)
	{
		print_error(1);
		return (1);
	}
	nb_count = 0;
	coma_count = 0;
	while (str[j] != '\0')
	{
		while (str[j] == '-')
			
		while (str[j] >= '0' && str[j] <= '9')
			
	}
}
