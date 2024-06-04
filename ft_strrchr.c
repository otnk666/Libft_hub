/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:51:18 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/01 21:19:42 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int)ft_strlen(s);
	while (0 <= len)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int	main(void) {
	char str1[] = "Hello, World!";
	char str2[] = "Goodbye";
	char str3[] = "";
	char *result, *ft_result;

	// テストケース1: 文字列内に検索文字があり、最後に出現する位置を返す
	result = strrchr(str1, 'o');
	ft_result = ft_strrchr(str1, 'o');
	printf("Test case 1:\n");
	printf("strrchr result: %s\n", result);
	printf("ft_strrchr result: %s\n", ft_result);
	printf("\n");

	// テストケース2: 文字列内に検索文字がない場合
	result = strrchr(str2, 'x');
	ft_result = ft_strrchr(str2, 'x');
	printf("Test case 2:\n");
	printf("strrchr result: %s\n", (result == NULL) ? "NULL" : result);
	printf("ft_strrchr result: %s\n", (ft_result == NULL) ? "NULL" : ft_result);
	printf("\n");

	// テストケース3: 空文字列と検索文字がNULL文字の場合
	result = strrchr(str3, '\0');
	ft_result = ft_strrchr(str3, '\0');
	printf("Test case 3:\n");
	printf("strrchr result: %s\n", (result == NULL) ? "NULL" : result);
	printf("ft_strrchr result: %s\n", (ft_result == NULL) ? "NULL" : ft_result);
	printf("\n");

	return (0);
}
*/
