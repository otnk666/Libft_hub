/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 00:31:14 by skomatsu          #+#    #+#             */
/*   Updated: 2024/06/04 16:02:56 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	result_len;

	dst_len = 0;
	src_len = 0;
	result_len = 0;
	if (!dst & !dstsize)
		return (0);
	if (src)
		src_len = ft_strlen(src);
	while (dst_len < dstsize && *dst)
	{
		dst++;
		dst_len++;
	}
	result_len = dst_len + src_len;
	if (src_len < dstsize - dst_len)
		ft_strlcpy(dst, src, src_len + 1);
	else if (dstsize != 0)
		ft_strlcpy(dst, src, dstsize - dst_len);
	return (result_len);
}

// int	main(void)
// {
// 	char dest[30]; memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	memset(dest, 'B', 4);
// 	// ft_strlcat(dest, src, 3);
// 	ft_strlcat(dest, src, 6);
// 	return (0);
// }
