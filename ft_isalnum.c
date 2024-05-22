/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:18:50 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/22 21:10:22 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c) 
{
    return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int main() {
    // Test Case 1: Alphabetic characters
    for (char c = 'a'; c <= 'z'; c++) {
        assert(ft_isalnum(c) == isalnum(c));
    }
    for (char c = 'A'; c <= 'Z'; c++) {
        assert(ft_isalnum(c) == isalnum(c));
    }
    printf("Test Case 1 passed.\n");

    // Test Case 2: Numeric characters
    for (char c = '0'; c <= '9'; c++) {
        assert(ft_isalnum(c) == isalnum(c));
    }
    printf("Test Case 2 passed.\n");

    // Test Case 3: Non-alphanumeric characters
    char non_alnum[] = "!@#$%^&*()_+,./<>?;:\"'`~";
    for (size_t i = 0; i < strlen(non_alnum); i++) {
        assert(ft_isalnum(non_alnum[i]) == isalnum(non_alnum[i]));
    }
    printf("Test Case 3 passed.\n");

    // Test Case 4: Negative values
    assert(ft_isalnum(-1) == isalnum(-1));
    printf("Test Case 4 passed.\n");

    // Test Case 5: Maximum possible value
    assert(ft_isalnum(127) == isalnum(127));
    printf("Test Case 5 passed.\n");

    printf("All test cases passed.\n");
    return 0;
}
*/
