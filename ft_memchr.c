/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:03:06 by addzikow          #+#    #+#             */
/*   Updated: 2020/11/26 16:52:21 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *tobyte;

    i = 0;
    tobyte = (char *)s;
    while (i < n)
    {
        if (tobyte[i] != c)
            i++;
        else 
            return((void *)tobyte);
    }
    return (0);
}