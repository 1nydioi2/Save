/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:39:17 by nilamber          #+#    #+#             */
/*   Updated: 2024/02/26 13:54:43 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[i])
	{
		i2 = 0;
		while (str[i + i2] == to_find[i2])
		{
			i2++;
			if (to_find [i2] == 0)
				return (str + i);
		}
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
#define TESTING(s1, s2) \
test_number++;\
user_string = ft_strstr(s1, s2) ;\
test_string = strstr(s1, s2);\
printf("Test %d\n"\
"-> ft_strstr('%s', '%s') = '%s'\n"\
"->    strstr('%s', '%s') = '%s'\n\n",\
test_number,\
s1, s2, user_string ? user_string : "(null)",\
s1, s2, test_string ? test_string: "(null)");
int	main(void)
{
	int	test_number = 0;
	char	*user_string = NULL;
	char	*test_string = NULL;
	TESTING("  test  ", "test")
	TESTING("  tes ", "test")
	TESTING("", "test")
	TESTING("   test", "")
	TESTING("", "")
	TESTING("   test", " t e e")
}
/*
#include <string.h>
#include <stdio.h>

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
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b)
	== 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b)
	== 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b)
	== 0 ? "Success" : "Fail");
}*/
