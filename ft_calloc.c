/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:14:30 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/09 07:32:45 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	total;

	if (count == 0 || size == 0)
	{
		dst = malloc(1);
		return (dst);
	}
	total = count * size;
	if (total / count != size)
		return (NULL);
	dst = malloc(total);
	if (!dst)
		return (NULL);
	ft_memset(dst, 0, total);
	return (dst);
}
/*
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void) {
	// 正常なメモリ割り当てのテスト
	int *ptr1 = ft_calloc(5, sizeof(int));
	if (ptr1 == NULL) {
		printf("Memory allocation failed: %s\n", strerror(errno));
	} else {
		printf("Memory allocated successfully\n");

		// 初期化の確認
		for (int i = 0; i < 5; i++) {
			if (ptr1[i] != 0) {
				printf("Memory not initialized to zero\n");
				break ;
			}
		}

		// メモリリークの確認
		free(ptr1);
		printf("Memory freed successfully\n");
	}

	// メモリ割り当て失敗のテスト
	int *ptr2 = ft_calloc(-1, sizeof(int)); // 負の値を渡す
	if (ptr2 == NULL) {
		printf("Memory allocation failed (negative size): %s\n",
			strerror(errno));
	} else {
		free(ptr2);
	}

	// サイズゼロのメモリ割り当てのテスト
	int *ptr3 = ft_calloc(0, sizeof(int));
	if (ptr3 == NULL) {
		printf("Memory allocation failed (size zero): %s\n", strerror(errno));
	} else {
		printf("Memory allocated successfully (size zero)\n");
		free(ptr3);
	}

	// 複数回のメモリ割り当てのテスト
	int *ptr4 = ft_calloc(10, sizeof(int));
	int *ptr5 = ft_calloc(20, sizeof(int));
	if (ptr4 == NULL || ptr5 == NULL) {
		printf("Multiple memory allocations failed\n");
		if (ptr4 != NULL) {
			printf("First allocation failed: %s\n", strerror(errno));
			free(ptr4);
		}
		if (ptr5 != NULL) {
			printf("Second allocation failed: %s\n", strerror(errno));
			free(ptr5);
		}
	} else {
		printf("Multiple memory allocations successful\n");
		free(ptr4);
		free(ptr5);
	}

	return (0);
}
*/