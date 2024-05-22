/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:46:35 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/18 19:15:23 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int flag;
	long int result;

	flag = 1;
	result = 0;
	while(*str == ' ' || *str == '\t' || *str == '\n' || *str =='\v' || *str == '\f' || *str == '\r')
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
	if(2147483647 < result)
		return(214748364);
	if(result < -2147483648)
		return(-2147483648);
	return((int) result);
}