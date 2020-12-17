/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:07:14 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/17 12:05:06 by addzikow         ###   ########lyon.fr   */
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
	int start;
	int end;
	size_t count;

	start = 0;
	count = 0;
	if (!str)
		return (NULL);
	if (!set)
		return(ft_strdup(str));
	while (is_set(str[start++], set))
		count++;
	end = ft_strlen(str) - 1;
	while(end > start && is_set(str[end], set))
	{
		count++;
		end--;
	}
	if (count == ft_strlen(str))
	{
		if(!(tab = malloc(sizeof(char) * 1)))
			return (NULL);
		tab[0] = '\0';
	}
	else
		tab = ft_substr(str, start, (ft_strlen(str) - count));
	return (tab);
}