/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:05:57 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/17 16:08:39 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t i;
    size_t dest_length;
    size_t src_length;
    // char *tab;

    dest_length = ft_strlen(dest);
    src_length = ft_strlen(src);
    i = 0;
    dstsize = 0; //attention JUSTE POUR COMPIL
    // if (dstsize < dest_length)
    //     return (src_length + dest_length);
    // while (src[i] && dest_length + i + 1 < dstsize)
    // {
    //     tab[dest_length + i] = src[i];
    //     i++;
    // }
    // dest[dest_length + i] = '\0';
    return (src_length + dest_length);
}

// int main()
// {
//     char *dest = "coucou";
//     char *src = "beuh";
//     size_t dstsize = 10;
//     size_t yo;

//     yo = strlcat(dest, src, dstsize);
// }