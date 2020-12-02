/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:51:10 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/02 17:33:38 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *temp;

    temp = *alst;
    if (!alst || !new)
        return (NULL);
    if (temp == NULL)
        *alst = new;
    while(temp->next)
        temp = temp->next;
    temp->next = new;
}