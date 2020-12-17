/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:00:37 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/17 17:08:20 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	numb_of_digits(int n)
{
    int		numb;
    long	nb;

    nb = n;
    numb = 0;
    if (nb < 0)
        nb = -nb;
    if (nb == 0)
        numb = 1;
    while (nb > 0)
    {
        nb = nb / 10;
        numb++;
    }
    return (numb);
}

static char	*malloc_string(int n)
{
    char	*str;

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

static char	*pos_transcripted_string(int n, char * str)
{
    int		i;
    long	nbr;

    nbr = n;
    i = numb_of_digits(n) - 1;
    if (n == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return(str);
    }
    while (i >= 0)
    {
        str[i--] = (nbr % 10) + 48;
        nbr = nbr / 10;
    }
    return (str);
}

static char	*neg_transcripted_string(int n, char *str)
{
    int		i;
    long	nbr;

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

char		*ft_itoa(int n)
{
    char	*str;

    str = malloc_string(n);
    if (n < 0)
        str = neg_transcripted_string(n, str);
    else
        str = pos_transcripted_string(n, str);
    return (str);
}