/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:18:10 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/03 15:32:56 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void(*del)(void *))
{
    t_list *element;

    element = *lst;
    if (*lst == NULL)
		return ;
	while (element->next)
    {
        if (del)
            del(element->content);
        free(element);
    }
}