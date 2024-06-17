/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_cnumb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauffo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:57:56 by lchauffo          #+#    #+#             */
/*   Updated: 2024/03/03 21:54:35 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

void	is_unit(char u, char **dico)
{
	int	i;
	int	h;
	
	i = 0;
	h = 0;
	if (u == '0')
		return ;
	while (dico[i])
	{
		h = 0;
		if (dico[i][0] == u
			&& (dico[i][0 + 1] < '0'
			|| dico[i][0] > '9'))
		{
			while (dico[i][0 + h] != ':')
				h++;
			while ((dico[i][0 + h] < 33 
			|| dico[i][0 + h] > 126))
				h++;
			while (dico[i][0 + h] >= 33 && dico[i][0 + h] <= 126)
			{
				write(dico[i][0 + h]);
				h++;
			}
		}
		else
			i++;
	}
	write(1, " ", 1);
}

void	is_ten+(char d, char u)
{
	char	c[2];

	c[0] = d;
	c[1] = u;
	c[2] = 0;
}

void	is_deci(char d, char u ,char **dico)
{
	int	i;
	int	h;
	
	i = 0;
	h = 0;
	if (d == '0')
		return ;
	if (d == '1')
	{
		is_ten+(d, u);
		return ;
	}
	while (dico[i])
	{
		h = 0;
		if (dico[i][0] == d
			&& (dico[i][1] == '0'
			&& (dico[i][2] < '0'
			|| dico[i][2] > '9')))
		{
			while (dico[i][0 + h] != ':')
				h++;
			while ((dico[i][0 + h] < 33 
			|| dico[i][0 + h] > 126))
				h++;
			while (dico[i][0 + h] >= 33 && dico[i][0 + h] <= 126)
			{
				write(dico[i][0 + h]);
				h++;
			}
		}
		else
			i++;
	}
	write(1, " ", 1);
}

void	is_cent(int l, char str, char **dico)
{
	int	i;
	int	h;
	
	i = 0;
	h = 0;
	if (str == '0')
		return ;
	is_unit(str);
	while (dico[i])
	{
		h = 0;
		if (dico[i][0] == str
			&& dico[i][1] == '0'
			&& dico[i][2] == '0'
			&& (dico[i][3] < '0'
			|| dico[i][3] > '9'))
		{
			while (dico[i][0 + h] != ':')
				h++;
			while ((dico[i][0 + h] < 33 
			|| dico[i][0 + h] > 126))
				h++;
			while (dico[i][0 + h] >= 33 && dico[i][0 + h] <= 126)
			{
				write(dico[i][0 + h]);
				h++;
			}
		}
		else
			i++;
	}
	write(1, " ", 1);
}

void	is_thsds(int n)
{
	int	i;
	int	h;
	
	i = 0;
	h = 0;
	if (str == '0')
		return ;
	while (dico[i])
	{
		h = 0;
		if (dico[i][0] == str
			&& dico[i][1] == '0'
			&& dico[i][2] == '0'
			&& dico[i][n + 1] == '0'
			&& (dico[i][n + 2] < '0'
			|| dico[i][n + 2] > '9'))
		{
			while (dico[i][0 + h] != ':')
				h++;
			while ((dico[i][0 + h] < 33 
			|| dico[i][0 + h] > 126))
				h++;
			while (dico[i][0 + h] >= 33 && dico[i][0 + h] <= 126)
			{
				write(dico[i][0 + h]);
				h++;
			}
		}
		else
			i++;
	}
	write(1, " ", 1);
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
			is_unit(str[l]);
		if (l / 3 > 0)
		{
			is_thsds(l, str[l]);
		}
		l--;
	}
}
