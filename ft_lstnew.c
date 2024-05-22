/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 02:03:05 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/09 05:28:55 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *lst;

    lst = (t_list*)malloc(sizeof(*lst));
    if(!lst)
        return(NULL);
    
    lst -> content = content;
    lst -> next = NULL;
    return(lst);
}