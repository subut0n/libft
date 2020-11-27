/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:00:52 by addzikow          #+#    #+#             */
/*   Updated: 2020/11/26 16:01:33 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;
    char *srctobyte;
    char *desttobyte;

    i = 0;
    srctobyte = (char *)src;
    desttobyte = (char *)dest;
    while ((i < n) || desttobyte[i] == c)
    {
        desttobyte[i] = srctobyte[i];
        i++;
    }
    dest = (void *)desttobyte;
    return (dest);
}