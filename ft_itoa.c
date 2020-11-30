/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:00:37 by addzikow          #+#    #+#             */
/*   Updated: 2020/11/29 15:34:49 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int numb_of_digits(int n)
{
    int numb;

    numb = 0;
    if (n < 0)
        n = -n;
    if (n == 0)
        numb = 1;
    while (n > 0)
    {
        n = n / 10;
        numb++;
    }
    return (numb);
}

static char *malloc_string(int n)
{
    char *str;

    if (n < 0)
    {
        if(!(str = malloc(sizeof(char) * (numb_of_digits(n) + 2))))
            return (NULL);
    }
    else
    {
        if(!(str = malloc(sizeof(char) * (numb_of_digits(n) + 1))))
            return (NULL);
    }
    return (str);
}

static char *pos_transcripted_string(int n, char * str)
{
    int i;
    long nbr;

    nbr = n;
    i = numb_of_digits(n) - 1;
    while (i >= 0)
    {
        str[i--] = (nbr % 10) + 48;
        nbr = nbr / 10;
    }
    return (str);
}

static char *neg_transcripted_string(int n, char *str)
{
    int i;
    long nbr;

    nbr = n;
    i = numb_of_digits(n);
    str[0] = '-'; 
    nbr = -nbr;
    while (i >= 1)
    {
        str[i--] = (nbr % 10) + 48;
        nbr = nbr / 10;
    }
    return (str);
}

char    *ft_itoa(int n)
{
    char *str;

    str = malloc_string(n);
    if (n < 0)
        str = neg_transcripted_string(n, str);
    else
        str = pos_transcripted_string(n, str);
    return (str);
}

/* #include <stdio.h>

int main()
{
    int nbr;
    char *str;

    nbr = 1;
    str = ft_itoa(nbr);
    printf("%s\n", str);
} */