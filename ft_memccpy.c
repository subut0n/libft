/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:00:52 by addzikow          #+#    #+#             */
/*   Updated: 2020/11/28 15:33:48 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;
    char *s1tobyte;
    char *s2tobyte;

    i = 0;
    s1tobyte = (char *)dest;
    s2tobyte = (char *)src;
    while (s1tobyte[i] && s2tobyte[i] && i < n && s2tobyte[i] != c)
    {
        if (s1tobyte[i] == s2tobyte[i])
            i++;
        else
            return (s2tobyte);
    }
    return (0);
}