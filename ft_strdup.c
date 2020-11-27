/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:05:34 by addzikow          #+#    #+#             */
/*   Updated: 2020/11/26 17:03:38 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *tab;
	int size;
	int i;

	i = 0;
	size = 0;
	while (s[i])
	{
		size++;
		i++;
	}
	tab = malloc(sizeof(s) * size + 1);
	i = 0;
	while (s[i])
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}	