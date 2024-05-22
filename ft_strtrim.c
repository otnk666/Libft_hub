/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 02:05:12 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/09 06:12:25 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;

    i = ft_strlen(s1);
    if(!s1 || !set)
        return(0);
        
    while(s1 && ft_strchr(set, *s1))
        s1++;
    while(i && ft_strchr(set,s1[i]))
        i--;
    return(ft_substr(s1, 0, i+1));
}