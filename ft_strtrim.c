/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:07:14 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/09 16:06:03 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char *tab;
	int i;
	int j;
	size_t count;

	i = 0;
	count = 0;
	while (is_set(str[i++], set))
		count++;
	j = ft_strlen(str) - 1;
	while(j > i && is_set(str[j], set))
	{
		count++;
		j--;
	}
	if (count == ft_strlen(str))
	{
		if(!(tab = malloc(sizeof(char) * 1)))
			return (NULL);
		tab[0] = '\0';
	}
	else
		tab = ft_substr(str, i, (ft_strlen(str) - count));
	return (tab);
}