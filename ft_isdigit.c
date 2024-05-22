#include "libft.h"

int		ft_isdigit(int c)
{
	return('0'<= c && c <= '9');
}
/*
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main() {
    // Test Case 1: Digits
    for (char c = '0'; c <= '9'; c++) {
        assert(ft_isdigit(c) == isdigit(c));
    }
    printf("Test Case 1 passed.\n");

    // Test Case 2: Non-digit characters
    char non_digit[] = "abcABC!@#$%^&*()_+";
    for (size_t i = 0; i < strlen(non_digit); i++) {
        assert(ft_isdigit(non_digit[i]) == isdigit(non_digit[i]));
    }
    printf("Test Case 2 passed.\n");

    // Test Case 3: Negative values
    assert(ft_isdigit(-1) == isdigit(-1));
    printf("Test Case 3 passed.\n");

    // Test Case 4: Maximum possible value
    assert(ft_isdigit(127) == isdigit(127));
    printf("Test Case 4 passed.\n");

    printf("All test cases passed.\n");
    return 0;
}
*/