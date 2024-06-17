/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:33:39 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/24 15:27:34 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	strl;
	int	i2;
	int	to_findl;
	int	isub;
	int	iptr;

	if (to_find == 0)
		return (str);
	to_findl = 0;
	while (to_find[to_findl])
		to_findl++;
	strl = 0;
	while (str[strl])
		strl++;
	isub = strl - to_findl;
	iptr = 0;
	i2 = 0;
	i = 0;
	char	ptr[to_findl];
	while (str[i])
	{
		if (str[i] == to_find[i2] 
		&& str[strl - (isub - i)] == to_find[to_findl])
		{
			while(str[i] == to_find[i2])
			{
				iptr++;
				i++;
				i2++;
			}
			if (iptr == to_findl)
			{
				ptr = str[i - iptr];
				return (ptr);
			}
			else
			{
				i -= iptr;
				i2 -= iptr;
				iptr = 0;
			}
		}
		i++;
	}
	return (0);	
}

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);


int	main(void)
{
	char s1a[] = "This is OK for now";
	char s2a[] = "OK";
	char s1b[] = "This is OK for now";
	char s2b[] = "OK";
	char s3a[] = "Same";
	char s4a[] = "";
	char s3b[] = "Same";
	char s4b[] = "";
	char s5a[] = "Shorter";
	char s6a[] = "Than";
	char s5b[] = "Shorter";
	char s6b[] = "Than";

	printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
}
