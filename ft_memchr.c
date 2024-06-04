/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:48:09 by skomatsu          #+#    #+#             */
/*   Updated: 2024/04/28 22:32:37 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)str + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
   char str[] = "Hello, World!";

   char *res, *ft_res;
   // memchrのテスト
   res = memchr(str, 'o', strlen(str));
   printf("memchr: %s\n", res ? res : "Not found");
   // ft_memchrのテスト
   ft_res = ft_memchr(str, 'o', strlen(str));
   printf("ft_memchr: %s\n", ft_res ? (char *)ft_res : "Not found");
   // 見つからない場合のテスト
   res = memchr(str, 'x', strlen(str));
   printf("memchr: %s\n", res ? res : "Not found");
   ft_res = ft_memchr(str, 'x', strlen(str));
   printf("ft_memchr: %s\n", ft_res ? (char *)ft_res : "Not found");
   return (0);
}
*/
