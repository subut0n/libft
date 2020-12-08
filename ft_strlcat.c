/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:05:57 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/08 14:38:37 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t count)
{
    size_t i;
    int dest_length;
    char *tab;

    i = 0;
    dest_length = ft_strlen(dest);
    tab = &dest[dest_length];
    if (dest_length >= count)
        return (ft_strlen(src) + count);
    while (src[i++] && i < ((count - 1) - dest_length))
        tab[i] = src[i];
    tab[i] = '\0';
    return (ft_strlen(src) + dest_length);
}