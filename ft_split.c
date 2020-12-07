/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:04:57 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/07 19:07:55 by addzikow         ###   ########lyon.fr   */
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

static void malloc_strings(char const *s, char c, char **tab)
{
    int i;
    int j;
    int wordlen;

    i = 0;
    j = 0;
    wordlen = 0;
    while (s[i])
    {
        while (s[i] != c && s[i])
        {
            wordlen++;
            i++;
        }
        tab[j] = malloc(sizeof(char) * (wordlen + 1));
        wordlen = 0;
        j++;
        if (s[i] == c)
            i++;
    }
}

static void copy_strings(char const *s, char c, char **tab)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    while (s[i])
    {
        while (s[i] != c && s[i])
            tab[j][k++] = s[i++];
        tab[j][k] = '\0';
        k = 0;
        j++;
        if (s[i] == c)
            i++;
    }
    tab[j] = NULL;
}

char    **ft_split(char const *s, char c)
{
    int nbr_strings;
    char **tab;
    
    nbr_strings = find_numb_strings(s, c);
    tab = malloc(sizeof(char *) * (nbr_strings + 1));
    tab[nbr_strings] = 0;
    malloc_strings(s, c, tab);
    copy_strings(s, c, tab);
    return (tab);
}