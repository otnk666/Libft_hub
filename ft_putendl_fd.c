/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 02:03:49 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/09 05:42:05 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    size_t len;

    len = ft_strlen(s);
    if(len < 11)
    {
        while(s)
        {
            write(fd, s,1);
            s++;
        }
            write(fd, "\n" , 1);
    }
    else
    {
		
    }
}