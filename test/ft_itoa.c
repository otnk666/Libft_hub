/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 02:03:23 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/09 02:25:28 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{

	return(0);

    char *str;
    char *temp;

    int count;

    temp = ft_putnbr(n);
    count = ft_strlen(temp);
    str = (char *) malloc(sizeof(char)*12);
   
}

char *ft_putnbr(int n)
{
    char *result;
    int i;

    if(n == -2147483648)
    {
        write(i, "-2147483648", 12);
    }
    if(n < 0)
    {
        write(i, "-", 1);
        n *= -1;
    } 
    if(n >= 10)
    {
        ft_putnbr( n / 10, i);
        ft_putnbr( n % 10, i);
    }
    else
    {
        result = n + '0';
        write(i, &result, 1);
    }

}