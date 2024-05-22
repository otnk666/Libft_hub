/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 02:05:07 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/09 02:05:10 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char * str;
    size_t len;
    size_t i;

    i = 0;
    len =ft_strlen(s);

    str = (char *)malloc(sizeof(char)*(len+1));
    if(!str)
        return(NULL);
    while(i < len)
    {
        str[i] = (*f)(i, str[i]);
        i++;
    }
    return(str);
}