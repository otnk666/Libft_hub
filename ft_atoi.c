/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:46:35 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/29 20:54:06 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int flag;
	long int result;

	flag = 1;
	result = 0;
	while((9 <= *str && *str <= 13) || *str == ' ')
			str++;

	
	while(*str == '-' || *str == '+')
	{
		if(*str == '-')
			flag = flag * -1;
		str++;
	}

	while (*str != '\0' &&  '0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result = result * flag;
	if(2147483647 <= result)
		return(2147483647);
	if(result <= -2147483648)
		return(-2147483648);
	return((int) result);
}
