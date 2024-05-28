/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 22:13:44 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/09 06:40:37 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;

	while(i < n && s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
		{
			return(s1[i] - s2[i]);
		}
		i++;
	}
	if(i == n)
		return(0);
	return(s1[i] - s2[i]);
}
