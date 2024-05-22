/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:42:10 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/03 18:09:20 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;

	i = 0;
	
	if(!dest && !src)
	{
		return(NULL);
	}
	else if(d < s)
	{
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while(0 < n)
		{
			n--;
			d[n] = s[n];
		}
	}
	return(dest);
}