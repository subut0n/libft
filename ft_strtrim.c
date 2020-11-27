/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:07:14 by addzikow          #+#    #+#             */
/*   Updated: 2020/11/26 17:25:12 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
            return (1);
        else
            i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char *tab;
	int i;
	int j;
	int k;
	int count;

	i = 0;
	count = 0;
	while (is_set(str[++i], set) == 1)
		count++;
	j = ft_strlen(str) - 1;
	while (is_set(str[--j], set) == 1)
		count++;
	if (!(tab = malloc(sizeof(char) * (ft_strlen(str) - count + 1))))
		return (NULL);
	k = 0;
	while (i != j+1)
		tab[k++] = str[i++];
	tab[k] = '\0';
	return (tab);
}