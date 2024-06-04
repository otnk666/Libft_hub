/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:20:51 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/01 21:17:28 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (!*s)
			return (NULL);
		++s;
	}
	return ((char *)s);
}
/*
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int	main(void) {
	char str1[] = "Hello, World!";
	char str2[] = "Goodbye";
	char str3[] = "";
	char *result, *ft_result;

	// テストケース1: 文字列内に検索文字があり、最初に出現する位置を返す
	result = strchr(str1, 'o');
	ft_result = ft_strchr(str1, 'o');
	printf("Test case 1:\n");
	printf("strchr result: %s\n", result);
	printf("ft_strchr result: %s\n", ft_result);
	printf("\n");

	// テストケース2: 文字列内に検索文字がない場合
	result = strchr(str2, 'x');
	ft_result = ft_strchr(str2, 'x');
	printf("Test case 2:\n");
	printf("strchr result: %s\n", (result == NULL) ? "NULL" : result);
	printf("ft_strchr result: %s\n", (ft_result == NULL) ? "NULL" : ft_result);
	printf("\n");

	// テストケース3: 空文字列と検索文字がNULL文字の場合
	result = strchr(str3, 't' + 256);
	ft_result = ft_strchr(str3, 't' + 256);
	printf("Test case 3:\n");
	printf("strchr result: %s\n", (result == NULL) ? "NULL" : result);
	printf("ft_strchr result: %s\n", (ft_result == NULL) ? "NULL" : ft_result);
	printf("\n");

	return (0);
}
*/
