/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:00:54 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/01 18:05:43 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char 	*ptr;
	size_t i;

	i = 0;
	ptr =  b;
	
	while (i < len)
	{
	ptr[i] = (unsigned char) c;
	i++;
	}
	return ((void *)ptr);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void *ft_memset(void *b, int c, size_t len);

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1. 単一の文字で埋める
    char buffer1[10] = {0};
    ft_memset(buffer1, 'A', 5);
    printf("buffer1: %s\n", buffer1); // buffer1: AAAAA\0\0\0\0\0

    // 2. 複数の文字で埋める
    char buffer2[10] = {0};
    ft_memset(buffer2, 'B', 7);
    printf("buffer2: %s\n", buffer2); // buffer2: BBBBBBB\0\0

    // 3. 空の領域を埋める
    char buffer3[11] = {0};
    ft_memset(buffer3, 'C', 10);
	buffer3[10] = '\0';
	printf("buffer3: %s\n", buffer3); // buffer3: CCCCCCCCCC

    return 0;
}
*/