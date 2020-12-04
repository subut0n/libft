/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:03:06 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/04 12:18:02 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *tobyte;

    i = 0;
    tobyte = (char *)s;
    while (i < n && tobyte[i] != (char)c)
        i++;
    if (i == n)
        return ;
    return((void *)tobyte);

}