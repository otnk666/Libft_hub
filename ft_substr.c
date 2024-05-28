/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 02:05:17 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/28 22:19:58 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *result;
    size_t i;
	size_t s_len;

	if(!s)
		return(NULL);

	s_len = ft_strlen(s);

    i = 0;

    result = (char *)ft_calloc(len + 1, sizeof(char));
    if(!result)
        return(NULL);
    
	if((start >= s_len) ||(len == 0))
		return(result);
	
	while( start < (start + len))
    {
        result[i] = s[start];
        i++;
        start++;
    }
    return(result);
}
