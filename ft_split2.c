/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:45:18 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/08 15:45:44 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int find_numb_strings(char const *s, char c)
{
    int i;
    int nbrWords;

    i = 0;
    nbrWords = 0;
    while (s[i])
    {
        while (s[i] != c)
        {
            if (s[i + 1] == c || s[i + 1] == '\0')
                nbrWords++;
            i++;
        }
        i++;
    }
    return (nbrWords);
}