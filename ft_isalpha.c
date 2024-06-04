/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:48:51 by skomatsu          #+#    #+#             */
/*   Updated: 2024/04/17 22:31:21 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void) {
	// Test Case 1: Lowercase letters
	for (char c = 'a'; c <= 'z'; c++) {
		assert(ft_isalpha(c) == isalpha(c));
	}
	printf("Test Case 1 passed.\n");

	// Test Case 2: Uppercase letters
	for (char c = 'A'; c <= 'Z'; c++) {
		assert(ft_isalpha(c) == isalpha(c));
	}
	printf("Test Case 2 passed.\n");

	// Test Case 3: Non-alphabetic characters
	char non_alpha[] = "!@#$%^&*()_+1234567890";
	for (size_t i = 0; i < strlen(non_alpha); i++) {
		assert(ft_isalpha(non_alpha[i]) == isalpha(non_alpha[i]));
	}
	printf("Test Case 3 passed.\n");

	// Test Case 4: Negative values
	assert(ft_isalpha(-1) == isalpha(-1));
	printf("Test Case 4 passed.\n");

	// Test Case 5: Maximum possible value
	assert(ft_isalpha(127) == isalpha(127));
	printf("Test Case 5 passed.\n");

	printf("All test cases passed.\n");
	return (0);
}
*/