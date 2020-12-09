/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:30:32 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/09 17:35:40 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *list;
    t_list *new_list;

    list = lst;
    new_list = list;
    while (list)
    {
        if(!(new_list = ft_lstnew(f(list->content))))
        {
            ft_lstclear(&list, del);
            free(list);
        }
        ft_lstadd_back(&list, new_list);
        list = list->next;
        new_list = new_list->next;
    }
    return (new_list);
}