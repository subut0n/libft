/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:05:20 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/10 19:25:53 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    unsigned int i;

    i = 0;
    if (!s)
        return (NULL);
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if (s[i] == (char) c)
		return ((char *)&s[i]);
    return (NULL);
}