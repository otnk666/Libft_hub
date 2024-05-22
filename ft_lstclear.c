/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 02:01:35 by skomatsu          #+#    #+#             */
/*   Updated: 2024/05/09 04:42:46 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;

    if (lst == NULL)
        return;

    while (*lst != NULL)
    {
        temp = (*lst)->next;
        if (del != NULL)
            del((*lst)->content);
        else
            free((*lst)->content);
        *lst = temp;
    }
}