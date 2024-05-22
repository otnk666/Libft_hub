/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:52:24 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/01 20:35:39 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    
    if (dstsize > 0)
    {
        while (src[i] && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }

	while(src[i])
		i++;

    return (i);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char dst[20];
    const char *src = "This is a long string";
    size_t len;


    len = ft_strlcpy(dst, "Hello", sizeof(dst));
    printf("dst = '%s', len = %zu\n", dst, len);

	len = strlcpy(dst, "Hello", sizeof(dst));
    printf("dst = '%s', len = %zu\n", dst, len);


    len = ft_strlcpy(dst, src, sizeof(dst));
    printf("dst = '%s', len = %zu\n", dst, len);

	len = strlcpy(dst, src, sizeof(dst));
    printf("dst = '%s', len = %zu\n", dst, len);

   
    len = ft_strlcpy(dst, "", sizeof(dst));
    printf("dst = '%s', len = %zu\n", dst, len);
	len = strlcpy(dst, "", sizeof(dst));
    printf("dst = '%s', len = %zu\n", dst, len);

    len = ft_strlcpy(NULL, src, 0);
    printf("len = %zu\n", len);
	*/
