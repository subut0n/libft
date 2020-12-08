/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:04:57 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/08 17:39:17 by addzikow         ###   ########lyon.fr   */
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

static void free_malloc(char **tab)
{
    int i;

    i = 0;
    while (tab)
    {
        free(tab[i]);
        i++;
    }
}

static int malloc_strings(char const *s, char c, char **tab)
{
    int i;
    int j;
    int wordlen;

    i = 0;
    j = 0;
    wordlen = 0;
    while (s[i])
    {
        while (s[i] != c && s[i++])
            wordlen++;
        if(wordlen > 0 && !(tab[j++] = malloc(sizeof(char) * (wordlen + 1))))
        {
            free_malloc(tab);
            return (0);
        }
        wordlen = 0;
        if (s[i] == c)
            i++;
    }
    return (1);
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
        while (s[i] != c)
            tab[j][k++] = s[i++];
        if (k > 0)
        {
            j++;
            tab[j][k] = '\0';
        }
        while (s[i] == c)
            i++;
        k = 0;
    }
}

char    **ft_split(char const *s, char c)
{
    int nbr_strings;
    char **tab;
    int is_malloc_ok;
    
    nbr_strings = find_numb_strings(s, c);
    if(!(tab = malloc(sizeof(char *) * (nbr_strings + 1))))
        return (NULL);
    tab[nbr_strings] = 0;
    is_malloc_ok = malloc_strings(s, c, tab);
    if (is_malloc_ok == 0)
    {
        free(tab);
        return (NULL);
    }
    else
        copy_strings(s, c, tab);
    return (tab);
}