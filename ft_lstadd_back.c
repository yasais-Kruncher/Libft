/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhindou <ykhindou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:27:00 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 15:44:07 by ykhindou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    if(new == NULL)
        return ;
    if(*lst == NULL)
    {
        *lst = new;
        return ;
    }
    tmp = *lst;
    while((tmp)->next)
    {
        tmp = tmp->next;
    }
    tmp->next = new;

}
