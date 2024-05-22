/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 02:05:17 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/09 07:54:13 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *result;
    int i;

    i = 0;

    result = (char *)malloc(len + 1);
    if(!result)
        return(NULL);
    while( start < start + len)
    {
        result[i] = s[start]; 
        i++;
        start++;
    }
    return(result);
}