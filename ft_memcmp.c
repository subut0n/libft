/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:03:27 by addzikow          #+#    #+#             */
/*   Updated: 2020/11/26 16:03:30 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(void *s1, void *s2, size_t n)
{
    size_t i;
    char *s1tobyte;
    char *s2tobyte;

    i = 0;
    s1tobyte = (char *)s1;
    s2tobyte = (char *)s2;
    while (s1tobyte[i] && s2tobyte[i] && i < n)
    {
        if (s1tobyte[i] == s2tobyte[i])
            i++;
        else
            return (s1tobyte[i] - s2tobyte[i]);
    }
    return (0);
}